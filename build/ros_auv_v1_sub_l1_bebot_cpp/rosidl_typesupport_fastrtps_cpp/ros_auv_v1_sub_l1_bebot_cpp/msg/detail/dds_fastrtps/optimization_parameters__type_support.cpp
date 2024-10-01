// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__struct.hpp"

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
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: n
  cdr << ros_message.n;
  // Member: tf
  cdr << ros_message.tf;
  // Member: delta_v_max
  cdr << ros_message.delta_v_max;
  // Member: delta_v_min
  cdr << ros_message.delta_v_min;
  // Member: delta_s_max
  cdr << ros_message.delta_s_max;
  // Member: delta_s_min
  cdr << ros_message.delta_s_min;
  // Member: delta_m_max
  cdr << ros_message.delta_m_max;
  // Member: delta_m_min
  cdr << ros_message.delta_m_min;
  // Member: zmax
  cdr << ros_message.zmax;
  // Member: zmin
  cdr << ros_message.zmin;
  // Member: wmax
  cdr << ros_message.wmax;
  // Member: wmin
  cdr << ros_message.wmin;
  // Member: thetamax
  cdr << ros_message.thetamax;
  // Member: thetamin
  cdr << ros_message.thetamin;
  // Member: qmax
  cdr << ros_message.qmax;
  // Member: qmin
  cdr << ros_message.qmin;
  // Member: z0
  cdr << ros_message.z0;
  // Member: w0
  cdr << ros_message.w0;
  // Member: theta0
  cdr << ros_message.theta0;
  // Member: q0
  cdr << ros_message.q0;
  // Member: delta_v0
  cdr << ros_message.delta_v0;
  // Member: delta_m0
  cdr << ros_message.delta_m0;
  // Member: delta_s0
  cdr << ros_message.delta_s0;
  // Member: zf
  cdr << ros_message.zf;
  // Member: thetaf
  cdr << ros_message.thetaf;
  // Member: a_flat
  {
    cdr << ros_message.a_flat;
  }
  // Member: b_flat
  {
    cdr << ros_message.b_flat;
  }
  // Member: t0
  cdr << ros_message.t0;
  // Member: tend
  cdr << ros_message.tend;
  // Member: psi0
  cdr << ros_message.psi0;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & ros_message)
{
  // Member: n
  cdr >> ros_message.n;

  // Member: tf
  cdr >> ros_message.tf;

  // Member: delta_v_max
  cdr >> ros_message.delta_v_max;

  // Member: delta_v_min
  cdr >> ros_message.delta_v_min;

  // Member: delta_s_max
  cdr >> ros_message.delta_s_max;

  // Member: delta_s_min
  cdr >> ros_message.delta_s_min;

  // Member: delta_m_max
  cdr >> ros_message.delta_m_max;

  // Member: delta_m_min
  cdr >> ros_message.delta_m_min;

  // Member: zmax
  cdr >> ros_message.zmax;

  // Member: zmin
  cdr >> ros_message.zmin;

  // Member: wmax
  cdr >> ros_message.wmax;

  // Member: wmin
  cdr >> ros_message.wmin;

  // Member: thetamax
  cdr >> ros_message.thetamax;

  // Member: thetamin
  cdr >> ros_message.thetamin;

  // Member: qmax
  cdr >> ros_message.qmax;

  // Member: qmin
  cdr >> ros_message.qmin;

  // Member: z0
  cdr >> ros_message.z0;

  // Member: w0
  cdr >> ros_message.w0;

  // Member: theta0
  cdr >> ros_message.theta0;

  // Member: q0
  cdr >> ros_message.q0;

  // Member: delta_v0
  cdr >> ros_message.delta_v0;

  // Member: delta_m0
  cdr >> ros_message.delta_m0;

  // Member: delta_s0
  cdr >> ros_message.delta_s0;

  // Member: zf
  cdr >> ros_message.zf;

  // Member: thetaf
  cdr >> ros_message.thetaf;

  // Member: a_flat
  {
    cdr >> ros_message.a_flat;
  }

  // Member: b_flat
  {
    cdr >> ros_message.b_flat;
  }

  // Member: t0
  cdr >> ros_message.t0;

  // Member: tend
  cdr >> ros_message.tend;

  // Member: psi0
  cdr >> ros_message.psi0;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
get_serialized_size(
  const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: n
  {
    size_t item_size = sizeof(ros_message.n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tf
  {
    size_t item_size = sizeof(ros_message.tf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_v_max
  {
    size_t item_size = sizeof(ros_message.delta_v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_v_min
  {
    size_t item_size = sizeof(ros_message.delta_v_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_s_max
  {
    size_t item_size = sizeof(ros_message.delta_s_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_s_min
  {
    size_t item_size = sizeof(ros_message.delta_s_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_m_max
  {
    size_t item_size = sizeof(ros_message.delta_m_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_m_min
  {
    size_t item_size = sizeof(ros_message.delta_m_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zmax
  {
    size_t item_size = sizeof(ros_message.zmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zmin
  {
    size_t item_size = sizeof(ros_message.zmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wmax
  {
    size_t item_size = sizeof(ros_message.wmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wmin
  {
    size_t item_size = sizeof(ros_message.wmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thetamax
  {
    size_t item_size = sizeof(ros_message.thetamax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thetamin
  {
    size_t item_size = sizeof(ros_message.thetamin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qmax
  {
    size_t item_size = sizeof(ros_message.qmax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: qmin
  {
    size_t item_size = sizeof(ros_message.qmin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z0
  {
    size_t item_size = sizeof(ros_message.z0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w0
  {
    size_t item_size = sizeof(ros_message.w0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta0
  {
    size_t item_size = sizeof(ros_message.theta0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q0
  {
    size_t item_size = sizeof(ros_message.q0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_v0
  {
    size_t item_size = sizeof(ros_message.delta_v0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_m0
  {
    size_t item_size = sizeof(ros_message.delta_m0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_s0
  {
    size_t item_size = sizeof(ros_message.delta_s0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zf
  {
    size_t item_size = sizeof(ros_message.zf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thetaf
  {
    size_t item_size = sizeof(ros_message.thetaf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a_flat
  {
    size_t array_size = ros_message.a_flat.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.a_flat[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_flat
  {
    size_t array_size = ros_message.b_flat.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.b_flat[0]);
    current_alignment += array_size * item_size +
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
max_serialized_size_OptimizationParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_v_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_v_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_s_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_s_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_m_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_m_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thetamax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thetamin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: qmax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: qmin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: w0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: q0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_v0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_m0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_s0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: thetaf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a_flat
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: b_flat
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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

  // Member: psi0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _OptimizationParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OptimizationParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OptimizationParameters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OptimizationParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OptimizationParameters(full_bounded, 0);
}

static message_type_support_callbacks_t _OptimizationParameters__callbacks = {
  "ros_auv_v1_sub_l1_bebot_cpp::msg",
  "OptimizationParameters",
  _OptimizationParameters__cdr_serialize,
  _OptimizationParameters__cdr_deserialize,
  _OptimizationParameters__get_serialized_size,
  _OptimizationParameters__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationParameters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OptimizationParameters__callbacks,
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
get_message_type_support_handle<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters>()
{
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_OptimizationParameters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationParameters)() {
  return &ros_auv_v1_sub_l1_bebot_cpp::msg::typesupport_fastrtps_cpp::_OptimizationParameters__handle;
}

#ifdef __cplusplus
}
#endif
