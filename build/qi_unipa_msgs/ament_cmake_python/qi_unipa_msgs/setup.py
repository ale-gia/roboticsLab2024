from setuptools import find_packages
from setuptools import setup

setup(
    name='qi_unipa_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('qi_unipa_msgs', 'qi_unipa_msgs.*')),
)
