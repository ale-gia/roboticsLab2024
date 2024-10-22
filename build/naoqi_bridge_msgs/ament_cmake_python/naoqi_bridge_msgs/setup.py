from setuptools import find_packages
from setuptools import setup

setup(
    name='naoqi_bridge_msgs',
    version='2.1.0',
    packages=find_packages(
        include=('naoqi_bridge_msgs', 'naoqi_bridge_msgs.*')),
)
