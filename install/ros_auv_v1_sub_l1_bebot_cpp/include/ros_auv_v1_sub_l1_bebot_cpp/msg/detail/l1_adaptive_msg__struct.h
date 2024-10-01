// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__STRUCT_H_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/L1AdaptiveMsg in the package ros_auv_v1_sub_l1_bebot_cpp.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg
{
  double x_act;
  double y_act;
  double z_act;
  double roll_act;
  double pitch_act;
  double yaw_act;
  double u_act;
  double v_act;
  double w_act;
  double p_act;
  double q_act;
  double r_act;
  double adap;
  double delta_v_act;
  double delta_m_act;
  double delta_s_act;
  double zend;
  double thetaend;
  double tf;
  double tend;
  double t0;
  double y_aug;
} ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg;

// Struct for a sequence of ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg.
typedef struct ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__STRUCT_H_
