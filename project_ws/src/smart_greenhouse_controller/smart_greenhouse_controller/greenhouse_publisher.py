import rclpy 
from rclpy.node import Node 

from greenhouse_interfaces.msg import sensor

class greenhousePublisher(Node):
    def __init__(self):
        super().__init__('greenhousePublisher')
        self.publisher_ = self.create_publisher(sensor, '/greenhouse/environment', 10)
        self.timer_ = self.create_timer(2, 'timer_callback')

    def timer_callback(self):
        msg = sensor()
        msg.data =  'send help'
        self.publisher_.publish(msg.data)
        self.get_logger().info(f'{msg.data}')

def main():
    rclpy.init
    publisher_node = greenhousePublisher()
    rclpy.spin(publisher_node)

    rclpy.shutdown

if __name__ == '__main__':
    main()
