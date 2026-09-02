# import sys
import rclpy 

from rclpy.node import Node

#import the srv 
from irrigation_interfaces.srv import SmartIrrigator

class irrigatorServiceClass(Node):

    def __init__(self):
        #`inherit ros2 node properties`
        super().__init__('irrigatorServiceNode')
        self.irrigationService = self.create_service(SmartIrrigator, '/SmartIrrigatorService', self.service_callback)

    def service_callback(self, request, response ):
        if request.temp > request.mc:
            response.irrigate = True
            response.reason =  "soil is dry and temperature is high "
            self.get_logger().info(f'\n Decision made: \n irrigate = {response.irrigate} \n Response: {response.reason}')
            
        else: 
            response.irrigate = False
            response.reason =  "Soil is wet and temperature is low "
            self.get_logger().info(f'\n Decision made: \n irrigate = {response.irrigate} \n Response: {response.reason}')

        return response

def main():
    rclpy.init()

    irrigatorService =  irrigatorServiceClass()
    rclpy.spin(irrigatorService)

    rclpy.shutdown()


if __name__ == '__main__':
    main()