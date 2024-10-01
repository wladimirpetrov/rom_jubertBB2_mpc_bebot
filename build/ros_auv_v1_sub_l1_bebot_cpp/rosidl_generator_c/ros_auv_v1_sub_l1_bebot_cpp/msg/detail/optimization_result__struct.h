// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_H_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'solution_x'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/OptimizationResult in the package ros_auv_v1_sub_l1_bebot_cpp.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult
{
  rosidl_runtime_c__double__Sequence solution_x;
  double final_obj_value;
  double t0;
  double tend;
  double tf;
  double psi0;
} ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult;

// Struct for a sequence of ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_H_
