// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__BUILDER_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__BUILDER_HPP_

#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

namespace builder
{

class Init_OptimizationResult_psi0
{
public:
  explicit Init_OptimizationResult_psi0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult psi0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::_psi0_type arg)
  {
    msg_.psi0 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_tf
{
public:
  explicit Init_OptimizationResult_tf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  Init_OptimizationResult_psi0 tf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::_tf_type arg)
  {
    msg_.tf = std::move(arg);
    return Init_OptimizationResult_psi0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_tend
{
public:
  explicit Init_OptimizationResult_tend(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  Init_OptimizationResult_tf tend(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::_tend_type arg)
  {
    msg_.tend = std::move(arg);
    return Init_OptimizationResult_tf(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_t0
{
public:
  explicit Init_OptimizationResult_t0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  Init_OptimizationResult_tend t0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::_t0_type arg)
  {
    msg_.t0 = std::move(arg);
    return Init_OptimizationResult_tend(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_final_obj_value
{
public:
  explicit Init_OptimizationResult_final_obj_value(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & msg)
  : msg_(msg)
  {}
  Init_OptimizationResult_t0 final_obj_value(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::_final_obj_value_type arg)
  {
    msg_.final_obj_value = std::move(arg);
    return Init_OptimizationResult_t0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult msg_;
};

class Init_OptimizationResult_solution_x
{
public:
  Init_OptimizationResult_solution_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizationResult_final_obj_value solution_x(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::_solution_x_type arg)
  {
    msg_.solution_x = std::move(arg);
    return Init_OptimizationResult_final_obj_value(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>()
{
  return ros_auv_v1_sub_l1_bebot_cpp::msg::builder::Init_OptimizationResult_solution_x();
}

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__BUILDER_HPP_
