#!/bin/bash

# Initialize a variable to hold the experiment name
EXPMT_NAME=""

# --- Argument Parsing ---
# Loop through all command line arguments ($@)
while [[ "$#" -gt 0 ]]; do
    case "$1" in
        --expmt_name)
            # Check if the next argument ($2) exists and is not another flag (doesn't start with --)
            if [ -n "$2" ] && [[ "$2" != --* ]]; then
                EXPMT_NAME="$2"
                shift # Consume the flag name
            else
                # Handle error if --expmt_name is provided but lacks a value
                echo "Error: The argument '--expmt_name' requires a value." >&2
                exit 1
            fi
            ;;
        *)
            # Handle unrecognized arguments (optional, here we just ignore them)
            ;;
    esac
    shift # Consume the argument value or flag
done

# --- Validation Check ---
# Check if the required variable was set after parsing
if [ -z "$EXPMT_NAME" ]; then
    echo "Error: The required argument '--expmt_name' was not provided." >&2
    echo "Usage: $0 --expmt_name <your_experiment_name>" >&2
    exit 1
fi

# --- Execution ---
# If the argument is provided, print the value
ros2 run backscatter_rover_data_recorder controller  --ros-args -p expmt_name:="$EXPMT_NAME"
# Exit with success status
exit 0
