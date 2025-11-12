#ros2 bag record -o subset /cloud_map /grid_prob_map /odom /mapPath

#!/bin/bash

# Check if a folder name was provided
if [ -z "$1" ]; then
  echo "Usage: $0 <folder_name>"
  exit 1
fi

FOLDER_NAME=$1

# Create the folder if it doesn't exist
mkdir -p "$FOLDER_NAME"

# Record ROS2 bag in the specified folder
ros2 bag record -o "experiments/${FOLDER_NAME}/subset" /cloud_map /grid_prob_map /odom /mapPath

