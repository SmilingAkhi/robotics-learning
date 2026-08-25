import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class temperatureSubscriber(Node):
    def __init__(self):
        super().__init__('temperature_monitor_sub')
        self.subscription =  self.create_subscription(String, '/temperature', self.listener_callback, 10)
        self.subscription

    def listener_callback(self, msg):
        smarter =  (msg.data).split(" ")
        temperature = (smarter[1])

        if int(temperature) < 30:
            self.get_logger().info(f'Received: {msg.data}')
        else: self.get_logger().info(f'Received: {msg.data}  \n WARNING: HIGH TEMPERATURE DETECTED ')    

        

def main(args=None):
    rclpy.init(args=args)

    temperature_monitor_sub = temperatureSubscriber()

    rclpy.spin(temperature_monitor_sub)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    temperature_monitor_sub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
