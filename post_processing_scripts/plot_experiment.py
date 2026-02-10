import open3d as o3d
import json
import numpy as np # Added numpy for handling arrays
from matplotlib import pyplot as plt
import open3d.visualization.rendering as rendering  # Import the modern rendering module
import matplotlib.pyplot as plt
from scipy.spatial.transform import Rotation as R

def load_mesh(exp_path, plotting=False):
    # 1. Read the PLY file as a Mesh
    mesh = o3d.io.read_triangle_mesh(f"{exp_path}/final_mesh.ply")

    # 2. Check if the mesh has data
    if len(mesh.triangles) == 0:
        print("Warning: This PLY file has no triangles. It might be a point cloud.")
    else:
        print(f"Loaded mesh with {len(mesh.vertices)} vertices and {len(mesh.triangles)} triangles.")
        mesh.compute_vertex_normals()
        if plotting:
            o3d.visualization.draw_geometries([mesh], window_name="Mesh View")     
    return mesh

def load_json(file_path):
    with open(file_path, 'r') as file:
        data = json.load(file)
    return data

def plot_poses(pos_all, orientation_all):
    # Convert inputs to numpy arrays for easy slicing
    pos = np.array(pos_all)
    orient = np.array(orientation_all)
    
    # 1. Extract Positions
    x, y, z = pos[:, 0], pos[:, 1], pos[:, 2]
    
    # 2. Convert Quaternions to Direction Vectors
    # We create a Rotation object from the [x, y, z, w] quaternions
    rotations = R.from_quat(orient)
    
    # We apply the rotation to a unit vector [1, 0, 0] 
    # This represents the "Forward" direction (X-axis) of each point
    direction = rotations.apply([1, 0, 0])
    u, v, w = direction[:, 0], direction[:, 1], direction[:, 2]

    # 3. Plotting
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111, projection='3d')

    # Plot the points
    ax.scatter(x, y, z, color='blue', label='Positions', s=20)

    # Plot the orientations as arrows (quiver)
    # length: adjusts the size of the arrows
    # normalize: ensures all arrows have the same length
    ax.quiver(x, y, z, u, v, w, length=0.5, normalize=True, color='red', alpha=0.8, label='Orientation')

    ax.set_xlabel('X Axis')
    ax.set_ylabel('Y Axis')
    ax.set_zlabel('Z Axis')
    ax.set_title('3D Path with Orientations')
    ax.legend()
    ax.set_xlim([-3,3])
    ax.set_ylim([-3,3])
    ax.set_zlim([-3,3])
    
    plt.show()
    
    
def plot_poses_flat(pos_all, orientation_all):
    pos = np.array(pos_all)
    orient = np.array(orientation_all)
    
    x, y, z = pos[:, 0], pos[:, 1], pos[:, 2]
    
    # 1. Convert Quaternions to Euler angles
    # 'zyx' is a common convention; 'z' is the yaw we want to keep.
    rotations = R.from_quat(orient)
    euler_angles = rotations.as_euler('zyx', degrees=False)
    
    # 2. Zero out the Pitch and Roll
    # In 'zyx' convention: index 0 is Yaw, 1 is Pitch, 2 is Roll
    euler_angles[:, 1] = 0  # Zero Pitch (elevation)
    euler_angles[:, 2] = 0  # Zero Roll
    
    # 3. Create a new rotation object with only the Yaw
    flat_rotations = R.from_euler('zyx', euler_angles, degrees=False)
    
    # 4. Get the new direction vectors (Forward = X-axis)
    direction = flat_rotations.apply([1, 0, 0])
    u, v, w = direction[:, 0], direction[:, 1], direction[:, 2]

    # Plotting
    fig = plt.figure(figsize=(10, 8))
    ax = fig.add_subplot(111, projection='3d')

    ax.scatter(x, y, z, color='blue', label='Positions', s=20)
    
    # Note: 'w' (the z-component of the arrow) should now be 0 
    ax.quiver(x, y, z, u, v, w, length=0.5, normalize=True, color='red', alpha=0.8)

    ax.set_xlabel('X Axis')
    ax.set_ylabel('Y Axis')
    ax.set_zlabel('Z Axis')
    ax.set_title('3D Path with Zero Elevation (Yaw Only)')
    
    # Set view to see the "flatness" clearly
    ax.view_init(elev=20, azim=45)
    ax.set_xlim([-3,3])
    ax.set_ylim([-3,3])
    ax.set_zlim([-3,3])
    plt.show()


def extract_plot(data, gt=None, plotting=False):
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

# --- HELPER FUNCTION TO CREATE SPHERES ---
def points_to_spheres(points, radius=0.01, color=[1, 0, 0]):
    """
    Converts a list of (x,y,z) points into a single combined mesh of spheres.
    This allows them to be rendered 'larger' than standard points.
    """
    spheres = []
    for p in points:
        # Create a small sphere mesh at the origin
        sphere = o3d.geometry.TriangleMesh.create_sphere(radius=radius)
        # Move it to the point location
        sphere.translate(p)
        # Color it
        sphere.paint_uniform_color(color)
        spheres.append(sphere)
    
    # Combine all spheres into one mesh for faster rendering
    if spheres:
        combined_mesh = spheres[0]
        for s in spheres[1:]:
            combined_mesh += s
        # Recompute normals so the spheres look round and shiny
        combined_mesh.compute_vertex_normals()
        return combined_mesh
    return None

if __name__ == "__main__":

    print("Loading mesh...")
    exp_path = 'experiments/northeastpartial0'
    json_name = 'northeastpartial0'
    
    pos_exp, pos_all, orientation_exp, orientation_all = extract_plot(load_json(f"{exp_path}/{json_name}.json"), plotting=False)
    
    plot_poses_flat(pos_exp, orientation_exp)
    
    mesh = load_mesh(f"{exp_path}/point_cloud_out", plotting=False)
    
    

    # 1. Background Trajectory (Blue Points)
    pcd_all = o3d.geometry.PointCloud()
    pcd_all.points = o3d.utility.Vector3dVector(pos_all)
    pcd_all.paint_uniform_color([0, 0, 1]) 
    
    # 2. Experimental Points (Spheres)
    # We do NOT paint them here; the material will handle the color
    pcd_exp_mesh = points_to_spheres(pos_exp, radius=0.02)

    # 3. Create the Transparent Material
    mat = rendering.MaterialRecord()
    mat.shader = "defaultLitTransparency"
    # RGBA: Red=1.0, Green=0.0, Blue=0.0, Alpha=0.5 (50% Transparent)
    mat.base_color = [1.0, 0.0, 0.0, 0.5]  

    # 4. Visualize using the Modern API
    print("Visualizing with transparency...")
    
    # The new draw function takes a list of dictionaries defining geometry + material
    o3d.visualization.draw([
        {'name': 'environment', 'geometry': mesh},
        {'name': 'trajectory', 'geometry': pcd_all},
        {'name': 'markers', 'geometry': pcd_exp_mesh, 'material': mat}
    ], show_ui=True)