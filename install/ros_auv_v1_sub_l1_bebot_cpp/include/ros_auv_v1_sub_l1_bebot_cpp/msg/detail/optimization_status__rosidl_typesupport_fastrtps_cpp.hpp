// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
cdr_serialize(
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
get_serialized_size(
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
max_serialized_size_OptimizationStatus(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
