// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `a_flat`
// Member `b_flat`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * msg)
{
  if (!msg) {
    return false;
  }
  // n
  // tf
  // delta_v_max
  // delta_v_min
  // delta_s_max
  // delta_s_min
  // delta_m_max
  // delta_m_min
  // zmax
  // zmin
  // wmax
  // wmin
  // thetamax
  // thetamin
  // qmax
  // qmin
  // z0
  // w0
  // theta0
  // q0
  // delta_v0
  // delta_m0
  // delta_s0
  // zf
  // thetaf
  // a_flat
  if (!rosidl_runtime_c__double__Sequence__init(&msg->a_flat, 0)) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(msg);
    return false;
  }
  // b_flat
  if (!rosidl_runtime_c__double__Sequence__init(&msg->b_flat, 0)) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(msg);
    return false;
  }
  // t0
  // tend
  // psi0
  return true;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * msg)
{
  if (!msg) {
    return;
  }
  // n
  // tf
  // delta_v_max
  // delta_v_min
  // delta_s_max
  // delta_s_min
  // delta_m_max
  // delta_m_min
  // zmax
  // zmin
  // wmax
  // wmin
  // thetamax
  // thetamin
  // qmax
  // qmin
  // z0
  // w0
  // theta0
  // q0
  // delta_v0
  // delta_m0
  // delta_s0
  // zf
  // thetaf
  // a_flat
  rosidl_runtime_c__double__Sequence__fini(&msg->a_flat);
  // b_flat
  rosidl_runtime_c__double__Sequence__fini(&msg->b_flat);
  // t0
  // tend
  // psi0
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // n
  if (lhs->n != rhs->n) {
    return false;
  }
  // tf
  if (lhs->tf != rhs->tf) {
    return false;
  }
  // delta_v_max
  if (lhs->delta_v_max != rhs->delta_v_max) {
    return false;
  }
  // delta_v_min
  if (lhs->delta_v_min != rhs->delta_v_min) {
    return false;
  }
  // delta_s_max
  if (lhs->delta_s_max != rhs->delta_s_max) {
    return false;
  }
  // delta_s_min
  if (lhs->delta_s_min != rhs->delta_s_min) {
    return false;
  }
  // delta_m_max
  if (lhs->delta_m_max != rhs->delta_m_max) {
    return false;
  }
  // delta_m_min
  if (lhs->delta_m_min != rhs->delta_m_min) {
    return false;
  }
  // zmax
  if (lhs->zmax != rhs->zmax) {
    return false;
  }
  // zmin
  if (lhs->zmin != rhs->zmin) {
    return false;
  }
  // wmax
  if (lhs->wmax != rhs->wmax) {
    return false;
  }
  // wmin
  if (lhs->wmin != rhs->wmin) {
    return false;
  }
  // thetamax
  if (lhs->thetamax != rhs->thetamax) {
    return false;
  }
  // thetamin
  if (lhs->thetamin != rhs->thetamin) {
    return false;
  }
  // qmax
  if (lhs->qmax != rhs->qmax) {
    return false;
  }
  // qmin
  if (lhs->qmin != rhs->qmin) {
    return false;
  }
  // z0
  if (lhs->z0 != rhs->z0) {
    return false;
  }
  // w0
  if (lhs->w0 != rhs->w0) {
    return false;
  }
  // theta0
  if (lhs->theta0 != rhs->theta0) {
    return false;
  }
  // q0
  if (lhs->q0 != rhs->q0) {
    return false;
  }
  // delta_v0
  if (lhs->delta_v0 != rhs->delta_v0) {
    return false;
  }
  // delta_m0
  if (lhs->delta_m0 != rhs->delta_m0) {
    return false;
  }
  // delta_s0
  if (lhs->delta_s0 != rhs->delta_s0) {
    return false;
  }
  // zf
  if (lhs->zf != rhs->zf) {
    return false;
  }
  // thetaf
  if (lhs->thetaf != rhs->thetaf) {
    return false;
  }
  // a_flat
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->a_flat), &(rhs->a_flat)))
  {
    return false;
  }
  // b_flat
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->b_flat), &(rhs->b_flat)))
  {
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
  // psi0
  if (lhs->psi0 != rhs->psi0) {
    return false;
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // n
  output->n = input->n;
  // tf
  output->tf = input->tf;
  // delta_v_max
  output->delta_v_max = input->delta_v_max;
  // delta_v_min
  output->delta_v_min = input->delta_v_min;
  // delta_s_max
  output->delta_s_max = input->delta_s_max;
  // delta_s_min
  output->delta_s_min = input->delta_s_min;
  // delta_m_max
  output->delta_m_max = input->delta_m_max;
  // delta_m_min
  output->delta_m_min = input->delta_m_min;
  // zmax
  output->zmax = input->zmax;
  // zmin
  output->zmin = input->zmin;
  // wmax
  output->wmax = input->wmax;
  // wmin
  output->wmin = input->wmin;
  // thetamax
  output->thetamax = input->thetamax;
  // thetamin
  output->thetamin = input->thetamin;
  // qmax
  output->qmax = input->qmax;
  // qmin
  output->qmin = input->qmin;
  // z0
  output->z0 = input->z0;
  // w0
  output->w0 = input->w0;
  // theta0
  output->theta0 = input->theta0;
  // q0
  output->q0 = input->q0;
  // delta_v0
  output->delta_v0 = input->delta_v0;
  // delta_m0
  output->delta_m0 = input->delta_m0;
  // delta_s0
  output->delta_s0 = input->delta_s0;
  // zf
  output->zf = input->zf;
  // thetaf
  output->thetaf = input->thetaf;
  // a_flat
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->a_flat), &(output->a_flat)))
  {
    return false;
  }
  // b_flat
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->b_flat), &(output->b_flat)))
  {
    return false;
  }
  // t0
  output->t0 = input->t0;
  // tend
  output->tend = input->tend;
  // psi0
  output->psi0 = input->psi0;
  return true;
}

ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * msg = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters));
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__init(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * data = NULL;

  if (size) {
    data = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters *)allocator.zero_allocate(size, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(&data[i - 1]);
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
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * array)
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
      ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(&array->data[i]);
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

ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence *
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * array = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters);
    ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * data =
      (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__fini(&data[i]);
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
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
