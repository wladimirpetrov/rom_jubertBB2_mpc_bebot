// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
// generated code does not contain a copyright notice
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__init(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * msg)
{
  if (!msg) {
    return false;
  }
  // x_act
  // y_act
  // z_act
  // roll_act
  // pitch_act
  // yaw_act
  // u_act
  // v_act
  // w_act
  // p_act
  // q_act
  // r_act
  // adap
  // delta_v_act
  // delta_m_act
  // delta_s_act
  // zend
  // thetaend
  // tf
  // tend
  // t0
  // y_aug
  return true;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * msg)
{
  if (!msg) {
    return;
  }
  // x_act
  // y_act
  // z_act
  // roll_act
  // pitch_act
  // yaw_act
  // u_act
  // v_act
  // w_act
  // p_act
  // q_act
  // r_act
  // adap
  // delta_v_act
  // delta_m_act
  // delta_s_act
  // zend
  // thetaend
  // tf
  // tend
  // t0
  // y_aug
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_act
  if (lhs->x_act != rhs->x_act) {
    return false;
  }
  // y_act
  if (lhs->y_act != rhs->y_act) {
    return false;
  }
  // z_act
  if (lhs->z_act != rhs->z_act) {
    return false;
  }
  // roll_act
  if (lhs->roll_act != rhs->roll_act) {
    return false;
  }
  // pitch_act
  if (lhs->pitch_act != rhs->pitch_act) {
    return false;
  }
  // yaw_act
  if (lhs->yaw_act != rhs->yaw_act) {
    return false;
  }
  // u_act
  if (lhs->u_act != rhs->u_act) {
    return false;
  }
  // v_act
  if (lhs->v_act != rhs->v_act) {
    return false;
  }
  // w_act
  if (lhs->w_act != rhs->w_act) {
    return false;
  }
  // p_act
  if (lhs->p_act != rhs->p_act) {
    return false;
  }
  // q_act
  if (lhs->q_act != rhs->q_act) {
    return false;
  }
  // r_act
  if (lhs->r_act != rhs->r_act) {
    return false;
  }
  // adap
  if (lhs->adap != rhs->adap) {
    return false;
  }
  // delta_v_act
  if (lhs->delta_v_act != rhs->delta_v_act) {
    return false;
  }
  // delta_m_act
  if (lhs->delta_m_act != rhs->delta_m_act) {
    return false;
  }
  // delta_s_act
  if (lhs->delta_s_act != rhs->delta_s_act) {
    return false;
  }
  // zend
  if (lhs->zend != rhs->zend) {
    return false;
  }
  // thetaend
  if (lhs->thetaend != rhs->thetaend) {
    return false;
  }
  // tf
  if (lhs->tf != rhs->tf) {
    return false;
  }
  // tend
  if (lhs->tend != rhs->tend) {
    return false;
  }
  // t0
  if (lhs->t0 != rhs->t0) {
    return false;
  }
  // y_aug
  if (lhs->y_aug != rhs->y_aug) {
    return false;
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // x_act
  output->x_act = input->x_act;
  // y_act
  output->y_act = input->y_act;
  // z_act
  output->z_act = input->z_act;
  // roll_act
  output->roll_act = input->roll_act;
  // pitch_act
  output->pitch_act = input->pitch_act;
  // yaw_act
  output->yaw_act = input->yaw_act;
  // u_act
  output->u_act = input->u_act;
  // v_act
  output->v_act = input->v_act;
  // w_act
  output->w_act = input->w_act;
  // p_act
  output->p_act = input->p_act;
  // q_act
  output->q_act = input->q_act;
  // r_act
  output->r_act = input->r_act;
  // adap
  output->adap = input->adap;
  // delta_v_act
  output->delta_v_act = input->delta_v_act;
  // delta_m_act
  output->delta_m_act = input->delta_m_act;
  // delta_s_act
  output->delta_s_act = input->delta_s_act;
  // zend
  output->zend = input->zend;
  // thetaend
  output->thetaend = input->thetaend;
  // tf
  output->tf = input->tf;
  // tend
  output->tend = input->tend;
  // t0
  output->t0 = input->t0;
  // y_aug
  output->y_aug = input->y_aug;
  return true;
}

ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg *
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * msg = (ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg));
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__init(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * data = NULL;

  if (size) {
    data = (ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg *)allocator.zero_allocate(size, sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__fini(&data[i - 1]);
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
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__fini(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * array)
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
      ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__fini(&array->data[i]);
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

ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence *
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * array = (ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence *)allocator.allocate(sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__destroy(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__are_equal(const ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * lhs, const ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence__copy(
  const ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * input,
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg);
    ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * data =
      (ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__fini(&data[i]);
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
    if (!ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
