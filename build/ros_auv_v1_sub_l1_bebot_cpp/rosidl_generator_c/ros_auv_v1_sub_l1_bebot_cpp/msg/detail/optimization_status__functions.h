// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__FUNCTIONS_H_
#define ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/rosidl_generator_c__visibility_control.h"

#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.h"

/// Initialize msg/OptimizationStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus
 * )) before or use
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * msg);

/// Finalize msg/OptimizationStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * msg);

/// Create msg/OptimizationStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__create();

/// Destroy msg/OptimizationStatus message.
/**
 * It calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * msg);

/// Check for msg/OptimizationStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * rhs);

/// Copy a msg/OptimizationStatus message.
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
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * output);

/// Initialize array of msg/OptimizationStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * array, size_t size);

/// Finalize array of msg/OptimizationStatus messages.
/**
 * It calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * array);

/// Create array of msg/OptimizationStatus messages.
/**
 * It allocates the memory for the array and calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__create(size_t size);

/// Destroy array of msg/OptimizationStatus messages.
/**
 * It calls
 * ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * array);

/// Check for msg/OptimizationStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_auv_v1_sub_l1_bebot_cpp
bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * rhs);

/// Copy an array of msg/OptimizationStatus messages.
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
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_AUV_V1_SUB_L1_BEBOT_CPP__MSG__DETAIL__OPTIMIZATION_STATUS__FUNCTIONS_H_
