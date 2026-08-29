from setuptools import find_packages, setup

package_name = 'py_srv'

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
    description='Python client service tutorial',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'service = py_srv.service_func:main',
            'client = py_srv.client_func:main',
        ],
    },
)
