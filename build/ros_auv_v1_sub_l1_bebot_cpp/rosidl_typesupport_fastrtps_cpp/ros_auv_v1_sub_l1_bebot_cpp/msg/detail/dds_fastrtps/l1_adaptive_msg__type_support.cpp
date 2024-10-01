// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__struct.hpp"

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
  const ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_act
  cdr << ros_message.x_act;
  // Member: y_act
  cdr << ros_message.y_act;
  // Member: z_act
  cdr << ros_message.z_act;
  // Member: roll_act
  cdr << ros_message.roll_act;
  // Member: pitch_act
  cdr << ros_message.pitch_act;
  // Member: yaw_act
  cdr << ros_message.yaw_act;
  // Member: u_act
  cdr << ros_message.u_act;
  // Member: v_act
  cdr << ros_message.v_act;
  // Member: w_act
  cdr << ros_message.w_act;
  // Member: p_act
  cdr << ros_message.p_act;
  // Member: q_act
  cdr << ros_message.q_act;
  // Member: r_act
  cdr << ros_message.r_act;
  // Member: adap
  cdr << ros_message.adap;
  // Member: delta_v_act
  cdr << ros_message.delta_v_act;
  // Member: delta_m_act
  cdr << ros_message.delta_m_act;
  // Member: delta_s_act
  cdr << ros_message.delta_s_act;
  // Member: zend
  cdr << ros_message.zend;
  // Member: thetaend
  cdr << ros_message.thetaend;
  // Member: tf
  cdr << ros_message.tf;
  // Member: tend
  cdr << ros_message.tend;
  // Member: t0
  cdr << ros_message.t0;
  // Member: y_aug
  cdr << ros_message.y_aug;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & ros_message)
{
  // Member: x_act
  cdr >> ros_message.x_act;

  // Member: y_act
  cdr >> ros_message.y_act;

  // Member: z_act
  cdr >> ros_message.z_act;

  // Member: roll_act
  cdr >> ros_message.roll_act;

  // Member: pitch_act
  cdr >> ros_message.pitch_act;

  // Member: yaw_act
  cdr >> ros_message.yaw_act;

  // Member: u_act
  cdr >> ros_message.u_act;

  // Member: v_act
  cdr >> ros_message.v_act;

  // Member: w_act
  cdr >> ros_message.w_act;

  // Member: p_act
  cdr >> ros_message.p_act;

  // Member: q_act
  cdr >> ros_message.q_act;

  // Member: r_act
  cdr >> ros_message.r_act;

  // Member: adap
  cdr >> ros_message.adap;

  // Member: delta_v_act
  cdr >> ros_message.delta_v_act;

  // Member: delta_m_act
  cdr >> ros_message.delta_m_act;

  // Member: delta_s_act
  cdr >> ros_message.delta_s_act;

  // Member: zend
  cdr >> ros_message.zend;

  // Member: thetaend
  cdr >> ros_message.thetaend;

  // Member: tf
  cdr >> ros_message.tf;

  // Member: tend
  cdr >> ros_message.tend;

  // Member: t0
  cdr >> ros_message.t0;

  // Member: y_aug
  cdr >> ros_message.y_aug;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
get_serialized_size(
  const ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_act
  {
    size_t item_size = sizeof(ros_message.x_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_act
  {
    size_t item_size = sizeof(ros_message.y_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_act
  {
    size_t item_size = sizeof(ros_message.z_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_act
  {
    size_t item_size = sizeof(ros_message.roll_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_act
  {
    size_t item_size = sizeof(ros_message.pitch_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_act
  {
    size_t item_size = sizeof(ros_message.yaw_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: u_act
  {
    size_t item_size = sizeof(ros_message.u_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_act
  {
    size_t item_size = sizeof(ros_message.v_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w_act
  {
    size_t item_size = sizeof(ros_message.w_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_act
  {
    size_t item_size = sizeof(ros_message.p_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q_act
  {
    size_t item_size = sizeof(ros_message.q_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r_act
  {
    size_t item_size = sizeof(ros_message.r_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adap
  {
    size_t item_size = sizeof(ros_message.adap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_v_act
  {
    size_t item_size = sizeof(ros_message.delta_v_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_m_act
  {
    size_t item_size = sizeof(ros_message.delta_m_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_s_act
  {
    size_t item_size = sizeof(ros_message.delta_s_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zend
  {
    size_t item_size = sizeof(ros_message.zend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thetaend
  {
    size_t item_size = sizeof(ros_message.thetaend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tf
  {
    size_t item_size = sizeof(ros_message.tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tend
  {
    size_t item_size = sizeof(ros_message.tend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t0
  {
    size_t item_size = sizeof(ros_message.t0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_aug
  {
    size_t item_size = sizeof(ros_message.y_aug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
max_serialized_size_L1AdaptiveMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: roll_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pitch_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: u_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: v_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: p_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: q_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: r_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: adap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_v_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_m_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_s_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zend
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thetaend
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

  // Member: tend
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

  // Member: y_aug
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _L1AdaptiveMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _L1AdaptiveMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _L1AdaptiveMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _L1AdaptiveMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_L1AdaptiveMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _L1AdaptiveMsg__callbacks = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "L1AdaptiveMsg",
  _L1AdaptiveMsg__cdr_serialize,
  _L1AdaptiveMsg__cdr_deserialize,
  _L1AdaptiveMsg__get_serialized_size,
  _L1AdaptiveMsg__max_serialized_size
};

static rosidl_message_type_support_t _L1AdaptiveMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_L1AdaptiveMsg__callbacks,
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
get_message_type_support_handle<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg>()
{
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_L1AdaptiveMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_auv_v1_sub_l1_bebot_cpp, msg, L1AdaptiveMsg)() {
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_L1AdaptiveMsg__handle;
}

#ifdef __cplusplus
}
#endif
