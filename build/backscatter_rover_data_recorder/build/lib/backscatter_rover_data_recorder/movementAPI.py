from backscatter_rover_data_recorder.base_ctrl import BaseController
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from nav_msgs.msg import Odometry
import time
import pickle
import serial
from time import sleep
from backscatter_movement_record_msgs_srvs.srv import OdomRecord
from tf_transformations import euler_from_quaternion
from backscatter_movement_record_msgs_srvs.msg import OdomWithExpmtFlag
def deg_to_rad(deg):
        return deg*(3.1415/180)
def rad_to_deg(rad):
    return rad*180/(3.1415)
class MovementAPI(Node):
    def __init__(self, base, save_path):
        super().__init__('movement_api')
        """
            self.base: object of type BaseController
            self.movementList: records all the movements issued by the user.
                Format:
                1. Dictionary: Directly issue to command to base controller.
                2. "sleep <time>": Call time.sleep(<time>)
        """
        self.base=base
        self.movementList=[]
        self.length=0.245
        self.width=0.215
        self.diagonal=(self.length**2 + self.width**2)**0.5
        self.save_path=save_path

        # For turning
        self.inner_speed_per_deg=1/0.01 #inner side remains almost constant
        self.outer_speed_per_deg=1/(0.75*self.diagonal)
        self.fullRotationTime=2.4 #seconds at full speed


        self.msg = OdomWithExpmtFlag()

        _,_, self.yaw = euler_from_quaternion([Odometry().pose.pose.orientation.w,
                                   Odometry().pose.pose.orientation.x,
                                   Odometry().pose.pose.orientation.y,
                                   Odometry().pose.pose.orientation.z])


        subscriber_clbk_grp = MutuallyExclusiveCallbackGroup()
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_clbk, 10, callback_group = subscriber_clbk_grp)
        sleep(2)




        #self.client = self.create_client(OdomRecord, '/record_pose')
        #self.client.wait_for_service()



    def odom_clbk(self, msg:Odometry):
        self.msg.odom = msg
        self.yaw, _, _ = euler_from_quaternion([msg.pose.pose.orientation.w,
                                   msg.pose.pose.orientation.x,
                                   msg.pose.pose.orientation.y,
                                   msg.pose.pose.orientation.z])
        #print("sub: ", rad_to_deg(self.yaw))



    def note_command(self, cmd):
        if self.save_path!=None:
            self.movementList.append(cmd)
    
    def save_to_disk(self):
        pickle.dump(self.movementList,open(self.save_path, 'wb'))

    def linear(self, distance, speed):
        """
            distance: distance forward (+ve) or backward (-ve).
        """
        speed=speed*(distance/abs(distance)) # multiply speed with the direction
        sleep_time=distance/speed
        print(sleep_time)
        if sleep_time>3:
            print("Note: The command will be issued as multiple subcommands")

        while sleep_time>0:
            # print("sleep time",sleep_time)
            subcommand_sleep_time=min(sleep_time, 3) # max command time is 3 seconds.
            
            cmd_move={"T": 1, "L":speed, "R":speed}
            cmd_stop={"T":1,"L":0,"R":0}
            
            #saving commands before issuing
            self.note_command(cmd_move)
            self.note_command(f"sleep {subcommand_sleep_time}")
            
            #issuing the commands
            self.base.send_command(cmd_move)
            # print("subcommand_sleep_time",subcommand_sleep_time)
            time.sleep(subcommand_sleep_time)
    
            sleep_time-=subcommand_sleep_time
    
        self.note_command(cmd_stop)
        self.base.send_command(cmd_stop)
        self.note_command("end")
       
    def minus_pi_to_pier(self, angle):
        return ((angle+180)%360.)-180
    def rad_minus_pi_to_pier(self, angle):
        angle = rad_to_deg(angle)
        angle = self.minus_pi_to_pier(angle)
        return deg_to_rad(angle)

    def turn(self, angle:float=90, ang_speed:float = 0.05, thresh1 = 7, thresh2 = 15):
        init_yaw = self.yaw
        angle = self.minus_pi_to_pier(angle)
        sign = angle/abs(angle)
        target_yaw = self.rad_minus_pi_to_pier(init_yaw+deg_to_rad(angle))
        yaw_mem = init_yaw
        if sign>0: #right turn
            r_speed=-ang_speed/1.4
            l_speed=ang_speed/1.4
        else:
            r_speed=ang_speed/1.4
            l_speed=-ang_speed/1.4

        cmd_stop={"T": 1, "L":0, "R":0}
        cmd_move={"T": 1, "L":l_speed, "R":r_speed}
        while rad_to_deg(abs(target_yaw-self.yaw))>thresh1:
            #print(f"sending command: ", cmd_move, rad_to_deg(abs(target_yaw-self.yaw)))

            self.base.send_command(cmd_move)
            #print("sleeping started")
            sleep(0.1)
            #print("sleeping over")
            self.base.send_command(cmd_stop)
            sleep(0.1)
            print("remaining: ",rad_to_deg(abs(target_yaw-self.yaw)), "target:", rad_to_deg(target_yaw), "yaw:",rad_to_deg(self.yaw))
        print("Broke loop")
        for i in range(10):
            self.base.send_command(cmd_stop)



    def turn_old(self, angle=90, ang_speed = 0.5):
        """
            angle: what angle should the turn be made? Defaulted to 90 degrees.
        """
        # angle=deg_to_rad(angle)
        init_yaw = self.yaw
        if angle>0: #right turn
            r_speed=-ang_speed/1.4
            l_speed=ang_speed/1.4
        else:
            r_speed=ang_speed/1.4
            l_speed=-ang_speed/1.4
    
        sleep_time=self.fullRotationTime*(abs(angle)/360)*1.4
        
        if sleep_time>3:
            print("Note: The command will be issued as multiple subcommands")

        while sleep_time>0:

            subcommand_sleep_time=min(sleep_time, 3) # max command time is 3 seconds.
            
            cmd_move={"T": 1, "L":l_speed, "R":r_speed}
            print(cmd_move,subcommand_sleep_time)
            cmd_stop={"T": 1, "L":0, "R":0}

            #saving commands before issuing
            self.note_command(cmd_move)
            self.note_command(f"sleep {subcommand_sleep_time}")
    
            #issuing the commands
            self.base.send_command(cmd_move)
            time.sleep(subcommand_sleep_time)
            
            sleep_time-=subcommand_sleep_time
        
        self.note_command(cmd_stop)
        self.base.send_command(cmd_stop)
        self.note_command("end")

    def playCommands(self, file):
        allCmds=pickle.load(open(f"/home/ws/git/RoverOperations/movement/Saves/{file}.pkl", 'rb'))
        for c in allCmds:
            print(c)
            if c=='end':
                time.sleep(1)
            elif "sleep" in c:
                time.sleep(float(c.split(" ")[1]))
            else:
                self.base.send_command(c)
            
    # def startUI(self):
    #     print("Following commands can be issued:")
    #     print("\t1. Lin - moves the rover forwards or backwards. Eg: 'lin <dist>'. dist can be either +ve or -ve")
    #     print("\t1. Turn - makes the rover rotate on the spot at an approx angle. Eg: 'turn <angle>'. angle can be either +ve or -ve")
    #     print("Enter 'Exit' or 'e' to exit.")
    #     try:
    #         while True:
    #             invalid=False
    #             user_input=input("Enter command: ")
    #             if user_input=="Exit" or user_input=="exit" or user_input=="e":
    #                 break
    #             user_input=user_input.split()
    #             print(user_input)
    #             if len(user_input)!=2:
    #                 invalid=True
    #             else:
    #                 if (user_input[0]=="Lin" or user_input[0]=="lin" or user_input[0]=="l"\
    #                  or user_input[0]=="L" or user_input[0]=="Linear" or user_input[0]=="linear")\
    #                  and user_input[1].lstrip('-').replace(".","").isnumeric():
    #                     self.linear(distance=float(user_input[1]))
    #                 elif (user_input[-1]=="Turn" or user_input[0]=="turn" or user_input[0]=="T"\
    #                 or user_input[0]=="t") and user_input[1].lstrip('-').replace(".","").isnumeric():
    #                     self.turn(angle=float(user_input[1]))
    #                 else:
    #                     invalid=True
    #             if invalid:
    #                 print("Invalid command")

    def startUIController(self, user_input):
        try:
            invalid=False
            user_input=user_input.split()
            print(user_input)
            print(user_input[0])
            print("light" in user_input[0])
            if len(user_input)!=3 and "light" not in user_input[0]:
                invalid=True
            else:
                if (user_input[0]=="Lin" or user_input[0]=="lin" or user_input[0]=="l"\
                    or user_input[0]=="L" or user_input[0]=="Linear" or user_input[0]=="linear")\
                    and user_input[1].lstrip('-').replace(".","").isnumeric():
                    self.linear(distance=float(user_input[1]), speed = float(user_input[2]))
                elif (user_input[0]=="Turn" or user_input[0]=="turn" or user_input[0]=="T"\
                or user_input[0]=="t") and user_input[1].lstrip('-').replace(".","").isnumeric():
                    print("turning", float(user_input[1]))
                    self.turn(angle=float(user_input[1]), ang_speed = float(user_input[2]))
                elif ("light" in user_input[0]):
                    print("I AM INNNN")
                    if "on" in user_input[1]:
                        self.base.lights_ctrl(255, 255)
                    else:
                        self.base.lights_ctrl(0, 255)
                else:
                    invalid=True
            if invalid:
                print("Invalid command")
                
        except Exception as e:
            print(e)
        finally:
            self.save_to_disk()
