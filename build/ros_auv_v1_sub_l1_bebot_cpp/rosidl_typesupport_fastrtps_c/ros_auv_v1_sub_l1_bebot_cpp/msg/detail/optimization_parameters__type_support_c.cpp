// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // a_flat, b_flat
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // a_flat, b_flat

// forward declare type support functions


using _OptimizationParameters__ros_msg_type = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters;

static bool _OptimizationParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OptimizationParameters__ros_msg_type * ros_message = static_cast<const _OptimizationParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: n
  {
    cdr << ros_message->n;
  }

  // Field name: tf
  {
    cdr << ros_message->tf;
  }

  // Field name: delta_v_max
  {
    cdr << ros_message->delta_v_max;
  }

  // Field name: delta_v_min
  {
    cdr << ros_message->delta_v_min;
  }

  // Field name: delta_s_max
  {
    cdr << ros_message->delta_s_max;
  }

  // Field name: delta_s_min
  {
    cdr << ros_message->delta_s_min;
  }

  // Field name: delta_m_max
  {
    cdr << ros_message->delta_m_max;
  }

  // Field name: delta_m_min
  {
    cdr << ros_message->delta_m_min;
  }

  // Field name: zmax
  {
    cdr << ros_message->zmax;
  }

  // Field name: zmin
  {
    cdr << ros_message->zmin;
  }

  // Field name: wmax
  {
    cdr << ros_message->wmax;
  }

  // Field name: wmin
  {
    cdr << ros_message->wmin;
  }

  // Field name: thetamax
  {
    cdr << ros_message->thetamax;
  }

  // Field name: thetamin
  {
    cdr << ros_message->thetamin;
  }

  // Field name: qmax
  {
    cdr << ros_message->qmax;
  }

  // Field name: qmin
  {
    cdr << ros_message->qmin;
  }

  // Field name: z0
  {
    cdr << ros_message->z0;
  }

  // Field name: w0
  {
    cdr << ros_message->w0;
  }

  // Field name: theta0
  {
    cdr << ros_message->theta0;
  }

  // Field name: q0
  {
    cdr << ros_message->q0;
  }

  // Field name: delta_v0
  {
    cdr << ros_message->delta_v0;
  }

  // Field name: delta_m0
  {
    cdr << ros_message->delta_m0;
  }

  // Field name: delta_s0
  {
    cdr << ros_message->delta_s0;
  }

  // Field name: zf
  {
    cdr << ros_message->zf;
  }

  // Field name: thetaf
  {
    cdr << ros_message->thetaf;
  }

  // Field name: a_flat
  {
    size_t size = ros_message->a_flat.size;
    auto array_ptr = ros_message->a_flat.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: b_flat
  {
    size_t size = ros_message->b_flat.size;
    auto array_ptr = ros_message->b_flat.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: t0
  {
    cdr << ros_message->t0;
  }

  // Field name: tend
  {
    cdr << ros_message->tend;
  }

  // Field name: psi0
  {
    cdr << ros_message->psi0;
  }

  return true;
}

static bool _OptimizationParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OptimizationParameters__ros_msg_type * ros_message = static_cast<_OptimizationParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: n
  {
    cdr >> ros_message->n;
  }

  // Field name: tf
  {
    cdr >> ros_message->tf;
  }

  // Field name: delta_v_max
  {
    cdr >> ros_message->delta_v_max;
  }

  // Field name: delta_v_min
  {
    cdr >> ros_message->delta_v_min;
  }

  // Field name: delta_s_max
  {
    cdr >> ros_message->delta_s_max;
  }

  // Field name: delta_s_min
  {
    cdr >> ros_message->delta_s_min;
  }

  // Field name: delta_m_max
  {
    cdr >> ros_message->delta_m_max;
  }

  // Field name: delta_m_min
  {
    cdr >> ros_message->delta_m_min;
  }

  // Field name: zmax
  {
    cdr >> ros_message->zmax;
  }

  // Field name: zmin
  {
    cdr >> ros_message->zmin;
  }

  // Field name: wmax
  {
    cdr >> ros_message->wmax;
  }

  // Field name: wmin
  {
    cdr >> ros_message->wmin;
  }

  // Field name: thetamax
  {
    cdr >> ros_message->thetamax;
  }

  // Field name: thetamin
  {
    cdr >> ros_message->thetamin;
  }

  // Field name: qmax
  {
    cdr >> ros_message->qmax;
  }

  // Field name: qmin
  {
    cdr >> ros_message->qmin;
  }

  // Field name: z0
  {
    cdr >> ros_message->z0;
  }

  // Field name: w0
  {
    cdr >> ros_message->w0;
  }

  // Field name: theta0
  {
    cdr >> ros_message->theta0;
  }

  // Field name: q0
  {
    cdr >> ros_message->q0;
  }

  // Field name: delta_v0
  {
    cdr >> ros_message->delta_v0;
  }

  // Field name: delta_m0
  {
    cdr >> ros_message->delta_m0;
  }

  // Field name: delta_s0
  {
    cdr >> ros_message->delta_s0;
  }

  // Field name: zf
  {
    cdr >> ros_message->zf;
  }

  // Field name: thetaf
  {
    cdr >> ros_message->thetaf;
  }

  // Field name: a_flat
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->a_flat.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->a_flat);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->a_flat, size)) {
      return "failed to create array for field 'a_flat'";
    }
    auto array_ptr = ros_message->a_flat.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: b_flat
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->b_flat.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->b_flat);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->b_flat, size)) {
      return "failed to create array for field 'b_flat'";
    }
    auto array_ptr = ros_message->b_flat.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: t0
  {
    cdr >> ros_message->t0;
  }

  // Field name: tend
  {
    cdr >> ros_message->tend;
  }

  // Field name: psi0
  {
    cdr >> ros_message->psi0;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OptimizationParameters__ros_msg_type * ros_message = static_cast<const _OptimizationParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name n
  {
    size_t item_size = sizeof(ros_message->n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tf
  {
    size_t item_size = sizeof(ros_message->tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_v_max
  {
    size_t item_size = sizeof(ros_message->delta_v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_v_min
  {
    size_t item_size = sizeof(ros_message->delta_v_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_s_max
  {
    size_t item_size = sizeof(ros_message->delta_s_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_s_min
  {
    size_t item_size = sizeof(ros_message->delta_s_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_m_max
  {
    size_t item_size = sizeof(ros_message->delta_m_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_m_min
  {
    size_t item_size = sizeof(ros_message->delta_m_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zmax
  {
    size_t item_size = sizeof(ros_message->zmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zmin
  {
    size_t item_size = sizeof(ros_message->zmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wmax
  {
    size_t item_size = sizeof(ros_message->wmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wmin
  {
    size_t item_size = sizeof(ros_message->wmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thetamax
  {
    size_t item_size = sizeof(ros_message->thetamax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thetamin
  {
    size_t item_size = sizeof(ros_message->thetamin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qmax
  {
    size_t item_size = sizeof(ros_message->qmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qmin
  {
    size_t item_size = sizeof(ros_message->qmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z0
  {
    size_t item_size = sizeof(ros_message->z0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w0
  {
    size_t item_size = sizeof(ros_message->w0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta0
  {
    size_t item_size = sizeof(ros_message->theta0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q0
  {
    size_t item_size = sizeof(ros_message->q0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_v0
  {
    size_t item_size = sizeof(ros_message->delta_v0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_m0
  {
    size_t item_size = sizeof(ros_message->delta_m0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_s0
  {
    size_t item_size = sizeof(ros_message->delta_s0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zf
  {
    size_t item_size = sizeof(ros_message->zf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thetaf
  {
    size_t item_size = sizeof(ros_message->thetaf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a_flat
  {
    size_t array_size = ros_message->a_flat.size;
    auto array_ptr = ros_message->a_flat.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_flat
  {
    size_t array_size = ros_message->b_flat.size;
    auto array_ptr = ros_message->b_flat.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
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
  // field.name psi0
  {
    size_t item_size = sizeof(ros_message->psi0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OptimizationParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
size_t max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_v_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_v_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_s_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_s_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_m_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_m_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: zmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: zmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thetamax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thetamin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: qmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: qmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: w0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_v0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_m0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_s0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: zf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thetaf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a_flat
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b_flat
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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
  // member: psi0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _OptimizationParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OptimizationParameters = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "OptimizationParameters",
  _OptimizationParameters__cdr_serialize,
  _OptimizationParameters__cdr_deserialize,
  _OptimizationParameters__get_serialized_size,
  _OptimizationParameters__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OptimizationParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationParameters)() {
  return &_OptimizationParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
