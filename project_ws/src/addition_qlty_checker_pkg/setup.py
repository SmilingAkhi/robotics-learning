from setuptools import find_packages, setup

package_name = 'addition_qlty_checker_pkg'

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
    description='Addition Quality Checker',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'client = addition_qlty_checker_pkg.client_func:main',
            'service = addition_qlty_checker_pkg.service_func:main',
        ],
    },
)
