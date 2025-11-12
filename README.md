# UGV-Realsense-SLAM Position recorder

## Purpose
This repository is used to along with Waveshare UGV and Intel Realsense along with ROS2 RTabmap to record positions of the rover at end of completion of a movement command.

## Setup
Execute the following at appropriate place.
```
git clone --recurse-submodules https://github.com/AtharvMane/Backscatter_UGV_ws.git (Enter Credentials)
cd Backscatter_UGV_ws
colcon build
source install/setup.bash
```
## Usage
- Make sure the rover is set up well.
- Fill in the  `Input CMDS.txt` with appropriate [command format](#command-format)
- Enter superuser mode through `sudo su`
- Start the RTabmap Slam through the appropriate launch file. which in turn starts the Realsense camera launcher
- Start the position recorder service using the following command
```
ros2 run backscatter_rover_data_recorder recorder_service
```
- Start the rover controller using the following command
```
ros2 run backscatter_rover_data_recorder controller  --ros-args -p expmt_name:='<Enter The Experiment Name>'
```

## Expected Results
- The expected result at the end would be an `<experiment_name>.json` file with msg type containing a [nav_msgs/Odometery](https://docs.ros2.org/foxy/api/nav_msgs/msg/Odometry.html) and a boolean value.
- The boolean value is True for the positions where the backscatter experiment was done and False otherwise.

## Command Format
There are 3 Commands in the following format:
- **Experiment Command**: `expmt` This command is used to conduct experiment.
- **Linear Command**: `Lin <Distance in Float> <Speed>` This command executes a forward movement call on the rover. Note that Speed is always positive, while distance is positive for forward movement and negative for backward movement.
- **Rotation command**: `Turn <Angle> <angular speed>`:  Note: As of now, the angular speed parameter is just a place holder. and the rover does **NOT** turn the correct angle

