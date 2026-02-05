import rclpy
from rclpy.node import Node

from nav_msgs.msg import Odometry
from rclpy_message_converter import message_converter

from backscatter_movement_record_msgs_srvs.msg import OdomWithExpmtFlag
from backscatter_movement_record_msgs_srvs.srv import OdomRecord

from rclpy.executors import MultiThreadedExecutor
from time import sleep
from backscatter_rover_data_recorder.movementAPI import MovementAPI
from backscatter_rover_data_recorder.base_ctrl import BaseController
from threading import Thread
import json
import os

import requests
import numpy as np

class Controller(MovementAPI):

    def __init__(self):
        super().__init__(BaseController('/dev/ttyACM0', 115200), "cmds.txt")
        self.declare_parameter('expmt_name', 'Experiment1')
        self.expmt_name = self.get_parameter('expmt_name').value
        
    def follow_cmds(self, filename):
        #sleep(10)
        with open(filename,'r') as f:
            commands = f.readlines()
        num_expmts = 0
        for command in commands:
            newReq = OdomRecord.Request()
            newReq.req = True
            newReq.expmt_name = self.expmt_name #TODO: Needs to change later
            newReq.backscatter_expmt_flag = False
            newResp = OdomRecord.Response()
            # Ignore comments in the inputs file
            if command.strip()[0]=='#':
                continue
            if command.strip().split()[0] == 'expmt' or command.strip().split()[0] == 'experiment':
                print(f"\nFollowing command: {command}")
                newReq.backscatter_expmt_flag = True
                #sleep(30)
                print(self.service_clbk(newReq, newResp))
                self.conductExperiment(3, num_expmts, 1) 
                num_expmts+=1
                continue
            else:
                self.startUIController(command) 
            print(self.service_clbk(newReq, newResp)) 
                
    
    def conductExperiment(self, failure_reps, num_expmts, repetitions):
        laptopIP = '130.245.144.104'
        port = '8001'
        config_dict={
            "run_exp_num": num_expmts,
            "freq_range_start": 775,
            "freq_range_stop": 1000,
            "freq_range_interval": 10,
            "repetitions": repetitions,
        }
        for rep_no in range(failure_reps):
            try:
                post_response = requests.post(f"http://{laptopIP}:{port}/MPP", json=config_dict, timeout=400)
                dict_resp=post_response.json()
                if dict_resp["Error Encountered"]==0:
                    break
            except Exception as e:
                print("Got exception:",e)
                sleep(40)
            


    
    def service_clbk(self, req:OdomRecord.Request, resp:OdomRecord.Response):
        print(f"Recieved call: {req}")
        resp.resp = False
        if req.req:
            self.msg.expmt_flag = req.backscatter_expmt_flag
            msg_dict = message_converter.convert_ros_message_to_dictionary(self.msg)
            if not os.path.isfile(f"experiments/{req.expmt_name}/{req.expmt_name}.json"):
                with open(f"experiments/{req.expmt_name}/{req.expmt_name}.json", 'w+') as f:
                    json.dump([msg_dict], f, indent=4)
            else:
                with open(f"experiments/{req.expmt_name}/{req.expmt_name}.json", 'r') as f:
                    present_data = json.load(f)
                    present_data.append(msg_dict)
                with open(f"experiments/{req.expmt_name}/{req.expmt_name}.json", 'w') as f:
                    json.dump(present_data, f, indent=4)
            resp.resp = True
        print(f"Sending Resp: {resp}")
        return resp

def main(args=None):
    rclpy.init(args=args)
    controller = Controller()  
    
    executor = MultiThreadedExecutor()
    executor.add_node(controller)
    spinner_thread = Thread(target = executor.spin)
    try:
        spinner_thread.start()
            # Main control flow logic here
        controller.follow_cmds('INPUT_CMDS.txt')
    except KeyboardInterrupt:
        pass
    finally:
        controller.destroy_node()
        rclpy.shutdown()



if __name__ == '__main__':
    main()
