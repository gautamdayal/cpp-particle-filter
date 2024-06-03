# cpp-particle-filter 

A simple particle filter in two dimensions. The robot's state is its position (x, y) and orientation. It uses a 2D rangefinder as its sensor and the environment is a series of walls. 

Code was written with modularity in mind: it should be easy to change the sensor model, motion model, and environment to see how the filter performs in different scenarios. 