// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // solution_x
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // solution_x

// forward declare type support functions


using _OptimizationResult__ros_msg_type = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult;

static bool _OptimizationResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OptimizationResult__ros_msg_type * ros_message = static_cast<const _OptimizationResult__ros_msg_type *>(untyped_ros_message);
  // Field name: solution_x
  {
    size_t size = ros_message->solution_x.size;
    auto array_ptr = ros_message->solution_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: final_obj_value
  {
    cdr << ros_message->final_obj_value;
  }

  // Field name: t0
  {
    cdr << ros_message->t0;
  }

  // Field name: tend
  {
    cdr << ros_message->tend;
  }

  // Field name: tf
  {
    cdr << ros_message->tf;
  }

  // Field name: psi0
  {
    cdr << ros_message->psi0;
  }

  return true;
}

static bool _OptimizationResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OptimizationResult__ros_msg_type * ros_message = static_cast<_OptimizationResult__ros_msg_type *>(untyped_ros_message);
  // Field name: solution_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->solution_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->solution_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->solution_x, size)) {
      return "failed to create array for field 'solution_x'";
    }
    auto array_ptr = ros_message->solution_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: final_obj_value
  {
    cdr >> ros_message->final_obj_value;
  }

  // Field name: t0
  {
    cdr >> ros_message->t0;
  }

  // Field name: tend
  {
    cdr >> ros_message->tend;
  }

  // Field name: tf
  {
    cdr >> ros_message->tf;
  }

  // Field name: psi0
  {
    cdr >> ros_message->psi0;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OptimizationResult__ros_msg_type * ros_message = static_cast<const _OptimizationResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name solution_x
  {
    size_t array_size = ros_message->solution_x.size;
    auto array_ptr = ros_message->solution_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name final_obj_value
  {
    size_t item_size = sizeof(ros_message->final_obj_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t0
  {
    size_t item_size = sizeof(ros_message->t0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tend
  {
    size_t item_size = sizeof(ros_message->tend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tf
  {
    size_t item_size = sizeof(ros_message->tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psi0
  {
    size_t item_size = sizeof(ros_message->psi0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OptimizationResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: solution_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: final_obj_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tend
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: psi0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _OptimizationResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OptimizationResult = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "OptimizationResult",
  _OptimizationResult__cdr_serialize,
  _OptimizationResult__cdr_deserialize,
  _OptimizationResult__get_serialized_size,
  _OptimizationResult__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OptimizationResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationResult)() {
  return &_OptimizationResult__type_support;
}

#if defined(__cplusplus)
}
#endif
