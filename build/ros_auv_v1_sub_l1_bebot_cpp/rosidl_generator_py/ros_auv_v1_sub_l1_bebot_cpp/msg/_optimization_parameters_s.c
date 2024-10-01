// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_auv_v1_sub_l1_bebot_cpp:msg/OptimizationParameters.idl
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
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__struct.h"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/detail/optimization_parameters__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("ros_auv_v1_sub_l1_bebot_cpp.msg._optimization_parameters.OptimizationParameters", full_classname_dest, 79) == 0);
  }
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * ros_message = _ros_message;
  {  // n
    PyObject * field = PyObject_GetAttrString(_pymsg, "n");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n = (int32_t)PyLong_AsLong(field);
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
  {  // delta_v_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_v_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_v_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_v_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_v_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_v_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_s_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_s_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_s_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_s_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_s_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_s_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_m_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_m_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_m_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_m_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_m_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_m_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // zmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "zmax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zmax = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // zmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "zmin");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zmin = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "wmax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wmax = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "wmin");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wmin = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thetamax
    PyObject * field = PyObject_GetAttrString(_pymsg, "thetamax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thetamax = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thetamin
    PyObject * field = PyObject_GetAttrString(_pymsg, "thetamin");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thetamin = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "qmax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qmax = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // qmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "qmin");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->qmin = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z0
    PyObject * field = PyObject_GetAttrString(_pymsg, "z0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w0
    PyObject * field = PyObject_GetAttrString(_pymsg, "w0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta0
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q0
    PyObject * field = PyObject_GetAttrString(_pymsg, "q0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->q0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_v0
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_v0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_v0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_m0
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_m0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_m0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_s0
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_s0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_s0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // zf
    PyObject * field = PyObject_GetAttrString(_pymsg, "zf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thetaf
    PyObject * field = PyObject_GetAttrString(_pymsg, "thetaf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thetaf = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a_flat
    PyObject * field = PyObject_GetAttrString(_pymsg, "a_flat");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->a_flat), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->a_flat.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'a_flat'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->a_flat), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->a_flat.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // b_flat
    PyObject * field = PyObject_GetAttrString(_pymsg, "b_flat");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->b_flat), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->b_flat.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'b_flat'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->b_flat), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->b_flat.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
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
  {  // tend
    PyObject * field = PyObject_GetAttrString(_pymsg, "tend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tend = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // psi0
    PyObject * field = PyObject_GetAttrString(_pymsg, "psi0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->psi0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_auv_v1_sub_l1_bebot_cpp__msg__optimization_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OptimizationParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_auv_v1_sub_l1_bebot_cpp.msg._optimization_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OptimizationParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters * ros_message = (ros_auv_v1_sub_l1_bebot_cpp__msg__OptimizationParameters *)raw_ros_message;
  {  // n
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n", field);
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
  {  // delta_v_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_v_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_v_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_v_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_v_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_v_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_s_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_s_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_s_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_s_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_s_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_s_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_m_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_m_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_m_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_m_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_m_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_m_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zmax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zmin
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wmax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wmin
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thetamax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thetamax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thetamax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thetamin
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thetamin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thetamin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qmax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qmin
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->qmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->q0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "q0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_v0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_v0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_v0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_m0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_m0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_m0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_s0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_s0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_s0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thetaf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thetaf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thetaf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a_flat
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "a_flat");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->a_flat.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->a_flat.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->a_flat.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // b_flat
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "b_flat");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->b_flat.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->b_flat.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->b_flat.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
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
  {  // psi0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->psi0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psi0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
