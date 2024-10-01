// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult __attribute__((deprecated))
#else
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult __declspec(deprecated)
#endif

namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizationResult_
{
  using Type = OptimizationResult_<ContainerAllocator>;

  explicit OptimizationResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_obj_value = 0.0;
      this->t0 = 0.0;
      this->tend = 0.0;
      this->tf = 0.0;
      this->psi0 = 0.0;
    }
  }

  explicit OptimizationResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_obj_value = 0.0;
      this->t0 = 0.0;
      this->tend = 0.0;
      this->tf = 0.0;
      this->psi0 = 0.0;
    }
  }

  // field types and members
  using _solution_x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _solution_x_type solution_x;
  using _final_obj_value_type =
    double;
  _final_obj_value_type final_obj_value;
  using _t0_type =
    double;
  _t0_type t0;
  using _tend_type =
    double;
  _tend_type tend;
  using _tf_type =
    double;
  _tf_type tf;
  using _psi0_type =
    double;
  _psi0_type psi0;

  // setters for named parameter idiom
  Type & set__solution_x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->solution_x = _arg;
    return *this;
  }
  Type & set__final_obj_value(
    const double & _arg)
  {
    this->final_obj_value = _arg;
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
  Type & set__tf(
    const double & _arg)
  {
    this->tf = _arg;
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
    ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizationResult_ & other) const
  {
    if (this->solution_x != other.solution_x) {
      return false;
    }
    if (this->final_obj_value != other.final_obj_value) {
      return false;
    }
    if (this->t0 != other.t0) {
      return false;
    }
    if (this->tend != other.tend) {
      return false;
    }
    if (this->tf != other.tf) {
      return false;
    }
    if (this->psi0 != other.psi0) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizationResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizationResult_

// alias to use template instance with default allocator
using OptimizationResult =
  ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_RESULT__STRUCT_HPP_
