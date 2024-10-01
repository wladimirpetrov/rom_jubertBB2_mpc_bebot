// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__STRUCT_H_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OptimizationStatus in the package ros_auv_v1_sub_l1_bebot_cpp.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus
{
  bool ready;
} ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus;

// Struct for a sequence of ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__STRUCT_H_
