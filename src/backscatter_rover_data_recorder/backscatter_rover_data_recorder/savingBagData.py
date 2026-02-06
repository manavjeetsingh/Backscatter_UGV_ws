import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, Image
import sensor_msgs_py.point_cloud2 as pc2
import cv2
from cv_bridge import CvBridge
import numpy as np
import open3d as o3d
import os


class BagSaver(Node):
    def __init__(self):
        super().__init__('bag_saver')


        self.declare_parameter('expmt_name', 'Experiment_any')
        self.expmt_name = self.get_parameter('expmt_name').value + "_dataout"

        os.makedirs(self.expmt_name, exist_ok=True)

        self.pc_subscriber = self.create_subscription(
            PointCloud2, '/cloud_map', self.pc_callback, 10)

        self.image_subscriber = self.create_subscription(
            Image, '/camera/color/image_raw', self.image_callback, 10)

        #self.map_subscriber = self.create_subscription(
        #    PointCloud2, '/grid_prob_map', self.map_callback, 10)

        self.bridge = CvBridge()
        self.latest_pc = None
        self.latest_image = None
        self.img_cnt=0

        self.video = cv2.VideoWriter(f"{self.expmt_name}/images.mp4", cv2.VideoWriter_fourcc(*'mp4v'), 30, (640, 360))

        self.get_logger().info("Bag Saver node started.")

    def pc_callback(self, msg):
        self.latest_pc = msg
        self.get_logger().info(f"Received point cloud. {self.latest_pc is None}")


    def image_callback(self, msg):

        self.latest_image = msg
        self.get_logger().info("Received image.")
        self.img_cnt+=1

        if self.img_cnt%10==0:
            cv_image = self.bridge.imgmsg_to_cv2(self.latest_image, "bgr8")
            # print(cv_image.shape)
            self.video.write(cv_image)

            # cv_image = self.bridge.imgmsg_to_cv2(self.latest_image, "bgr8")
            # cv2.imwrite(f"{self.expmt_name}/final_image{self.img_cnt}.jpeg", cv_image)
            self.get_logger().info("Saved final image.")
            

    def save_final_data(self):
        if self.latest_pc:
            field_names = ("x", "y", "z", "rgb")
            points = np.array(list(pc2.read_points(
                self.latest_pc, field_names=field_names, skip_nans=False)))
            pc_o3d = o3d.geometry.PointCloud()
            pc_o3d.points = o3d.utility.Vector3dVector(points[:, :3])
            colors = points[:, 3]
            colors = colors.astype(np.float32)
            colors = colors[:,None].view(np.uint8)
            colors_vec =  o3d.utility.Vector3dVector(colors[:, :3].astype(np.float32)/255.)
            pc_o3d.colors = colors_vec
            o3d.io.write_point_cloud(f"{self.expmt_name}/final_pointcloud.ply", pc_o3d)
            self.get_logger().info("Saved final point cloud.")
            o3d.visualization.draw_geometries([pc_o3d])
        if self.latest_image:
            self.video.release()


        


def main(args=None):
    rclpy.init(args=args)
    bag_saver = BagSaver()

    try:
        rclpy.spin(bag_saver)
    except KeyboardInterrupt:
        bag_saver.get_logger().info('Interrupted. Saving final data...')
        bag_saver.save_final_data()
    finally:
        bag_saver.destroy_node()
        rclpy.shutdown()
