// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__STRUCT_HPP_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus __attribute__((deprecated))
#else
# define DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus __declspec(deprecated)
#endif

namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizationStatus_
{
  using Type = OptimizationStatus_<ContainerAllocator>;

  explicit OptimizationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
    }
  }

  explicit OptimizationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
    }
  }

  // field types and members
  using _ready_type =
    bool;
  _ready_type ready;

  // setters for named parameter idiom
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus
    std::shared_ptr<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizationStatus_ & other) const
  {
    if (this->ready != other.ready) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizationStatus_

// alias to use template instance with default allocator
using OptimizationStatus =
  ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__STRUCT_HPP_
