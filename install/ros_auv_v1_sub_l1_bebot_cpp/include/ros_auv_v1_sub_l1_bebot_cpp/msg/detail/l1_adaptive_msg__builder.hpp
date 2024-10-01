// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__BUILDER_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__BUILDER_HPP_

#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

namespace builder
{

class Init_L1AdaptiveMsg_y_aug
{
public:
  explicit Init_L1AdaptiveMsg_y_aug(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg y_aug(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_y_aug_type arg)
  {
    msg_.y_aug = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_t0
{
public:
  explicit Init_L1AdaptiveMsg_t0(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_y_aug t0(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_t0_type arg)
  {
    msg_.t0 = std::move(arg);
    return Init_L1AdaptiveMsg_y_aug(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_tend
{
public:
  explicit Init_L1AdaptiveMsg_tend(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_t0 tend(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_tend_type arg)
  {
    msg_.tend = std::move(arg);
    return Init_L1AdaptiveMsg_t0(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_tf
{
public:
  explicit Init_L1AdaptiveMsg_tf(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_tend tf(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_tf_type arg)
  {
    msg_.tf = std::move(arg);
    return Init_L1AdaptiveMsg_tend(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_thetaend
{
public:
  explicit Init_L1AdaptiveMsg_thetaend(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_tf thetaend(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_thetaend_type arg)
  {
    msg_.thetaend = std::move(arg);
    return Init_L1AdaptiveMsg_tf(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_zend
{
public:
  explicit Init_L1AdaptiveMsg_zend(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_thetaend zend(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_zend_type arg)
  {
    msg_.zend = std::move(arg);
    return Init_L1AdaptiveMsg_thetaend(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_delta_s_act
{
public:
  explicit Init_L1AdaptiveMsg_delta_s_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_zend delta_s_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_delta_s_act_type arg)
  {
    msg_.delta_s_act = std::move(arg);
    return Init_L1AdaptiveMsg_zend(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_delta_m_act
{
public:
  explicit Init_L1AdaptiveMsg_delta_m_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_delta_s_act delta_m_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_delta_m_act_type arg)
  {
    msg_.delta_m_act = std::move(arg);
    return Init_L1AdaptiveMsg_delta_s_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_delta_v_act
{
public:
  explicit Init_L1AdaptiveMsg_delta_v_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_delta_m_act delta_v_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_delta_v_act_type arg)
  {
    msg_.delta_v_act = std::move(arg);
    return Init_L1AdaptiveMsg_delta_m_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_adap
{
public:
  explicit Init_L1AdaptiveMsg_adap(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_delta_v_act adap(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_adap_type arg)
  {
    msg_.adap = std::move(arg);
    return Init_L1AdaptiveMsg_delta_v_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_r_act
{
public:
  explicit Init_L1AdaptiveMsg_r_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_adap r_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_r_act_type arg)
  {
    msg_.r_act = std::move(arg);
    return Init_L1AdaptiveMsg_adap(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_q_act
{
public:
  explicit Init_L1AdaptiveMsg_q_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_r_act q_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_q_act_type arg)
  {
    msg_.q_act = std::move(arg);
    return Init_L1AdaptiveMsg_r_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_p_act
{
public:
  explicit Init_L1AdaptiveMsg_p_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_q_act p_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_p_act_type arg)
  {
    msg_.p_act = std::move(arg);
    return Init_L1AdaptiveMsg_q_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_w_act
{
public:
  explicit Init_L1AdaptiveMsg_w_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_p_act w_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_w_act_type arg)
  {
    msg_.w_act = std::move(arg);
    return Init_L1AdaptiveMsg_p_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_v_act
{
public:
  explicit Init_L1AdaptiveMsg_v_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_w_act v_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_v_act_type arg)
  {
    msg_.v_act = std::move(arg);
    return Init_L1AdaptiveMsg_w_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_u_act
{
public:
  explicit Init_L1AdaptiveMsg_u_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_v_act u_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_u_act_type arg)
  {
    msg_.u_act = std::move(arg);
    return Init_L1AdaptiveMsg_v_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_yaw_act
{
public:
  explicit Init_L1AdaptiveMsg_yaw_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_u_act yaw_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_yaw_act_type arg)
  {
    msg_.yaw_act = std::move(arg);
    return Init_L1AdaptiveMsg_u_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_pitch_act
{
public:
  explicit Init_L1AdaptiveMsg_pitch_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_yaw_act pitch_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_pitch_act_type arg)
  {
    msg_.pitch_act = std::move(arg);
    return Init_L1AdaptiveMsg_yaw_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_roll_act
{
public:
  explicit Init_L1AdaptiveMsg_roll_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_pitch_act roll_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_roll_act_type arg)
  {
    msg_.roll_act = std::move(arg);
    return Init_L1AdaptiveMsg_pitch_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_z_act
{
public:
  explicit Init_L1AdaptiveMsg_z_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_roll_act z_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_z_act_type arg)
  {
    msg_.z_act = std::move(arg);
    return Init_L1AdaptiveMsg_roll_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_y_act
{
public:
  explicit Init_L1AdaptiveMsg_y_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & msg)
  : msg_(msg)
  {}
  Init_L1AdaptiveMsg_z_act y_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_y_act_type arg)
  {
    msg_.y_act = std::move(arg);
    return Init_L1AdaptiveMsg_z_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

class Init_L1AdaptiveMsg_x_act
{
public:
  Init_L1AdaptiveMsg_x_act()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_L1AdaptiveMsg_y_act x_act(::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::_x_act_type arg)
  {
    msg_.x_act = std::move(arg);
    return Init_L1AdaptiveMsg_y_act(msg_);
  }

private:
  ::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg>()
{
  return ros_auv_v1_sub_l1_bebot_cpp::msg::builder::Init_L1AdaptiveMsg_x_act();
}

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__BUILDER_HPP_
