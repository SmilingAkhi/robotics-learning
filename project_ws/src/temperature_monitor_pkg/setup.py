from setuptools import find_packages, setup

package_name = 'temperature_monitor_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='koji',
    maintainer_email='bhabdulrahaman@gmail.com',
    description='Ttemperature_monitor_pub_sub',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'talker = temperature_monitor_pkg.temp_publisher_node:main',
            'listener = temperature_monitor_pkg.temp_subscriber_node:main'
        ],
    },
)
