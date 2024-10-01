// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationStatus.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // ready
  return true;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * msg)
{
  if (!msg) {
    return;
  }
  // ready
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ready
  if (lhs->ready != rhs->ready) {
    return false;
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // ready
  output->ready = input->ready;
  return true;
}

ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * msg = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus));
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * data = NULL;

  if (size) {
    data = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus *)allocator.zero_allocate(size, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini(&data[i - 1]);
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
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * array)
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
      ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini(&array->data[i]);
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

ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * array = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus);
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * data =
      (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__fini(&data[i]);
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
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
