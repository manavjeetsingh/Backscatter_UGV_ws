import open3d as o3d
import numpy as np

print("Loading point cloud...")
pcd = o3d.io.read_point_cloud("../Experiments_any_dataout/final_pointcloud.ply")

pcd.estimate_normals(search_param=o3d.geometry.KDTreeSearchParamHybrid(radius=0.1, max_nn=30))

pcd.orient_normals_consistent_tangent_plane(100)

pcd.normals = o3d.utility.Vector3dVector( -1 * np.asarray(pcd.normals) )
# 3. Poisson Surface Reconstruction
print("Running Poisson reconstruction...")
# 'depth' determines the resolution of the mesh. Higher = more detail but slower.
# usually 8-10 is a good range.
mesh, densities = o3d.geometry.TriangleMesh.create_from_point_cloud_poisson(
   pcd, depth=9
)
mesh_frame = o3d.geometry.TriangleMesh.create_coordinate_frame(
    size=1.0,
    origin=[0, 0, 0]
)

o3d.visualization.draw_geometries([mesh, mesh_frame])
o3d.io.write_triangle_mesh("final_mesh.ply", mesh)
