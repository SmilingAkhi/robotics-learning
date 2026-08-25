import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class temperaturePublisher(Node):
    def __init__(self):
        super().__init__('temperature_monitor_sus')
        self.publisher1 = self.create_publisher(String, "/temperature", 10 )
        timer = 2 
        self.timer = self.create_timer(timer, self.timer_callback)
        self.counter = 25

    def timer_callback(self):
        msg = String()
        msg.data = f'Temperature: {self.counter} °C '
        self.publisher1.publish(msg) 
        self.get_logger().info(f" publishing: {msg.data}")
        self.counter += 1

def main(args=None):
    # Initialize the ROS 2 communications loop
        rclpy.init(args=args)
    
    # Create an instance of our custom class
        temperature_monitor_pub = temperaturePublisher()
    
    # Keep the node alive, waiting for events (like the timer ticking)
        rclpy.spin(temperature_monitor_pub)
    
    # Clean up on shutdown
        temperature_monitor_pub.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()