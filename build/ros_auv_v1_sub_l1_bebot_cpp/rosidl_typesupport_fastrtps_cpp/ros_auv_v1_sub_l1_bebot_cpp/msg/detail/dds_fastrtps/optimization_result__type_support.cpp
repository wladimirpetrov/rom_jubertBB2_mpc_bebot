// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ros_auv_v1_sub_l1_bebot_cpp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
cdr_serialize(
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: solution_x
  {
    cdr << ros_message.solution_x;
  }
  // Member: final_obj_value
  cdr << ros_message.final_obj_value;
  // Member: t0
  cdr << ros_message.t0;
  // Member: tend
  cdr << ros_message.tend;
  // Member: tf
  cdr << ros_message.tf;
  // Member: psi0
  cdr << ros_message.psi0;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & ros_message)
{
  // Member: solution_x
  {
    cdr >> ros_message.solution_x;
  }

  // Member: final_obj_value
  cdr >> ros_message.final_obj_value;

  // Member: t0
  cdr >> ros_message.t0;

  // Member: tend
  cdr >> ros_message.tend;

  // Member: tf
  cdr >> ros_message.tf;

  // Member: psi0
  cdr >> ros_message.psi0;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
get_serialized_size(
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: solution_x
  {
    size_t array_size = ros_message.solution_x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.solution_x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: final_obj_value
  {
    size_t item_size = sizeof(ros_message.final_obj_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t0
  {
    size_t item_size = sizeof(ros_message.t0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tend
  {
    size_t item_size = sizeof(ros_message.tend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tf
  {
    size_t item_size = sizeof(ros_message.tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: psi0
  {
    size_t item_size = sizeof(ros_message.psi0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
max_serialized_size_OptimizationResult(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: solution_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: final_obj_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tend
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: psi0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _OptimizationResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OptimizationResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OptimizationResult__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OptimizationResult__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OptimizationResult(full_bounded, 0);
}

static message_type_support_callbacks_t _OptimizationResult__callbacks = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "OptimizationResult",
  _OptimizationResult__cdr_serialize,
  _OptimizationResult__cdr_deserialize,
  _OptimizationResult__get_serialized_size,
  _OptimizationResult__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OptimizationResult__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_auv_v1_sub_l1_bebot_cpp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_auv_v1_sub_l1_bebot_cpp
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>()
{
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_OptimizationResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationResult)() {
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_OptimizationResult__handle;
}

#ifdef __cplusplus
}
#endif
