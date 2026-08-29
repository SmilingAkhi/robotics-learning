import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/koji/robotics/robotics-learning/project_ws/install/addition_qlty_checker_pkg'
