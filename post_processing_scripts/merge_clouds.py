import open3d as o3d
import numpy as np
import copy

def preprocess_point_cloud(pcd, voxel_size):
    # Downsample
    pcd_down = pcd.voxel_down_sample(voxel_size)
    
    # Estimate Normals
    pcd_down.estimate_normals(
        o3d.geometry.KDTreeSearchParamHybrid(radius=voxel_size * 2, max_nn=30))
    
    # Compute FPFH Features
    pcd_fpfh = o3d.pipelines.registration.compute_fpfh_feature(
        pcd_down,
        o3d.geometry.KDTreeSearchParamHybrid(radius=voxel_size * 5, max_nn=100))
    return pcd_down, pcd_fpfh

def execute_global_registration(source_down, target_down, source_fpfh,
                                target_fpfh, voxel_size):
    distance_threshold = voxel_size * 1.5
    # RANSAC based on feature matching
    result = o3d.pipelines.registration.registration_ransac_based_on_feature_matching(
        source_down, target_down, source_fpfh, target_fpfh, True,
        distance_threshold,
        o3d.pipelines.registration.TransformationEstimationPointToPoint(False),
        3, [
            o3d.pipelines.registration.CorrespondenceCheckerBasedOnEdgeLength(0.9),
            o3d.pipelines.registration.CorrespondenceCheckerBasedOnDistance(
                distance_threshold)
        ], o3d.pipelines.registration.RANSACConvergenceCriteria(100000, 0.999))
    return result

def refine_registration(source, target, result_ransac, voxel_size):
    distance_threshold = voxel_size * 0.4
    # Point-to-Plane ICP for fine tuning
    result = o3d.pipelines.registration.registration_icp(
        source, target, distance_threshold, result_ransac.transformation,
        o3d.pipelines.registration.TransformationEstimationPointToPlane())
    return result

# --- MAIN ---

# 1. Load your clouds
source = o3d.io.read_point_cloud("final_cloud.ply")
target = o3d.io.read_point_cloud("FiveTags1_Step1_1_dataout/final_pointcloud.ply")
voxel_size = 0.05  # 5cm voxels (adjust based on room scale)

# 2. Preprocess
source_down, source_fpfh = preprocess_point_cloud(source, voxel_size)
target_down, target_fpfh = preprocess_point_cloud(target, voxel_size)

o3d.visualization.draw_geometries([source])
o3d.visualization.draw_geometries([target])
# 3. Global Registration (RANSAC)
print("Running Global Registration...")
result_ransac = execute_global_registration(source_down, target_down,
                                            source_fpfh, target_fpfh,
                                            voxel_size)

# 4. Local Registration (ICP)
print("Running Local Refinement...")
result_icp = refine_registration(source_down, target_down, result_ransac, voxel_size)

# 5. Transform and Stitch
source.transform(result_icp.transformation)
combined_cloud = source + target

# 6. Save/View
o3d.visualization.draw_geometries([combined_cloud])
# o3d.io.write_point_cloud("merged_room.pcd", combined_cloud)
