// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__STRUCT_H_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a_flat'
// Member 'b_flat'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/OptimizationParameters in the package ros_auv_v1_sub_l1_bebot_cpp.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters
{
  int32_t n;
  double tf;
  double delta_v_max;
  double delta_v_min;
  double delta_s_max;
  double delta_s_min;
  double delta_m_max;
  double delta_m_min;
  double zmax;
  double zmin;
  double wmax;
  double wmin;
  double thetamax;
  double thetamin;
  double qmax;
  double qmin;
  double z0;
  double w0;
  double theta0;
  double q0;
  double delta_v0;
  double delta_m0;
  double delta_s0;
  double zf;
  double thetaf;
  rosidl_runtime_c__double__Sequence a_flat;
  rosidl_runtime_c__double__Sequence b_flat;
  double t0;
  double tend;
  double psi0;
} ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters;

// Struct for a sequence of ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__STRUCT_H_
