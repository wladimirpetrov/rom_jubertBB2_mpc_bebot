// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__TRAITS_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__TRAITS_HPP_

#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>()
{
  return "ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult";
}

template<>
inline const char * name<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>()
{
  return "ros_auv_v1_sub_l1_bebot_cpp/msg/OptimizationResult";
}

template<>
struct has_fixed_size<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__TRAITS_HPP_
