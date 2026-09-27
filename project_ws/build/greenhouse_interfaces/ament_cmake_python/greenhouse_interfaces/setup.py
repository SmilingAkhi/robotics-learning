from setuptools import find_packages
from setuptools import setup

setup(
    name='greenhouse_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('greenhouse_interfaces', 'greenhouse_interfaces.*')),
)
