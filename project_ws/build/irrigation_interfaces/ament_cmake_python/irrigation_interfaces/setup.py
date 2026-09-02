from setuptools import find_packages
from setuptools import setup

setup(
    name='irrigation_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('irrigation_interfaces', 'irrigation_interfaces.*')),
)
