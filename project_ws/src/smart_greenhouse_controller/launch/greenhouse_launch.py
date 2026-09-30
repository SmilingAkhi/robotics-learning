from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='smart_greenhouse_controller',
            executable='pub',
            name='pub'),
        Node(
            package='smart_greenhouse_controller',
            executable='sub',
            name='sub'),
        Node(
            package='smart_greenhouse_controller',
            executable='server',
            name='sub'),
    ])