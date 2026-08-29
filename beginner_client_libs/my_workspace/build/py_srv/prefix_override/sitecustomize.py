import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/koji/robotics/robotics-learning/beginner_client_libs/my_workspace/install/py_srv'
