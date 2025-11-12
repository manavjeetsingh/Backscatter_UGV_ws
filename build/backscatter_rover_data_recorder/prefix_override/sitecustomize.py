import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wings/Backscatter_UGV_ws/install/backscatter_rover_data_recorder'
