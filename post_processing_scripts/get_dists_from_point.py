import numpy as np
import open3d as o3d
import json
from scipy.spatial.transform import Rotation as R

def load_json(file_path):
    with open(file_path, 'r') as file:
        data = json.load(file)
    return data


def extract_pos_odom(data, gt=None, plotting=False):
    pos_expmts=[]
    pos_all=[]
    
    orientation_expmts=[]
    orientation_all=[]
    
    for idx in range(len(data)):
        x=data[idx]["odom"]["pose"]["pose"]['position']['x']
        y=data[idx]["odom"]["pose"]["pose"]['position']['y']
        z=data[idx]["odom"]["pose"]["pose"]['position']['z']
        pos_all.append([x,y,z])
        
        o_x=data[idx]["odom"]["pose"]["pose"]['orientation']['x']
        o_y=data[idx]["odom"]["pose"]["pose"]['orientation']['y']
        o_z=data[idx]["odom"]["pose"]["pose"]['orientation']['z']
        # o_w=0
        o_w=data[idx]["odom"]["pose"]["pose"]['orientation']['w']
        orientation_all.append([o_x,o_y,o_z,o_w])

        if data[idx]["expmt_flag"]:
            pos_expmts.append([x,y,z])
            orientation_expmts.append([o_x,o_y,o_z,o_w])

    return pos_expmts, pos_all, orientation_expmts, orientation_all

def get_dists_from_point(mesh, points, orientations, dirs, verbose=True):
    
    # --- 0. MODIFY POSITIONS AND ORIENTATIONS ---
    
    # A. Raise the points by 1 meter (Assuming Z is Up)
    # We use copy() to avoid modifying the original array outside the function
    points=np.array(points)
    points = points.copy()
    points[:, 2] += 1.0
    
    # B. Make orientations parallel to ground (Leveling)
    # 1. Convert Quaternions to Euler angles (Z-Y-X sequence usually isolates Yaw-Pitch-Roll)
    r = R.from_quat(orientations)
    euler = r.as_euler('zyx', degrees=False)
    
    # 2. Keep only the Yaw (rotation around Z), set Pitch (Y) and Roll (X) to 0
    # euler[:, 0] is Z-axis rotation (Yaw)
    # euler[:, 1] is Y-axis rotation (Pitch) -> Set to 0
    # euler[:, 2] is X-axis rotation (Roll)  -> Set to 0
    euler[:, 1] = 0
    euler[:, 2] = 0
    
    # 3. Convert back to Quaternions
    orientations = R.from_euler('zyx', euler).as_quat()


    # --- 1. SETUP & VISUALIZATION OF ORIGINS ---
    origin_frame = o3d.geometry.TriangleMesh.create_coordinate_frame(size=0.1)
    
    pcd = o3d.geometry.PointCloud()
    pcd.points = o3d.utility.Vector3dVector(points)
    pcd.paint_uniform_color([1, 1, 1]) # White dots for origin points

    
    # --- 2. RAYCASTING LOGIC ---
    num_dirs = dirs.shape[1] 
    
    # Repeat data for vectorization
    points_rep_rays = np.repeat(points, num_dirs, axis=0)
    quats_rep_rays = np.repeat(orientations, num_dirs, axis=0)
    
    # Use dirs[0] directly if dirs shape is (1, M, 3)
    dirs_local_rep = np.tile(dirs[0], (len(points), 1))

    # Apply Rotation
    r_rays = R.from_quat(quats_rep_rays)
    dirs_global = r_rays.apply(dirs_local_rep)

    # Cast Rays
    rays_tensor = o3d.core.Tensor(
        np.concatenate([points_rep_rays, dirs_global], axis=1),
        dtype=o3d.core.Dtype.Float32
    )

    scene = o3d.t.geometry.RaycastingScene()
    mesh_t = o3d.t.geometry.TriangleMesh.from_legacy(mesh)
    scene.add_triangles(mesh_t)
    
    results = scene.cast_rays(rays_tensor)
    t_hit = results['t_hit'].numpy()
    t_norm = results['primitive_normals'].numpy()


    # --- 3. VISUALIZE RAYS ---
    viz_lengths = t_hit.copy()
    viz_lengths[np.isinf(viz_lengths)] = 0.5 
    # viz_lengths[:] = 0
    
    ray_ends = points_rep_rays + (dirs_global * viz_lengths.reshape(-1, 1))
    
    ray_lines = o3d.geometry.LineSet()
    all_ray_points = np.vstack((points_rep_rays, ray_ends))
    
    num_total_rays = len(points_rep_rays)
    ray_indices = [[i, i + num_total_rays] for i in range(num_total_rays)]
    
    ray_lines.points = o3d.utility.Vector3dVector(all_ray_points)
    ray_lines.lines = o3d.utility.Vector2iVector(ray_indices)
    
    # Cyan for hit, White for miss
    ray_colors = [[0, 1, 1] if not np.isinf(d) else [1, 1, 1] for d in t_hit]
    ray_lines.colors = o3d.utility.Vector3dVector(ray_colors)


    # --- 4. VISUALIZE ORIENTATIONS (CUSTOM BASIS) ---
    
    axis_len = 0.3
    
    # DEFINING YOUR CUSTOM LOCAL AXES
    # Red=Y(Local), Green=-X(Local), Blue=Z(Local)
    custom_basis = np.array([
        [0, 1, 0], 
        [-1, 0, 0], 
        [0, 0, 1]
    ]) * axis_len
    
    # 3 lines per point
    arrow_starts = np.repeat(points, 3, axis=0)
    
    # Tile the custom basis for every point
    local_axes = np.tile(custom_basis, (len(points), 1))
    
    # Rotate these custom axes by the NEW leveled quaternion
    quats_rep_axes = np.repeat(orientations, 3, axis=0)
    r_axes = R.from_quat(quats_rep_axes)
    global_axes = r_axes.apply(local_axes)
    
    arrow_ends = arrow_starts + global_axes
    
    orient_lines = o3d.geometry.LineSet()
    all_arrow_points = np.vstack((arrow_starts, arrow_ends))
    
    num_arrows = len(arrow_starts)
    arrow_indices = [[i, i + num_arrows] for i in range(num_arrows)]
    
    orient_lines.points = o3d.utility.Vector3dVector(all_arrow_points)
    orient_lines.lines = o3d.utility.Vector2iVector(arrow_indices)
    
    # Colors: R, G, B repeating
    arrow_colors = np.tile([[1, 0, 0], [0, 1, 0], [0, 0, 1]], (len(points), 1))
    orient_lines.colors = o3d.utility.Vector3dVector(arrow_colors)

    if verbose:
        # --- 5. DRAW ---
        print("Distances:", t_hit)
        print("Norms", t_norm)
        o3d.visualization.draw_geometries([mesh, origin_frame, pcd, ray_lines, orient_lines])

    return t_hit, t_norm

if __name__=="__main__":
    experiment_path="/Users/manavjeet/git/Backscatter_UGV_ws/experiments"
    experiment_name="northeast0"
    mesh = o3d.io.read_triangle_mesh(f'{experiment_path}/{experiment_name}/point_cloud_out/final_mesh.ply')
    pos_exp, pos_all, orientation_exp, orientation_all = extract_pos_odom(load_json(f"{experiment_path}/{experiment_name}/{experiment_name}.json"), plotting=False)

    # points = np.array([
    #     [0.0, 0.0, 0],
    #     [0.0, -0.2, 0]
    # ])

    dirs = np.array([[
        [1., 0, 0],
        [-1, 0, 0],
        [0, 1, 0],
        [0, -1, 0],
    ]])
    
    t_hit, t_norm = get_dists_from_point(mesh, [pos_exp[0]], [orientation_exp[0]], dirs,verbose=True)