#!/bin/bash

# --- Argument Parsing ---
while [[ "$#" -gt 0 ]]; do
    case "$1" in
        --expmt_name)
            if [ -n "$2" ] && [[ "$2" != --* ]]; then
                EXPMT_NAME="$2"
                shift
            else
                echo "Error: The argument '--expmt_name' requires a value." >&2
                exit 1
            fi
            ;;
        *)
            ;;
    esac
    shift
done

# --- Validation Check ---
if [ -z "$EXPMT_NAME" ]; then
    echo "Error: The required argument '--expmt_name' was not provided." >&2
    echo "Usage: $0 --expmt_name <your_experiment_name>" >&2
    exit 1
fi

# --- Create Folder if Not Exists ---
FOLDER="./${EXPMT_NAME}"
if [ ! -d "$FOLDER" ]; then
    mkdir -p "$FOLDER"
    echo "Created folder: $FOLDER"
else
    echo "Folder already exists: $FOLDER"
fi

# --- Create JSON File (no overwrite) ---
JSON_FILE="${FOLDER}/${EXPMT_NAME}.json"
if [ -f "$JSON_FILE" ]; then
    echo "JSON file already exists, not overwriting: $JSON_FILE"
    exit 0
else
    echo "{}" > "$JSON_FILE"
    echo "Created JSON file: $JSON_FILE"
fi

# --- Execution ---
ros2 run backscatter_rover_data_recorder controller --ros-args -p expmt_name:="$EXPMT_NAME"

exit 0

