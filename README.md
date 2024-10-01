# MPC of ROM Joubert BB2 simulink model, using ROS2 as an initial step for combining with Machine Learning component.

The next update will incule component of NMPC with RBFNN and TensorFlow comparison

## Description
This project, developed by Vladimir Petrov, focuses on depth and pitch control of AUV.

The provided launch files are:

- **L1_adaptive_node.cpp**: ROS2 node responsible for L1 Adaptive depth control
- **publisher_node.cpp**: ROS2 node responsible for gathering Dynamics data and wrapping data into ROS2 msg
- **subscriber_node.cpp**: ROS2 node responsible for continuous running of Optimization Problem (ipopt .so library), providing optimal solution (path) to the problem.
- **buffer_node.cpp**: ROS2 node responsible for storing control points and calculating inputs for ROM Joubert BB2 Simulink model
-  
## Getting Started

To get started with this package, you need to clone the repository into your workspace and build it.

### Prerequisites

Before proceeding, make sure you have the following dependencies installed:

- ROS2 (Robot Operating System)
- MKL library
- IPOPT
- misc

Developed by Vladimir Petrov.
