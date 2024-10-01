// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__STRUCT_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg __declspec(deprecated)
#endif

namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct L1AdaptiveMsg_
{
  using Type = L1AdaptiveMsg_<ContainerAllocator>;

  explicit L1AdaptiveMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_act = 0.0;
      this->y_act = 0.0;
      this->z_act = 0.0;
      this->roll_act = 0.0;
      this->pitch_act = 0.0;
      this->yaw_act = 0.0;
      this->u_act = 0.0;
      this->v_act = 0.0;
      this->w_act = 0.0;
      this->p_act = 0.0;
      this->q_act = 0.0;
      this->r_act = 0.0;
      this->adap = 0.0;
      this->delta_v_act = 0.0;
      this->delta_m_act = 0.0;
      this->delta_s_act = 0.0;
      this->zend = 0.0;
      this->thetaend = 0.0;
      this->tf = 0.0;
      this->tend = 0.0;
      this->t0 = 0.0;
      this->y_aug = 0.0;
    }
  }

  explicit L1AdaptiveMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_act = 0.0;
      this->y_act = 0.0;
      this->z_act = 0.0;
      this->roll_act = 0.0;
      this->pitch_act = 0.0;
      this->yaw_act = 0.0;
      this->u_act = 0.0;
      this->v_act = 0.0;
      this->w_act = 0.0;
      this->p_act = 0.0;
      this->q_act = 0.0;
      this->r_act = 0.0;
      this->adap = 0.0;
      this->delta_v_act = 0.0;
      this->delta_m_act = 0.0;
      this->delta_s_act = 0.0;
      this->zend = 0.0;
      this->thetaend = 0.0;
      this->tf = 0.0;
      this->tend = 0.0;
      this->t0 = 0.0;
      this->y_aug = 0.0;
    }
  }

  // field types and members
  using _x_act_type =
    double;
  _x_act_type x_act;
  using _y_act_type =
    double;
  _y_act_type y_act;
  using _z_act_type =
    double;
  _z_act_type z_act;
  using _roll_act_type =
    double;
  _roll_act_type roll_act;
  using _pitch_act_type =
    double;
  _pitch_act_type pitch_act;
  using _yaw_act_type =
    double;
  _yaw_act_type yaw_act;
  using _u_act_type =
    double;
  _u_act_type u_act;
  using _v_act_type =
    double;
  _v_act_type v_act;
  using _w_act_type =
    double;
  _w_act_type w_act;
  using _p_act_type =
    double;
  _p_act_type p_act;
  using _q_act_type =
    double;
  _q_act_type q_act;
  using _r_act_type =
    double;
  _r_act_type r_act;
  using _adap_type =
    double;
  _adap_type adap;
  using _delta_v_act_type =
    double;
  _delta_v_act_type delta_v_act;
  using _delta_m_act_type =
    double;
  _delta_m_act_type delta_m_act;
  using _delta_s_act_type =
    double;
  _delta_s_act_type delta_s_act;
  using _zend_type =
    double;
  _zend_type zend;
  using _thetaend_type =
    double;
  _thetaend_type thetaend;
  using _tf_type =
    double;
  _tf_type tf;
  using _tend_type =
    double;
  _tend_type tend;
  using _t0_type =
    double;
  _t0_type t0;
  using _y_aug_type =
    double;
  _y_aug_type y_aug;

  // setters for named parameter idiom
  Type & set__x_act(
    const double & _arg)
  {
    this->x_act = _arg;
    return *this;
  }
  Type & set__y_act(
    const double & _arg)
  {
    this->y_act = _arg;
    return *this;
  }
  Type & set__z_act(
    const double & _arg)
  {
    this->z_act = _arg;
    return *this;
  }
  Type & set__roll_act(
    const double & _arg)
  {
    this->roll_act = _arg;
    return *this;
  }
  Type & set__pitch_act(
    const double & _arg)
  {
    this->pitch_act = _arg;
    return *this;
  }
  Type & set__yaw_act(
    const double & _arg)
  {
    this->yaw_act = _arg;
    return *this;
  }
  Type & set__u_act(
    const double & _arg)
  {
    this->u_act = _arg;
    return *this;
  }
  Type & set__v_act(
    const double & _arg)
  {
    this->v_act = _arg;
    return *this;
  }
  Type & set__w_act(
    const double & _arg)
  {
    this->w_act = _arg;
    return *this;
  }
  Type & set__p_act(
    const double & _arg)
  {
    this->p_act = _arg;
    return *this;
  }
  Type & set__q_act(
    const double & _arg)
  {
    this->q_act = _arg;
    return *this;
  }
  Type & set__r_act(
    const double & _arg)
  {
    this->r_act = _arg;
    return *this;
  }
  Type & set__adap(
    const double & _arg)
  {
    this->adap = _arg;
    return *this;
  }
  Type & set__delta_v_act(
    const double & _arg)
  {
    this->delta_v_act = _arg;
    return *this;
  }
  Type & set__delta_m_act(
    const double & _arg)
  {
    this->delta_m_act = _arg;
    return *this;
  }
  Type & set__delta_s_act(
    const double & _arg)
  {
    this->delta_s_act = _arg;
    return *this;
  }
  Type & set__zend(
    const double & _arg)
  {
    this->zend = _arg;
    return *this;
  }
  Type & set__thetaend(
    const double & _arg)
  {
    this->thetaend = _arg;
    return *this;
  }
  Type & set__tf(
    const double & _arg)
  {
    this->tf = _arg;
    return *this;
  }
  Type & set__tend(
    const double & _arg)
  {
    this->tend = _arg;
    return *this;
  }
  Type & set__t0(
    const double & _arg)
  {
    this->t0 = _arg;
    return *this;
  }
  Type & set__y_aug(
    const double & _arg)
  {
    this->y_aug = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const L1AdaptiveMsg_ & other) const
  {
    if (this->x_act != other.x_act) {
      return false;
    }
    if (this->y_act != other.y_act) {
      return false;
    }
    if (this->z_act != other.z_act) {
      return false;
    }
    if (this->roll_act != other.roll_act) {
      return false;
    }
    if (this->pitch_act != other.pitch_act) {
      return false;
    }
    if (this->yaw_act != other.yaw_act) {
      return false;
    }
    if (this->u_act != other.u_act) {
      return false;
    }
    if (this->v_act != other.v_act) {
      return false;
    }
    if (this->w_act != other.w_act) {
      return false;
    }
    if (this->p_act != other.p_act) {
      return false;
    }
    if (this->q_act != other.q_act) {
      return false;
    }
    if (this->r_act != other.r_act) {
      return false;
    }
    if (this->adap != other.adap) {
      return false;
    }
    if (this->delta_v_act != other.delta_v_act) {
      return false;
    }
    if (this->delta_m_act != other.delta_m_act) {
      return false;
    }
    if (this->delta_s_act != other.delta_s_act) {
      return false;
    }
    if (this->zend != other.zend) {
      return false;
    }
    if (this->thetaend != other.thetaend) {
      return false;
    }
    if (this->tf != other.tf) {
      return false;
    }
    if (this->tend != other.tend) {
      return false;
    }
    if (this->t0 != other.t0) {
      return false;
    }
    if (this->y_aug != other.y_aug) {
      return false;
    }
    return true;
  }
  bool operator!=(const L1AdaptiveMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct L1AdaptiveMsg_

// alias to use template instance with default allocator
using L1AdaptiveMsg =
  ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__L1_ADAPTIVE_MSG__STRUCT_HPP_
