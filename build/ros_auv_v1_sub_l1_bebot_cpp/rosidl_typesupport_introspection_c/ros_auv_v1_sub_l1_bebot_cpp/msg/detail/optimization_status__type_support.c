// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__rosidl_typesupport_introspection_c.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__functions.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init(message_memory);
}

void OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_fini_function(void * message_memory)
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_member_array[1] = {
  {
    "ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus, ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_members = {
  "ros_auv_v1_sub_l1_bebot_cpp__msg",  // message namespace
  "OptimizationStatus",  // message name
  1,  // number of fields
  sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus),
  OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_member_array,  // message members
  OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_type_support_handle = {
  0,
  &OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_auv_v1_sub_l1_bebot_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationStatus)() {
  if (!OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_type_support_handle.typesupport_identifier) {
    OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OptimizationStatus__rosidl_typesupport_introspection_c__OptimizationStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
