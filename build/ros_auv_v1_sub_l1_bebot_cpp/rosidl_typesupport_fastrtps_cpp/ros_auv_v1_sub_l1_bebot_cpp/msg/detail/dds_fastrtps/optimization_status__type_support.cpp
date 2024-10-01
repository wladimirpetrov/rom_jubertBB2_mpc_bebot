// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.hpp"

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
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ready
  cdr << (ros_message.ready ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus & ros_message)
{
  // Member: ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ready = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
get_serialized_size(
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ready
  {
    size_t item_size = sizeof(ros_message.ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
max_serialized_size_OptimizationStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _OptimizationStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OptimizationStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OptimizationStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OptimizationStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OptimizationStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _OptimizationStatus__callbacks = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "OptimizationStatus",
  _OptimizationStatus__cdr_serialize,
  _OptimizationStatus__cdr_deserialize,
  _OptimizationStatus__get_serialized_size,
  _OptimizationStatus__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OptimizationStatus__callbacks,
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
get_message_type_support_handle<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus>()
{
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_OptimizationStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationStatus)() {
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_OptimizationStatus__handle;
}

#ifdef __cplusplus
}
#endif
