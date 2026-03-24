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
        o_w=data[idx]["odom"]["pose"]["pose"]['orientation']['w']
        orientation_all.append([o_x,o_y,o_z,o_w])

        if data[idx]["expmt_flag"]:
            pos_expmts.append([x,y,z])
            orientation_expmts.append([o_x,o_y,o_z,o_w])

    return pos_expmts, pos_all, orientation_expmts, orientation_all

def get_dists_from_point(mesh, points, orientations, dirs, verbose=True):
    # --- 0. MODIFY POSITIONS AND ORIENTATIONS ---
    points = np.array(points).copy()
    points[:, 2] += 1.0
    
    r = R.from_quat(orientations)
    euler = r.as_euler('zyx', degrees=False)
    euler[:, 1:3] = 0 
    orientations = R.from_euler('zyx', euler).as_quat()

    # --- 1. SETUP ---
    origin_frame = o3d.geometry.TriangleMesh.create_coordinate_frame(size=0.1)
    pcd = o3d.geometry.PointCloud()
    pcd.points = o3d.utility.Vector3dVector(points)
    pcd.paint_uniform_color([1, 1, 1])

    # --- 2. RAYCASTING LOGIC ---
    num_dirs = dirs.shape[1] 
    points_rep_rays = np.repeat(points, num_dirs, axis=0)
    quats_rep_rays = np.repeat(orientations, num_dirs, axis=0)
    dirs_local_rep = np.tile(dirs[0], (len(points), 1))

    r_rays = R.from_quat(quats_rep_rays)
    dirs_global = r_rays.apply(dirs_local_rep)

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

    # --- NEW: HANDLE BACK-FACING NORMALS ---
    # Dot product: if > 0, the ray and normal point in the same direction (hit from behind)
    dot_products = np.sum(dirs_global * t_norm, axis=1)
    backside_mask = dot_products > 0
    t_norm[backside_mask] = -t_norm[backside_mask]

    # --- 3. VISUALIZE RAYS ---
    viz_lengths = t_hit.copy()
    viz_lengths[np.isinf(viz_lengths)] = 0.5 
    
    ray_ends = points_rep_rays + (dirs_global * viz_lengths.reshape(-1, 1))
    
    ray_lines = o3d.geometry.LineSet()
    all_ray_points = np.vstack((points_rep_rays, ray_ends))
    num_total_rays = len(points_rep_rays)
    ray_indices = [[i, i + num_total_rays] for i in range(num_total_rays)]
    
    ray_lines.points = o3d.utility.Vector3dVector(all_ray_points)
    ray_lines.lines = o3d.utility.Vector2iVector(ray_indices)
    ray_colors = [[0, 1, 1] if not np.isinf(d) else [1, 1, 1] for d in t_hit]
    ray_lines.colors = o3d.utility.Vector3dVector(ray_colors)

    # --- 3.5 VISUALIZE NORMALS ---
    normal_lines = o3d.geometry.LineSet()
    hit_mask = ~np.isinf(t_hit) 
    
    if np.any(hit_mask):
        hit_points = ray_ends[hit_mask]
        hit_normals = t_norm[hit_mask]
        
        normal_viz_len = 0.2 
        normal_ends = hit_points + (hit_normals * normal_viz_len)
        
        all_norm_points = np.vstack((hit_points, normal_ends))
        num_hits = len(hit_points)
        norm_indices = [[i, i + num_hits] for i in range(num_hits)]
        
        normal_lines.points = o3d.utility.Vector3dVector(all_norm_points)
        normal_lines.lines = o3d.utility.Vector2iVector(norm_indices)
        
        # Color coding: Magenta for front hits, Yellow for flipped backside hits
        line_colors = np.zeros((num_hits, 3))
        line_colors[:] = [1, 0, 1] # Magenta
        local_backside = backside_mask[hit_mask]
        line_colors[local_backside] = [1, 1, 0] # Yellow
        normal_lines.colors = o3d.utility.Vector3dVector(line_colors)

    # --- 4. VISUALIZE ORIENTATIONS ---
    axis_len = 0.3
    custom_basis = np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]) * axis_len
    arrow_starts = np.repeat(points, 3, axis=0)
    local_axes = np.tile(custom_basis, (len(points), 1))
    quats_rep_axes = np.repeat(orientations, 3, axis=0)
    global_axes = R.from_quat(quats_rep_axes).apply(local_axes)
    arrow_ends = arrow_starts + global_axes
    orient_lines = o3d.geometry.LineSet()
    all_arrow_points = np.vstack((arrow_starts, arrow_ends))
    orient_lines.points = o3d.utility.Vector3dVector(all_arrow_points)
    orient_lines.lines = o3d.utility.Vector2iVector([[i, i + len(arrow_starts)] for i in range(len(arrow_starts))])
    orient_lines.colors = o3d.utility.Vector3dVector(np.tile([[1, 0, 0], [0, 1, 0], [0, 0, 1]], (len(points), 1)))

    if verbose:
        print("Distances:", t_hit)
        o3d.visualization.draw_geometries([mesh, origin_frame, pcd, ray_lines, orient_lines, normal_lines])

    return t_hit, t_norm

if __name__=="__main__":
    # Ensure paths are correct for your local machine
    experiment_path="/Users/manavjeet/git/Backscatter_UGV_ws/experiments"
    experiment_name="east1_3"
    try:
        mesh = o3d.io.read_triangle_mesh(f'{experiment_path}/{experiment_name}/point_cloud_out/final_mesh.ply')
        pos_exp, pos_all, orientation_exp, orientation_all = extract_pos_odom(load_json(f"{experiment_path}/{experiment_name}/{experiment_name}.json"), plotting=False)

        dirs = np.array([[
            [1., 0, 0],
            [-1, 0, 0],
            [0, 1, 0],
            [0, -1, 0],
        ]])
        
        t_hit, t_norm = get_dists_from_point(mesh, [pos_exp[9]], [orientation_exp[9]], dirs, verbose=True)
        # t_hit, t_norm = get_dists_from_point(mesh, pos_exp, orientation_exp, dirs, verbose=True)
    except Exception as e:
        print(f"Error loading files: {e}")