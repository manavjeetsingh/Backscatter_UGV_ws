// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
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
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.h"
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__odometry__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__odometry__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool backscatter_movement_record_msgs_srvs__msg__odom_with_expmt_flag__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
    assert(strncmp("backscatter_movement_record_msgs_srvs.msg._odom_with_expmt_flag.OdomWithExpmtFlag", full_classname_dest, 81) == 0);
  }
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * ros_message = _ros_message;
  {  // odom
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__odometry__convert_from_py(field, &ros_message->odom)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // expmt_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "expmt_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->expmt_flag = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * backscatter_movement_record_msgs_srvs__msg__odom_with_expmt_flag__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OdomWithExpmtFlag */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("backscatter_movement_record_msgs_srvs.msg._odom_with_expmt_flag");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OdomWithExpmtFlag");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * ros_message = (backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag *)raw_ros_message;
  {  // odom
    PyObject * field = NULL;
    field = nav_msgs__msg__odometry__convert_to_py(&ros_message->odom);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // expmt_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->expmt_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "expmt_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
