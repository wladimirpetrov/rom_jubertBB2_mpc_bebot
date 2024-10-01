// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__FUNCTIONS_H_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_generator_c__visibility_control.h"

#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__struct.h"

/// Initialize msg/OptimizationParameters message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters
 * )) before or use
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * msg);

/// Finalize msg/OptimizationParameters message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * msg);

/// Create msg/OptimizationParameters message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__create();

/// Destroy msg/OptimizationParameters message.
/**
 * It calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * msg);

/// Check for msg/OptimizationParameters message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * rhs);

/// Copy a msg/OptimizationParameters message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * output);

/// Initialize array of msg/OptimizationParameters messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * array, size_t size);

/// Finalize array of msg/OptimizationParameters messages.
/**
 * It calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * array);

/// Create array of msg/OptimizationParameters messages.
/**
 * It allocates the memory for the array and calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__create(size_t size);

/// Destroy array of msg/OptimizationParameters messages.
/**
 * It calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * array);

/// Check for msg/OptimizationParameters message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * rhs);

/// Copy an array of msg/OptimizationParameters messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_PARAMETERS__FUNCTIONS_H_
