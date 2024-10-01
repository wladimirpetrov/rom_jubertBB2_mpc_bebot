// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__BUILDER_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__BUILDER_HPP_

#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

namespace builder
{

class Init_OptimizationStatus_ready
{
public:
  Init_OptimizationStatus_ready()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus ready(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus>()
{
  return ros_auv_v1_sub_l1_bebot_cpp::msg::builder::Init_OptimizationStatus_ready();
}

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__BUILDER_HPP_
