// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/L1AdaptiveMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros_auv_v1_sub_l1_bebot_cpp.msg._l1_adaptive_msg.L1AdaptiveMsg", full_classname_dest, 62) == 0);
  }
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * ros_message = _ros_message;
  {  // x_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // u_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "q_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "r_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // adap
    PyObject * field = PyObject_GetAttrString(_pymsg, "adap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->adap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_v_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_v_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_v_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_m_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_m_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_m_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_s_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_s_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_s_act = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // zend
    PyObject * field = PyObject_GetAttrString(_pymsg, "zend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zend = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thetaend
    PyObject * field = PyObject_GetAttrString(_pymsg, "thetaend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thetaend = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tf
    PyObject * field = PyObject_GetAttrString(_pymsg, "tf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tend
    PyObject * field = PyObject_GetAttrString(_pymsg, "tend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tend = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t0
    PyObject * field = PyObject_GetAttrString(_pymsg, "t0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_aug
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_aug");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_aug = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of L1AdaptiveMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_auv_v1_sub_l1_bebot_cpp.msg._l1_adaptive_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "L1AdaptiveMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * ros_message = (ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg *)raw_ros_message;
  {  // x_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->adap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_v_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_v_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_v_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_m_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_m_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_m_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_s_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_s_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_s_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zend
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zend);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thetaend
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thetaend);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thetaend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tend
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tend);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_aug
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_aug);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_aug", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
