import sys 

from example_interfaces.srv import AddTwoInts
import rclpy
from rclpy.node import Node


class qltyCheckerClientClass (Node):

    def __init__(self):
        super().__init__('qltyCheckerClientNode')
        self.client = self.create_client(AddTwoInts, '/addition_qlty_checker')
        while not self.client.wait_for_service(timeout_sec= 0.1):
            self.get_logger().info('service not available, waiting again...')
        self.req = AddTwoInts.Request()

    def send_request(self, a,b):
        self.req.a = a
        self.req.b = b

        return self.client.call_async(self.req)

def main():
    rclpy.init()

    additionQltyCheckerClient = qltyCheckerClientClass()

    future = additionQltyCheckerClient.send_request(int(sys.argv[1]), int(sys.argv[2]))
    rclpy.spin_until_future_complete(additionQltyCheckerClient, future)
    response = future.result()
   
    
    if int(response.sum) > 100: 
        additionQltyCheckerClient.get_logger().info(f'Large result computed.')
    else: additionQltyCheckerClient.get_logger().info(f'Normal result computed.')

    additionQltyCheckerClient.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()  




