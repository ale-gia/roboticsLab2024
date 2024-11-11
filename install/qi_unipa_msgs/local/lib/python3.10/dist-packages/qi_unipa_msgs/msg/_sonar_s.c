// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from qi_unipa_msgs:msg/Sonar.idl
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
#include "qi_unipa_msgs/msg/detail/sonar__struct.h"
#include "qi_unipa_msgs/msg/detail/sonar__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool qi_unipa_msgs__msg__sonar__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("qi_unipa_msgs.msg._sonar.Sonar", full_classname_dest, 30) == 0);
  }
  qi_unipa_msgs__msg__Sonar * ros_message = _ros_message;
  {  // front_sonar
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_sonar");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_sonar = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // back_sonar
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_sonar");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->back_sonar = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * qi_unipa_msgs__msg__sonar__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Sonar */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("qi_unipa_msgs.msg._sonar");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Sonar");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  qi_unipa_msgs__msg__Sonar * ros_message = (qi_unipa_msgs__msg__Sonar *)raw_ros_message;
  {  // front_sonar
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_sonar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_sonar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_sonar
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->back_sonar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_sonar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
