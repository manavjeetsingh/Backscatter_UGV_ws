import open3d as o3d
import numpy as np

# ==========================================
# CONFIGURATION
# ==========================================
FLIP_NORMALS = True  # Set to False if the mesh faces the right way
EXP_FOLDER = "east1_2"
EXP_PATH = f'experiments/{EXP_FOLDER}/point_cloud_out'
# ==========================================

print(f"Loading point cloud from {EXP_FOLDER}...")
pcd = o3d.io.read_point_cloud(f"{EXP_PATH}/final_pointcloud.ply")

# --- Fix BGR to RGB and Normalize Colors ---
colors = np.asarray(pcd.colors)
# If values are 0-255, scale to 0-1
if colors.max() > 1.0:
    colors = colors / 255.0
# Swap BGR to RGB
pcd.colors = o3d.utility.Vector3dVector(colors[:, [2, 1, 0]])

# --- Normals Calculation ---
print("Estimating normals...")
pcd.estimate_normals(search_param=o3d.geometry.KDTreeSearchParamHybrid(radius=0.1, max_nn=30))

# Standardize orientation across the surface
pcd.orient_normals_consistent_tangent_plane(100)

# Global Flip control
if FLIP_NORMALS:
    # We multiply by -1 to invert the direction of the surface
    pcd.normals = o3d.utility.Vector3dVector(-1 * np.asarray(pcd.normals))

# --- Poisson Reconstruction ---
# Poisson relies heavily on the direction of these normals to define "inside" vs "outside"
print("Running Poisson reconstruction...")
mesh, densities = o3d.geometry.TriangleMesh.create_from_point_cloud_poisson(pcd, depth=9)

# --- Post-processing ---
# Remove low-density artifacts (the "bubble" effect often seen in Poisson)
vertices_to_remove = densities < np.quantile(densities, 0.05)
mesh.remove_vertices_by_mask(vertices_to_remove)

# --- Save and Viz ---
mesh_frame = o3d.geometry.TriangleMesh.create_coordinate_frame(size=1.0)
print("Opening visualization...")
o3d.visualization.draw_geometries([mesh, mesh_frame])

output_file = f"{EXP_PATH}/final_mesh.ply"
o3d.io.write_triangle_mesh(output_file, mesh)
print(f"Saved to: {output_file}")