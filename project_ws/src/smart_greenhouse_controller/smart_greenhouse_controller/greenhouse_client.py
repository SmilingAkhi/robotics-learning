import rclpy
from rclpy.node import Node
import sys

from greenhouse_interfaces.srv import Sensor

class greenhouseClient(Node):
    def __init__(self):
        super().__init__('greenhouseClient')
        self.client_ = self.create_client(Sensor, '/greenhouse/service')
        while not self.client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Sensor.Request()

    def send_request(self, temperature, humidity):
        self.req.temperature = temperature
        self.req.humidity =  humidity

        return self.client_.call_async(self.req)

def main():
    rclpy.init()

    greenhouseClientNode =  greenhouseClient()
    future = greenhouseClientNode.send_request(int(sys.argv[1]),int(sys.argv[2]))
    rclpy.spin_until_future_complete(greenhouseClientNode, future)
    response = future.result()

    greenhouseClientNode.get_logger().info(f'\nTemperature:{int(sys.argv[1])}, Humidity:{int(sys.argv[2])} \nDecision \n\nFan:\n{response.fan_on}  \n\nIrrigation:\n{response.irrigation_on}  \n\nReason:\n{response.recommendation}')

    rclpy.shutdown
if __name__ == '__main__':
    main()
