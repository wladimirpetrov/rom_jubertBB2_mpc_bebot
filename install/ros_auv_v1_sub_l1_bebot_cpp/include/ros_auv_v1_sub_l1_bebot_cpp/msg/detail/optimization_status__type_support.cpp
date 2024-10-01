// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OptimizationStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus(_init);
}

void OptimizationStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus *>(message_memory);
  typed_message->~OptimizationStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OptimizationStatus_message_member_array[1] = {
  {
    "ready",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus, ready),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OptimizationStatus_message_members = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",  // message namespace
  "OptimizationStatus",  // message name
  1,  // number of fields
  sizeof(ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus),
  OptimizationStatus_message_member_array,  // message members
  OptimizationStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  OptimizationStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OptimizationStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OptimizationStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_auv_v1_sub_l1_bebot_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus>()
{
  return &::ros_auv_v1_sub_l1_bebot_cpp::msg::rosidl_typesupport_introspection_cpp::OptimizationStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationStatus)() {
  return &::ros_auv_v1_sub_l1_bebot_cpp::msg::rosidl_typesupport_introspection_cpp::OptimizationStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
