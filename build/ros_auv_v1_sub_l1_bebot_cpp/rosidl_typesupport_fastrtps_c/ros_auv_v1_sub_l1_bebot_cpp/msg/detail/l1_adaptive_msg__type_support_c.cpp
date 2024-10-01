// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__functions.h"
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


using _L1AdaptiveMsg__ros_msg_type = ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg;

static bool _L1AdaptiveMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _L1AdaptiveMsg__ros_msg_type * ros_message = static_cast<const _L1AdaptiveMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: x_act
  {
    cdr << ros_message->x_act;
  }

  // Field name: y_act
  {
    cdr << ros_message->y_act;
  }

  // Field name: z_act
  {
    cdr << ros_message->z_act;
  }

  // Field name: roll_act
  {
    cdr << ros_message->roll_act;
  }

  // Field name: pitch_act
  {
    cdr << ros_message->pitch_act;
  }

  // Field name: yaw_act
  {
    cdr << ros_message->yaw_act;
  }

  // Field name: u_act
  {
    cdr << ros_message->u_act;
  }

  // Field name: v_act
  {
    cdr << ros_message->v_act;
  }

  // Field name: w_act
  {
    cdr << ros_message->w_act;
  }

  // Field name: p_act
  {
    cdr << ros_message->p_act;
  }

  // Field name: q_act
  {
    cdr << ros_message->q_act;
  }

  // Field name: r_act
  {
    cdr << ros_message->r_act;
  }

  // Field name: adap
  {
    cdr << ros_message->adap;
  }

  // Field name: delta_v_act
  {
    cdr << ros_message->delta_v_act;
  }

  // Field name: delta_m_act
  {
    cdr << ros_message->delta_m_act;
  }

  // Field name: delta_s_act
  {
    cdr << ros_message->delta_s_act;
  }

  // Field name: zend
  {
    cdr << ros_message->zend;
  }

  // Field name: thetaend
  {
    cdr << ros_message->thetaend;
  }

  // Field name: tf
  {
    cdr << ros_message->tf;
  }

  // Field name: tend
  {
    cdr << ros_message->tend;
  }

  // Field name: t0
  {
    cdr << ros_message->t0;
  }

  // Field name: y_aug
  {
    cdr << ros_message->y_aug;
  }

  return true;
}

static bool _L1AdaptiveMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _L1AdaptiveMsg__ros_msg_type * ros_message = static_cast<_L1AdaptiveMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: x_act
  {
    cdr >> ros_message->x_act;
  }

  // Field name: y_act
  {
    cdr >> ros_message->y_act;
  }

  // Field name: z_act
  {
    cdr >> ros_message->z_act;
  }

  // Field name: roll_act
  {
    cdr >> ros_message->roll_act;
  }

  // Field name: pitch_act
  {
    cdr >> ros_message->pitch_act;
  }

  // Field name: yaw_act
  {
    cdr >> ros_message->yaw_act;
  }

  // Field name: u_act
  {
    cdr >> ros_message->u_act;
  }

  // Field name: v_act
  {
    cdr >> ros_message->v_act;
  }

  // Field name: w_act
  {
    cdr >> ros_message->w_act;
  }

  // Field name: p_act
  {
    cdr >> ros_message->p_act;
  }

  // Field name: q_act
  {
    cdr >> ros_message->q_act;
  }

  // Field name: r_act
  {
    cdr >> ros_message->r_act;
  }

  // Field name: adap
  {
    cdr >> ros_message->adap;
  }

  // Field name: delta_v_act
  {
    cdr >> ros_message->delta_v_act;
  }

  // Field name: delta_m_act
  {
    cdr >> ros_message->delta_m_act;
  }

  // Field name: delta_s_act
  {
    cdr >> ros_message->delta_s_act;
  }

  // Field name: zend
  {
    cdr >> ros_message->zend;
  }

  // Field name: thetaend
  {
    cdr >> ros_message->thetaend;
  }

  // Field name: tf
  {
    cdr >> ros_message->tf;
  }

  // Field name: tend
  {
    cdr >> ros_message->tend;
  }

  // Field name: t0
  {
    cdr >> ros_message->t0;
  }

  // Field name: y_aug
  {
    cdr >> ros_message->y_aug;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _L1AdaptiveMsg__ros_msg_type * ros_message = static_cast<const _L1AdaptiveMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_act
  {
    size_t item_size = sizeof(ros_message->x_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_act
  {
    size_t item_size = sizeof(ros_message->y_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_act
  {
    size_t item_size = sizeof(ros_message->z_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_act
  {
    size_t item_size = sizeof(ros_message->roll_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_act
  {
    size_t item_size = sizeof(ros_message->pitch_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_act
  {
    size_t item_size = sizeof(ros_message->yaw_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name u_act
  {
    size_t item_size = sizeof(ros_message->u_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_act
  {
    size_t item_size = sizeof(ros_message->v_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w_act
  {
    size_t item_size = sizeof(ros_message->w_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_act
  {
    size_t item_size = sizeof(ros_message->p_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q_act
  {
    size_t item_size = sizeof(ros_message->q_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r_act
  {
    size_t item_size = sizeof(ros_message->r_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adap
  {
    size_t item_size = sizeof(ros_message->adap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_v_act
  {
    size_t item_size = sizeof(ros_message->delta_v_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_m_act
  {
    size_t item_size = sizeof(ros_message->delta_m_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_s_act
  {
    size_t item_size = sizeof(ros_message->delta_s_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zend
  {
    size_t item_size = sizeof(ros_message->zend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thetaend
  {
    size_t item_size = sizeof(ros_message->thetaend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tf
  {
    size_t item_size = sizeof(ros_message->tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tend
  {
    size_t item_size = sizeof(ros_message->tend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t0
  {
    size_t item_size = sizeof(ros_message->t0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_aug
  {
    size_t item_size = sizeof(ros_message->y_aug);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _L1AdaptiveMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: roll_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: u_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: p_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: adap
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_v_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_m_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_s_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: zend
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thetaend
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
  // member: tend
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
  // member: y_aug
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _L1AdaptiveMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_L1AdaptiveMsg = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "L1AdaptiveMsg",
  _L1AdaptiveMsg__cdr_serialize,
  _L1AdaptiveMsg__cdr_deserialize,
  _L1AdaptiveMsg__get_serialized_size,
  _L1AdaptiveMsg__max_serialized_size
};

static rosidl_message_type_support_t _L1AdaptiveMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_L1AdaptiveMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_auv_v1_sub_l1_bebot_cpp, msg, L1AdaptiveMsg)() {
  return &_L1AdaptiveMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
