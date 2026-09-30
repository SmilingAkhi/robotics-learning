import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'smart_greenhouse_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='koji',
    maintainer_email='bhabdulrahaman@gmail.com',
    description='Smart Greenhouse Controller',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'pub = smart_greenhouse_controller.greenhouse_publisher:main',
            'sub = smart_greenhouse_controller.greenhouse_subscriber:main',
            'client = smart_greenhouse_controller.greenhouse_client:main',
            'server = smart_greenhouse_controller.greenhouse_server:main',
        ],
    },
)
