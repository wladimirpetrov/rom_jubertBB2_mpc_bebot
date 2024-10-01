// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _OptimizationStatus__ros_msg_type = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus;

static bool _OptimizationStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OptimizationStatus__ros_msg_type * ros_message = static_cast<const _OptimizationStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: ready
  {
    cdr << (ros_message->ready ? true : false);
  }

  return true;
}

static bool _OptimizationStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OptimizationStatus__ros_msg_type * ros_message = static_cast<_OptimizationStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ready = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OptimizationStatus__ros_msg_type * ros_message = static_cast<const _OptimizationStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ready
  {
    size_t item_size = sizeof(ros_message->ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OptimizationStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OptimizationStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OptimizationStatus = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "OptimizationStatus",
  _OptimizationStatus__cdr_serialize,
  _OptimizationStatus__cdr_deserialize,
  _OptimizationStatus__get_serialized_size,
  _OptimizationStatus__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OptimizationStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationStatus)() {
  return &_OptimizationStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
