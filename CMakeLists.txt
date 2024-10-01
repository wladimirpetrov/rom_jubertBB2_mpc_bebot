cmake_minimum_required(VERSION 3.5)
project(ros_auv_v1_sub_l1_bebot_cpp)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Set the build type to Debug
set(CMAKE_BUILD_TYPE Debug)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)


# Add custom message files
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/L1AdaptiveMsg.msg"
  "msg/OptimizationParameters.msg"
  "msg/OptimizationResult.msg"
  "msg/OptimizationStatus.msg"
  DEPENDENCIES std_msgs
)

# Include directories
include_directories(
  include
  ${CMAKE_CURRENT_SOURCE_DIR} # Include current source directory
  /opt/intel/oneapi/mkl/2024.1/include # Include MKL headers
)

# Add control_systems.cpp to be compiled
add_library(control_systems SHARED ${CMAKE_CURRENT_SOURCE_DIR}/control_systems.cpp)

# Add state_space_matrices.cpp to be compiled
add_library(state_space_matrices SHARED ${CMAKE_CURRENT_SOURCE_DIR}/state_space_matrices.cpp)

# Add decasteljau.cpp to be compiled
add_library(decasteljau SHARED ${CMAKE_CURRENT_SOURCE_DIR}/decasteljau.cpp)

# Link MKL
find_library(MKL_LIB mkl_rt PATHS /opt/intel/oneapi/mkl/latest/lib)

# Add the L1_adaptive_node executable
add_executable(L1_adaptive_node src/L1_adaptive_node.cpp)
ament_target_dependencies(L1_adaptive_node rclcpp std_msgs)
rosidl_target_interfaces(L1_adaptive_node ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(L1_adaptive_node control_systems ${MKL_LIB})

# Add the publisher_node executable
add_executable(publisher_node src/publisher_node.cpp)
ament_target_dependencies(publisher_node rclcpp std_msgs)
rosidl_target_interfaces(publisher_node ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(publisher_node state_space_matrices ${MKL_LIB})

# Add the subscriber_node executable
add_executable(subscriber_node src/subscriber_node.cpp)
ament_target_dependencies(subscriber_node rclcpp std_msgs)
rosidl_target_interfaces(subscriber_node ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(subscriber_node state_space_matrices ${MKL_LIB})

# Add the printing_node executable
add_executable(printing_node src/printing_node.cpp)
ament_target_dependencies(printing_node rclcpp std_msgs)
rosidl_target_interfaces(printing_node ${PROJECT_NAME} "rosidl_typesupport_cpp")

# Add the buffer_node executable
add_executable(buffer_node src/buffer_node.cpp)
ament_target_dependencies(buffer_node rclcpp std_msgs)
rosidl_target_interfaces(buffer_node ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(buffer_node decasteljau ${MKL_LIB})

# Install targets
install(TARGETS
  L1_adaptive_node
  publisher_node
  subscriber_node
  printing_node
  buffer_node
  control_systems
  state_space_matrices
  decasteljau
  DESTINATION lib/${PROJECT_NAME})

ament_package()

