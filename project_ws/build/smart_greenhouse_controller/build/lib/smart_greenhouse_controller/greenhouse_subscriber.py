import rclpy 
from rclpy.node import Node 

from greenhouse_interfaces.msg import Sensor

class greenhouseSubscriber(Node):
    def __init__(self):
        super().__init__('greenhouseSubscriber')
        self.subscriber_ = self.create_subscription(Sensor, '/greenhouse/environment', self.subscriber_callback, 10)
        self.declare_parameter('max_temperature', 30)
        self.subscriptions

    def subscriber_callback(self, msg):
        max_temperature =  self.get_parameter('max_temperature').get_parameter_value().integer_value
        self.get_logger().info(f'{msg}')

        if msg.temperature >  max_temperature:
            self.get_logger().info(f'WARNING \n Temperature is too high')


def main():
    rclpy.init()
    subscriber_node = greenhouseSubscriber()
    rclpy.spin(subscriber_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()