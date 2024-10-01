// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__BUILDER_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__BUILDER_HPP_

#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

namespace builder
{

class Init_OptimizationParameters_psi0
{
public:
  explicit Init_OptimizationParameters_psi0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters psi0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_psi0_type arg)
  {
    msg_.psi0 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_tend
{
public:
  explicit Init_OptimizationParameters_tend(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_psi0 tend(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_tend_type arg)
  {
    msg_.tend = std::move(arg);
    return Init_OptimizationParameters_psi0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_t0
{
public:
  explicit Init_OptimizationParameters_t0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_tend t0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_t0_type arg)
  {
    msg_.t0 = std::move(arg);
    return Init_OptimizationParameters_tend(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_b_flat
{
public:
  explicit Init_OptimizationParameters_b_flat(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_t0 b_flat(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_b_flat_type arg)
  {
    msg_.b_flat = std::move(arg);
    return Init_OptimizationParameters_t0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_a_flat
{
public:
  explicit Init_OptimizationParameters_a_flat(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_b_flat a_flat(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_a_flat_type arg)
  {
    msg_.a_flat = std::move(arg);
    return Init_OptimizationParameters_b_flat(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_thetaf
{
public:
  explicit Init_OptimizationParameters_thetaf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_a_flat thetaf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_thetaf_type arg)
  {
    msg_.thetaf = std::move(arg);
    return Init_OptimizationParameters_a_flat(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_zf
{
public:
  explicit Init_OptimizationParameters_zf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_thetaf zf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_zf_type arg)
  {
    msg_.zf = std::move(arg);
    return Init_OptimizationParameters_thetaf(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_s0
{
public:
  explicit Init_OptimizationParameters_delta_s0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_zf delta_s0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_s0_type arg)
  {
    msg_.delta_s0 = std::move(arg);
    return Init_OptimizationParameters_zf(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_m0
{
public:
  explicit Init_OptimizationParameters_delta_m0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_s0 delta_m0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_m0_type arg)
  {
    msg_.delta_m0 = std::move(arg);
    return Init_OptimizationParameters_delta_s0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_v0
{
public:
  explicit Init_OptimizationParameters_delta_v0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_m0 delta_v0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_v0_type arg)
  {
    msg_.delta_v0 = std::move(arg);
    return Init_OptimizationParameters_delta_m0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_q0
{
public:
  explicit Init_OptimizationParameters_q0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_v0 q0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_q0_type arg)
  {
    msg_.q0 = std::move(arg);
    return Init_OptimizationParameters_delta_v0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_theta0
{
public:
  explicit Init_OptimizationParameters_theta0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_q0 theta0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_theta0_type arg)
  {
    msg_.theta0 = std::move(arg);
    return Init_OptimizationParameters_q0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_w0
{
public:
  explicit Init_OptimizationParameters_w0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_theta0 w0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_w0_type arg)
  {
    msg_.w0 = std::move(arg);
    return Init_OptimizationParameters_theta0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_z0
{
public:
  explicit Init_OptimizationParameters_z0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_w0 z0(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_z0_type arg)
  {
    msg_.z0 = std::move(arg);
    return Init_OptimizationParameters_w0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_qmin
{
public:
  explicit Init_OptimizationParameters_qmin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_z0 qmin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_qmin_type arg)
  {
    msg_.qmin = std::move(arg);
    return Init_OptimizationParameters_z0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_qmax
{
public:
  explicit Init_OptimizationParameters_qmax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_qmin qmax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_qmax_type arg)
  {
    msg_.qmax = std::move(arg);
    return Init_OptimizationParameters_qmin(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_thetamin
{
public:
  explicit Init_OptimizationParameters_thetamin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_qmax thetamin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_thetamin_type arg)
  {
    msg_.thetamin = std::move(arg);
    return Init_OptimizationParameters_qmax(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_thetamax
{
public:
  explicit Init_OptimizationParameters_thetamax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_thetamin thetamax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_thetamax_type arg)
  {
    msg_.thetamax = std::move(arg);
    return Init_OptimizationParameters_thetamin(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_wmin
{
public:
  explicit Init_OptimizationParameters_wmin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_thetamax wmin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_wmin_type arg)
  {
    msg_.wmin = std::move(arg);
    return Init_OptimizationParameters_thetamax(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_wmax
{
public:
  explicit Init_OptimizationParameters_wmax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_wmin wmax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_wmax_type arg)
  {
    msg_.wmax = std::move(arg);
    return Init_OptimizationParameters_wmin(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_zmin
{
public:
  explicit Init_OptimizationParameters_zmin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_wmax zmin(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_zmin_type arg)
  {
    msg_.zmin = std::move(arg);
    return Init_OptimizationParameters_wmax(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_zmax
{
public:
  explicit Init_OptimizationParameters_zmax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_zmin zmax(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_zmax_type arg)
  {
    msg_.zmax = std::move(arg);
    return Init_OptimizationParameters_zmin(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_m_min
{
public:
  explicit Init_OptimizationParameters_delta_m_min(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_zmax delta_m_min(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_m_min_type arg)
  {
    msg_.delta_m_min = std::move(arg);
    return Init_OptimizationParameters_zmax(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_m_max
{
public:
  explicit Init_OptimizationParameters_delta_m_max(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_m_min delta_m_max(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_m_max_type arg)
  {
    msg_.delta_m_max = std::move(arg);
    return Init_OptimizationParameters_delta_m_min(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_s_min
{
public:
  explicit Init_OptimizationParameters_delta_s_min(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_m_max delta_s_min(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_s_min_type arg)
  {
    msg_.delta_s_min = std::move(arg);
    return Init_OptimizationParameters_delta_m_max(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_s_max
{
public:
  explicit Init_OptimizationParameters_delta_s_max(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_s_min delta_s_max(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_s_max_type arg)
  {
    msg_.delta_s_max = std::move(arg);
    return Init_OptimizationParameters_delta_s_min(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_v_min
{
public:
  explicit Init_OptimizationParameters_delta_v_min(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_s_max delta_v_min(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_v_min_type arg)
  {
    msg_.delta_v_min = std::move(arg);
    return Init_OptimizationParameters_delta_s_max(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_delta_v_max
{
public:
  explicit Init_OptimizationParameters_delta_v_max(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_v_min delta_v_max(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_delta_v_max_type arg)
  {
    msg_.delta_v_max = std::move(arg);
    return Init_OptimizationParameters_delta_v_min(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_tf
{
public:
  explicit Init_OptimizationParameters_tf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & msg)
  : msg_(msg)
  {}
  Init_OptimizationParameters_delta_v_max tf(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_tf_type arg)
  {
    msg_.tf = std::move(arg);
    return Init_OptimizationParameters_delta_v_max(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

class Init_OptimizationParameters_n
{
public:
  Init_OptimizationParameters_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizationParameters_tf n(::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_OptimizationParameters_tf(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters>()
{
  return ros_auv_v1_sub_l1_bebot_cpp::msg::builder::Init_OptimizationParameters_n();
}

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__BUILDER_HPP_
