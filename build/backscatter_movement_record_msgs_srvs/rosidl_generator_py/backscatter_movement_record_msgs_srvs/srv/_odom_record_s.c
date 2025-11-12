// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
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
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.h"
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool backscatter_movement_record_msgs_srvs__srv__odom_record__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("backscatter_movement_record_msgs_srvs.srv._odom_record.OdomRecord_Request", full_classname_dest, 73) == 0);
  }
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * ros_message = _ros_message;
  {  // req
    PyObject * field = PyObject_GetAttrString(_pymsg, "req");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->req = (Py_True == field);
    Py_DECREF(field);
  }
  {  // expmt_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "expmt_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->expmt_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // backscatter_expmt_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "backscatter_expmt_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->backscatter_expmt_flag = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * backscatter_movement_record_msgs_srvs__srv__odom_record__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OdomRecord_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("backscatter_movement_record_msgs_srvs.srv._odom_record");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OdomRecord_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * ros_message = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request *)raw_ros_message;
  {  // req
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->req ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // expmt_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->expmt_name.data,
      strlen(ros_message->expmt_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "expmt_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // backscatter_expmt_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->backscatter_expmt_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backscatter_expmt_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool backscatter_movement_record_msgs_srvs__srv__odom_record__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("backscatter_movement_record_msgs_srvs.srv._odom_record.OdomRecord_Response", full_classname_dest, 74) == 0);
  }
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * ros_message = _ros_message;
  {  // resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "resp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->resp = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * backscatter_movement_record_msgs_srvs__srv__odom_record__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OdomRecord_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("backscatter_movement_record_msgs_srvs.srv._odom_record");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OdomRecord_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * ros_message = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response *)raw_ros_message;
  {  // resp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->resp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
