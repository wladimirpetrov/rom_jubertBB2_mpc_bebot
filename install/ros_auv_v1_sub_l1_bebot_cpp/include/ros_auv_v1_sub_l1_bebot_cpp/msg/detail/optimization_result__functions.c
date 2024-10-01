// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationResult.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `solution_x`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * msg)
{
  if (!msg) {
    return false;
  }
  // solution_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->solution_x, 0)) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__fini(msg);
    return false;
  }
  // final_obj_value
  // t0
  // tend
  // tf
  // psi0
  return true;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * msg)
{
  if (!msg) {
    return;
  }
  // solution_x
  rosidl_runtime_c__double__Sequence__fini(&msg->solution_x);
  // final_obj_value
  // t0
  // tend
  // tf
  // psi0
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // solution_x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->solution_x), &(rhs->solution_x)))
  {
    return false;
  }
  // final_obj_value
  if (lhs->final_obj_value != rhs->final_obj_value) {
    return false;
  }
  // t0
  if (lhs->t0 != rhs->t0) {
    return false;
  }
  // tend
  if (lhs->tend != rhs->tend) {
    return false;
  }
  // tf
  if (lhs->tf != rhs->tf) {
    return false;
  }
  // psi0
  if (lhs->psi0 != rhs->psi0) {
    return false;
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * output)
{
  if (!input || !output) {
    return false;
  }
  // solution_x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->solution_x), &(output->solution_x)))
  {
    return false;
  }
  // final_obj_value
  output->final_obj_value = input->final_obj_value;
  // t0
  output->t0 = input->t0;
  // tend
  output->tend = input->tend;
  // tf
  output->tf = input->tf;
  // psi0
  output->psi0 = input->psi0;
  return true;
}

ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * msg = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult));
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * data = NULL;

  if (size) {
    data = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult *)allocator.zero_allocate(size, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * array = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult);
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * data =
      (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
