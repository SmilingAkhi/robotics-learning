import rclpy 
from rclpy.node import Node 

from greenhouse_interfaces.msg import Sensor

class greenhousePublisher(Node):
    def __init__(self):
        super().__init__('greenhousePublisher')
        self.publisher_ = self.create_publisher(Sensor, '/greenhouse/environment', 10)
        self.declare_parameter('temperature', 29)
        self.declare_parameter('humidity', 12)
        self.timer_ = self.create_timer(2, self.timer_callback)

    def timer_callback(self):
        #get the parameter value
        temperature = self.get_parameter('temperature').get_parameter_value().integer_value
        humidity = self.get_parameter('humidity').get_parameter_value().integer_value

        #create empty msg object
        msg = Sensor()

        #set the msg object to the parameters
        msg.temperature = temperature
        msg.humidity = humidity

        #publish the msg
        self.publisher_.publish(msg)
        self.get_logger().info(f' publishing {msg}')

def main():
    rclpy.init()
    publisher_node = greenhousePublisher()
    rclpy.spin(publisher_node)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
