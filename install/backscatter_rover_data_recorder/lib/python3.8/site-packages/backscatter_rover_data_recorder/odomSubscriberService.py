import rclpy
from rclpy.node import Node

from nav_msgs.msg import Odometry
from rclpy_message_converter import message_converter
from backscatter_movement_record_msgs_srvs.srv import OdomRecord
from backscatter_movement_record_msgs_srvs.msg import OdomWithExpmtFlag

import json
import os
class DataSaveService(Node):

    def __init__(self):
        super().__init__('data_save_service')

        self.subscription = self.create_subscription(
            Odometry,
            '/topic',
            self.listener_callback,
            10)
        self.service = self.create_service(
            OdomRecord, '/record_pose', self.service_clbk
        )  # prevent unused variable warning
        
        #self.declare_parameter('expmt_name', 'Experiment1')
        # Retrieve the parameter's value
        #self.expmt_name = self.get_parameter('experiment_name').value

        self.msg = OdomWithExpmtFlag()
    def service_clbk(self, req:OdomRecord.Request, resp:OdomRecord.Response):
        print(f"Recieved call: {req}")
        resp.resp = False
        if req.req:
            self.msg.expmt_flag = req.backscatter_expmt_flag
            msg_dict = message_converter.convert_ros_message_to_dictionary(self.msg)
            if not os.path.isfile(f"{req.expmt_name}.json"):
                with open(f"{req.expmt_name}.json", 'w+') as f:
                    json.dump([msg_dict], f, indent=4)
            else:
                with open(f"{req.expmt_name}.json", 'r') as f:
                    present_data = json.load(f)
                    present_data.append(msg_dict)
                with open(f"{req.expmt_name}.json", 'w') as f:
                    json.dump(present_data, f, indent=4)
            resp.resp = True
        print(f"Sending Resp: {resp}")
        return resp
    def listener_callback(self, msg):
        print(self.msg)
        self.msg.odom = msg


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = DataSaveService()
    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
