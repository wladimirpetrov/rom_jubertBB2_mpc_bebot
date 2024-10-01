// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__STRUCT_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters __attribute__((deprecated))
#else
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters __declspec(deprecated)
#endif

namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizationParameters_
{
  using Type = OptimizationParameters_<ContainerAllocator>;

  explicit OptimizationParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
      this->tf = 0.0;
      this->delta_v_max = 0.0;
      this->delta_v_min = 0.0;
      this->delta_s_max = 0.0;
      this->delta_s_min = 0.0;
      this->delta_m_max = 0.0;
      this->delta_m_min = 0.0;
      this->zmax = 0.0;
      this->zmin = 0.0;
      this->wmax = 0.0;
      this->wmin = 0.0;
      this->thetamax = 0.0;
      this->thetamin = 0.0;
      this->qmax = 0.0;
      this->qmin = 0.0;
      this->z0 = 0.0;
      this->w0 = 0.0;
      this->theta0 = 0.0;
      this->q0 = 0.0;
      this->delta_v0 = 0.0;
      this->delta_m0 = 0.0;
      this->delta_s0 = 0.0;
      this->zf = 0.0;
      this->thetaf = 0.0;
      this->t0 = 0.0;
      this->tend = 0.0;
      this->psi0 = 0.0;
    }
  }

  explicit OptimizationParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n = 0l;
      this->tf = 0.0;
      this->delta_v_max = 0.0;
      this->delta_v_min = 0.0;
      this->delta_s_max = 0.0;
      this->delta_s_min = 0.0;
      this->delta_m_max = 0.0;
      this->delta_m_min = 0.0;
      this->zmax = 0.0;
      this->zmin = 0.0;
      this->wmax = 0.0;
      this->wmin = 0.0;
      this->thetamax = 0.0;
      this->thetamin = 0.0;
      this->qmax = 0.0;
      this->qmin = 0.0;
      this->z0 = 0.0;
      this->w0 = 0.0;
      this->theta0 = 0.0;
      this->q0 = 0.0;
      this->delta_v0 = 0.0;
      this->delta_m0 = 0.0;
      this->delta_s0 = 0.0;
      this->zf = 0.0;
      this->thetaf = 0.0;
      this->t0 = 0.0;
      this->tend = 0.0;
      this->psi0 = 0.0;
    }
  }

  // field types and members
  using _n_type =
    int32_t;
  _n_type n;
  using _tf_type =
    double;
  _tf_type tf;
  using _delta_v_max_type =
    double;
  _delta_v_max_type delta_v_max;
  using _delta_v_min_type =
    double;
  _delta_v_min_type delta_v_min;
  using _delta_s_max_type =
    double;
  _delta_s_max_type delta_s_max;
  using _delta_s_min_type =
    double;
  _delta_s_min_type delta_s_min;
  using _delta_m_max_type =
    double;
  _delta_m_max_type delta_m_max;
  using _delta_m_min_type =
    double;
  _delta_m_min_type delta_m_min;
  using _zmax_type =
    double;
  _zmax_type zmax;
  using _zmin_type =
    double;
  _zmin_type zmin;
  using _wmax_type =
    double;
  _wmax_type wmax;
  using _wmin_type =
    double;
  _wmin_type wmin;
  using _thetamax_type =
    double;
  _thetamax_type thetamax;
  using _thetamin_type =
    double;
  _thetamin_type thetamin;
  using _qmax_type =
    double;
  _qmax_type qmax;
  using _qmin_type =
    double;
  _qmin_type qmin;
  using _z0_type =
    double;
  _z0_type z0;
  using _w0_type =
    double;
  _w0_type w0;
  using _theta0_type =
    double;
  _theta0_type theta0;
  using _q0_type =
    double;
  _q0_type q0;
  using _delta_v0_type =
    double;
  _delta_v0_type delta_v0;
  using _delta_m0_type =
    double;
  _delta_m0_type delta_m0;
  using _delta_s0_type =
    double;
  _delta_s0_type delta_s0;
  using _zf_type =
    double;
  _zf_type zf;
  using _thetaf_type =
    double;
  _thetaf_type thetaf;
  using _a_flat_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _a_flat_type a_flat;
  using _b_flat_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _b_flat_type b_flat;
  using _t0_type =
    double;
  _t0_type t0;
  using _tend_type =
    double;
  _tend_type tend;
  using _psi0_type =
    double;
  _psi0_type psi0;

  // setters for named parameter idiom
  Type & set__n(
    const int32_t & _arg)
  {
    this->n = _arg;
    return *this;
  }
  Type & set__tf(
    const double & _arg)
  {
    this->tf = _arg;
    return *this;
  }
  Type & set__delta_v_max(
    const double & _arg)
  {
    this->delta_v_max = _arg;
    return *this;
  }
  Type & set__delta_v_min(
    const double & _arg)
  {
    this->delta_v_min = _arg;
    return *this;
  }
  Type & set__delta_s_max(
    const double & _arg)
  {
    this->delta_s_max = _arg;
    return *this;
  }
  Type & set__delta_s_min(
    const double & _arg)
  {
    this->delta_s_min = _arg;
    return *this;
  }
  Type & set__delta_m_max(
    const double & _arg)
  {
    this->delta_m_max = _arg;
    return *this;
  }
  Type & set__delta_m_min(
    const double & _arg)
  {
    this->delta_m_min = _arg;
    return *this;
  }
  Type & set__zmax(
    const double & _arg)
  {
    this->zmax = _arg;
    return *this;
  }
  Type & set__zmin(
    const double & _arg)
  {
    this->zmin = _arg;
    return *this;
  }
  Type & set__wmax(
    const double & _arg)
  {
    this->wmax = _arg;
    return *this;
  }
  Type & set__wmin(
    const double & _arg)
  {
    this->wmin = _arg;
    return *this;
  }
  Type & set__thetamax(
    const double & _arg)
  {
    this->thetamax = _arg;
    return *this;
  }
  Type & set__thetamin(
    const double & _arg)
  {
    this->thetamin = _arg;
    return *this;
  }
  Type & set__qmax(
    const double & _arg)
  {
    this->qmax = _arg;
    return *this;
  }
  Type & set__qmin(
    const double & _arg)
  {
    this->qmin = _arg;
    return *this;
  }
  Type & set__z0(
    const double & _arg)
  {
    this->z0 = _arg;
    return *this;
  }
  Type & set__w0(
    const double & _arg)
  {
    this->w0 = _arg;
    return *this;
  }
  Type & set__theta0(
    const double & _arg)
  {
    this->theta0 = _arg;
    return *this;
  }
  Type & set__q0(
    const double & _arg)
  {
    this->q0 = _arg;
    return *this;
  }
  Type & set__delta_v0(
    const double & _arg)
  {
    this->delta_v0 = _arg;
    return *this;
  }
  Type & set__delta_m0(
    const double & _arg)
  {
    this->delta_m0 = _arg;
    return *this;
  }
  Type & set__delta_s0(
    const double & _arg)
  {
    this->delta_s0 = _arg;
    return *this;
  }
  Type & set__zf(
    const double & _arg)
  {
    this->zf = _arg;
    return *this;
  }
  Type & set__thetaf(
    const double & _arg)
  {
    this->thetaf = _arg;
    return *this;
  }
  Type & set__a_flat(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->a_flat = _arg;
    return *this;
  }
  Type & set__b_flat(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->b_flat = _arg;
    return *this;
  }
  Type & set__t0(
    const double & _arg)
  {
    this->t0 = _arg;
    return *this;
  }
  Type & set__tend(
    const double & _arg)
  {
    this->tend = _arg;
    return *this;
  }
  Type & set__psi0(
    const double & _arg)
  {
    this->psi0 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizationParameters_ & other) const
  {
    if (this->n != other.n) {
      return false;
    }
    if (this->tf != other.tf) {
      return false;
    }
    if (this->delta_v_max != other.delta_v_max) {
      return false;
    }
    if (this->delta_v_min != other.delta_v_min) {
      return false;
    }
    if (this->delta_s_max != other.delta_s_max) {
      return false;
    }
    if (this->delta_s_min != other.delta_s_min) {
      return false;
    }
    if (this->delta_m_max != other.delta_m_max) {
      return false;
    }
    if (this->delta_m_min != other.delta_m_min) {
      return false;
    }
    if (this->zmax != other.zmax) {
      return false;
    }
    if (this->zmin != other.zmin) {
      return false;
    }
    if (this->wmax != other.wmax) {
      return false;
    }
    if (this->wmin != other.wmin) {
      return false;
    }
    if (this->thetamax != other.thetamax) {
      return false;
    }
    if (this->thetamin != other.thetamin) {
      return false;
    }
    if (this->qmax != other.qmax) {
      return false;
    }
    if (this->qmin != other.qmin) {
      return false;
    }
    if (this->z0 != other.z0) {
      return false;
    }
    if (this->w0 != other.w0) {
      return false;
    }
    if (this->theta0 != other.theta0) {
      return false;
    }
    if (this->q0 != other.q0) {
      return false;
    }
    if (this->delta_v0 != other.delta_v0) {
      return false;
    }
    if (this->delta_m0 != other.delta_m0) {
      return false;
    }
    if (this->delta_s0 != other.delta_s0) {
      return false;
    }
    if (this->zf != other.zf) {
      return false;
    }
    if (this->thetaf != other.thetaf) {
      return false;
    }
    if (this->a_flat != other.a_flat) {
      return false;
    }
    if (this->b_flat != other.b_flat) {
      return false;
    }
    if (this->t0 != other.t0) {
      return false;
    }
    if (this->tend != other.tend) {
      return false;
    }
    if (this->psi0 != other.psi0) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizationParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizationParameters_

// alias to use template instance with default allocator
using OptimizationParameters =
  ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__STRUCT_HPP_
