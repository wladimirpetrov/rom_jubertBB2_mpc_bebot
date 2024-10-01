// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__rosidl_typesupport_introspection_c.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__functions.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__struct.h"


// Include directives for member types
// Member `solution_x`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__init(message_memory);
}

void OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_fini_function(void * message_memory)
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_member_array[6] = {
  {
    "solution_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult, solution_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_obj_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult, final_obj_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult, t0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tend",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult, tend),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult, tf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "psi0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult, psi0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_members = {
  "ros_auv_v1_sub_l1_bebot_cpp__msg",  // message namespace
  "OptimizationResult",  // message name
  6,  // number of fields
  sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult),
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_member_array,  // message members
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_init_function,  // function to initialize message memory (memory has to be allocated)
  OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle = {
  0,
  &OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_auv_v1_sub_l1_bebot_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationResult)() {
  if (!OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle.typesupport_identifier) {
    OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OptimizationResult__rosidl_typesupport_introspection_c__OptimizationResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
