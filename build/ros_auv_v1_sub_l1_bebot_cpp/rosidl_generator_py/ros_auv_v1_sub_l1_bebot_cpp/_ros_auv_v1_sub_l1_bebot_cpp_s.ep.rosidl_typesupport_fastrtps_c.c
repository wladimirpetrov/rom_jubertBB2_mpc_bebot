// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef ros_auv_v1_sub_l1_bebot_cpp__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef ros_auv_v1_sub_l1_bebot_cpp__module = {
  PyModuleDef_HEAD_INIT,
  "_ros_auv_v1_sub_l1_bebot_cpp_support",
  "_ros_auv_v1_sub_l1_bebot_cpp_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  ros_auv_v1_sub_l1_bebot_cpp__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/l1_adaptive_msg__functions.h"

static void * ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__create_ros_message(void)
{
  return ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__create();
}

static void ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__destroy_ros_message(void * raw_ros_message)
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg * ros_message = (ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg *)raw_ros_message;
  ros_auv_v1_sub_l1_bebot_cpp__msg__L1AdaptiveMsg__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, L1AdaptiveMsg);

int8_t
_register_msg_type__msg__l1_adaptive_msg(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__l1_adaptive_msg",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__l1_adaptive_msg",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__l1_adaptive_msg",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__l1_adaptive_msg__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__l1_adaptive_msg",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, L1AdaptiveMsg),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__l1_adaptive_msg",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__functions.h"

static void * ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__create_ros_message(void)
{
  return ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__create();
}

static void ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__destroy_ros_message(void * raw_ros_message)
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * ros_message = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters *)raw_ros_message;
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationParameters);

int8_t
_register_msg_type__msg__optimization_parameters(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__optimization_parameters",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__optimization_parameters",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__optimization_parameters",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__optimization_parameters",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationParameters),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__optimization_parameters",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_result__functions.h"

static void * ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__create_ros_message(void)
{
  return ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__create();
}

static void ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__destroy_ros_message(void * raw_ros_message)
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult * ros_message = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult *)raw_ros_message;
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationResult__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationResult);

int8_t
_register_msg_type__msg__optimization_result(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__optimization_result",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__optimization_result",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__optimization_result",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_result__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__optimization_result",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationResult),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__optimization_result",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__type_support.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_status__functions.h"

static void * ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__create_ros_message(void)
{
  return ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__create();
}

static void ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__destroy_ros_message(void * raw_ros_message)
{
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus * ros_message = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus *)raw_ros_message;
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationStatus);

int8_t
_register_msg_type__msg__optimization_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__optimization_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__optimization_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__optimization_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__optimization_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(ros_auv_v1_sub_l1_bebot_cpp, msg, OptimizationStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__optimization_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_ros_auv_v1_sub_l1_bebot_cpp_s__rosidl_typesupport_fastrtps_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&ros_auv_v1_sub_l1_bebot_cpp__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__l1_adaptive_msg(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__optimization_parameters(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__optimization_result(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__optimization_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
