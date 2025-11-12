from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node, SetParameter
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
def generate_launch_description():
    return LaunchDescription([
        #IncludeLaunchDescription(
        #    PythonLaunchDescriptionSource([os.path.join(
        #        get_package_share_directory('rtabmap_examples'), 'launch'),
        #        'realsense_d435i_color.launch.py']),
        #),
    ])
