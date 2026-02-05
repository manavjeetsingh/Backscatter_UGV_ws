import numpy as np
import open3d as o3d

mesh = o3d.io.read_triangle_mesh('final_mesh.ply')
mesh_frame = o3d.geometry.TriangleMesh.create_coordinate_frame(
    size=1.0, 
    origin=[0, 0, 0]
)
o3d.visualization.draw_geometries([mesh, mesh_frame])

points = np.array([
        [0.0, 0.0, 0],
        [0.0, -0.2, 0]
    ])

dirs = np.array([[
            [1., 0, 0],
            [-1, 0, 0],
            [0, 1, 0],
            [0, -1, 0],
            ]])

points_rep = np.repeat(points, len(dirs[0]), axis=0)
dirs_rep = np.repeat(dirs, len(points), axis=0).reshape([len(dirs[0])*len(points), 3])
rays = o3d.core.Tensor(
    np.concatenate([points_rep, dirs_rep], axis=1),
    dtype=o3d.core.Dtype.Float32
)

print(rays)
# Load mesh and convert to open3d.t.geometry.TriangleMesh
# Create a scene and add the triangle mesh
scene = o3d.t.geometry.RaycastingScene()
mesh = o3d.t.geometry.TriangleMesh.from_legacy(mesh)
scene_id = scene.add_triangles(mesh)

intersections = scene.cast_rays(rays)

print(intersections['t_hit'].numpy()) #the distances in each direction
print(intersections['primitive_normals'].numpy()) #normals at ray intersection
