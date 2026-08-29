from example_interfaces.srv import AddTwoInts

import rclpy
from rclpy.node import Node

class qltyCheckerServiceClass(Node):

    def __init__(self):
        super().__init__('qltyCheckerServiceNode')
        self.service = self.create_service(AddTwoInts, '/addition_qlty_checker', self.service_callback)

    def service_callback(self, request, response):
        response.sum =  request.a + request.b 
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))
        if response > 100: 
            self.get_logger().info(f'Large result computed.')
        else: (f'Normal result computed.')

        return response 

def main():
    rclpy.init()

    additionQltyCheckerService =  qltyCheckerServiceClass()

    rclpy.spin(additionQltyCheckerService)


    rclpy.shutdown()


if __name__ == '__main__':
    main()


