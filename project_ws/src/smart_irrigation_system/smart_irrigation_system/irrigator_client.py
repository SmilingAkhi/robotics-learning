import sys
import rclpy 

from rclpy.node import Node

#import the srv 
from irrigation_interfaces.srv import SmartIrrigator

class irrigatorClientClass(Node):

    def __init__(self):
        #`inherit ros2 node properties`
        super().__init__('irrigatorClientNode')

        #create client 
        self.irrigatorClient =  self.create_client(SmartIrrigator, '/SmartIrrigatorService')

        #check if server is available/online
        while not self.irrigatorClient.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not found")

        #create empty request object 
        self.req = SmartIrrigator.Request()

    #function to send request 
    def irrigator_send_request (self, temp, mc):
        self.req.temp = temp
        self.req.mc = mc

        #this is what sends the request 
        return self.irrigatorClient.call_async(self.req)

def main():
    rclpy.init()
    
    irrigatorClient = irrigatorClientClass()
    
    future = irrigatorClient.irrigator_send_request(float(sys.argv[1]), float(sys.argv[2]))
    rclpy.spin_until_future_complete(irrigatorClient, future)
    response = future.result()
    irrigatorClient.get_logger().info(f' \n Should i irrigate? {response.irrigate} \n Response: {response.reason}')
    irrigatorClient.destroy_node()
    rclpy.shutdown()
    
    
if __name__ == '__main__':
    main()  

    

