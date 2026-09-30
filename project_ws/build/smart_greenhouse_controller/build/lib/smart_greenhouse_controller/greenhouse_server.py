import rclpy
from rclpy.node import Node

from greenhouse_interfaces.srv import Sensor

class greenhouseService(Node):
    def __init__(self):
        super().__init__('greenhouseService')
        self.service_ = self.create_service(Sensor, '/greenhouse/service', self.service_callback)

    def service_callback(self, Request, Response):
        if Request.temperature > 32 & Request.humidity < 40:
            Response.fan_on == True
            Response.irrigation_on = True
            Response.recommendation = "High Temperature and low humidity detected"

            self.get_logger().info(f'\n\nfan_on = {Response.fan_on} \n\nIrrigation_on = {Response.irrigation_on} \n\nRecommendation:\n{Response.recommendation}')
        elif( Request.temperature < 32 & Request.humidity > 40):
            Response.fan_on == False
            Response.irrigation_on = False

            self.get_logger().info(f'\n\nfan_on = {Response.fan_on} \n\nIrrigation_on = {Response.irrigation_on} \n\nRecommendation:\n{Response.recommendation} ')            
        elif Request.temperature < 32 & Request.humidity < 40:
            Response.fan_on == False
            Response.irrigation_on = True

            self.get_logger().info(f'\n\nfan_on = {Response.fan_on} \n\nIrrigation_on = {Response.irrigation_on} \n\nRecommendation:\n{Response.recommendation} ')        
            
        else :
            Response.fan_on == True
            Response.irrigation_on = False

            self.get_logger().info(f'\n\n fan_on = {Response.fan_on} \n\nIrrigation_on = {Response.irrigation_on} \n\nRecommendation:\n{Response.recommendation} ')
            
        return Response

def main():
    rclpy.init()

    greenhouseServiceNode = greenhouseService()
    rclpy.spin(greenhouseServiceNode)

    rclpy.shutdown()

if __name__ == '__main__':
    main()

        
