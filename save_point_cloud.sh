

export exp_dir="$1"

# Check if the variable is empty first
if [ -z "$exp_dir" ]; then
    echo "Error: No argument provided."
    exit 1
fi

# Check if the directory does NOT exist
if [ ! -d "$exp_dir" ]; then
    echo "Error: Directory '$exp_dir' not found."
    exit 1
fi

ros2 run backscatter_rover_data_recorder recorder_service
