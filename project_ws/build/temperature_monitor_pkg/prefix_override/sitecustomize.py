import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/koji/robotics/robotics-learning/project_ws/install/temperature_monitor_pkg'
