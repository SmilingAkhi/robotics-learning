from launch import LaunchDescription
from  launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='temperature_monitor_pkg',
            executable='talker',
            name='talker'),
        Node(
            package='temperature_monitor_pkg',
            executable='listener',
            name='listener'),
        
    ])
