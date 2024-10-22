// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
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
#include "naoqi_bridge_msgs/msg/detail/memory_list__struct.h"
#include "naoqi_bridge_msgs/msg/detail/memory_list__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__functions.h"
#include "naoqi_bridge_msgs/msg/detail/memory_pair_int__functions.h"
#include "naoqi_bridge_msgs/msg/detail/memory_pair_string__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool naoqi_bridge_msgs__msg__memory_pair_string__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * naoqi_bridge_msgs__msg__memory_pair_string__convert_to_py(void * raw_ros_message);
bool naoqi_bridge_msgs__msg__memory_pair_int__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * naoqi_bridge_msgs__msg__memory_pair_int__convert_to_py(void * raw_ros_message);
bool naoqi_bridge_msgs__msg__memory_pair_float__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * naoqi_bridge_msgs__msg__memory_pair_float__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool naoqi_bridge_msgs__msg__memory_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("naoqi_bridge_msgs.msg._memory_list.MemoryList", full_classname_dest, 45) == 0);
  }
  naoqi_bridge_msgs__msg__MemoryList * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // strings
    PyObject * field = PyObject_GetAttrString(_pymsg, "strings");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'strings'");
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
    if (!naoqi_bridge_msgs__msg__MemoryPairString__Sequence__init(&(ros_message->strings), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create naoqi_bridge_msgs__msg__MemoryPairString__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    naoqi_bridge_msgs__msg__MemoryPairString * dest = ros_message->strings.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!naoqi_bridge_msgs__msg__memory_pair_string__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ints
    PyObject * field = PyObject_GetAttrString(_pymsg, "ints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ints'");
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
    if (!naoqi_bridge_msgs__msg__MemoryPairInt__Sequence__init(&(ros_message->ints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create naoqi_bridge_msgs__msg__MemoryPairInt__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    naoqi_bridge_msgs__msg__MemoryPairInt * dest = ros_message->ints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!naoqi_bridge_msgs__msg__memory_pair_int__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // floats
    PyObject * field = PyObject_GetAttrString(_pymsg, "floats");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'floats'");
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
    if (!naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence__init(&(ros_message->floats), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    naoqi_bridge_msgs__msg__MemoryPairFloat * dest = ros_message->floats.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!naoqi_bridge_msgs__msg__memory_pair_float__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * naoqi_bridge_msgs__msg__memory_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MemoryList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("naoqi_bridge_msgs.msg._memory_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MemoryList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  naoqi_bridge_msgs__msg__MemoryList * ros_message = (naoqi_bridge_msgs__msg__MemoryList *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strings
    PyObject * field = NULL;
    size_t size = ros_message->strings.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    naoqi_bridge_msgs__msg__MemoryPairString * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->strings.data[i]);
      PyObject * pyitem = naoqi_bridge_msgs__msg__memory_pair_string__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "strings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ints
    PyObject * field = NULL;
    size_t size = ros_message->ints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    naoqi_bridge_msgs__msg__MemoryPairInt * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ints.data[i]);
      PyObject * pyitem = naoqi_bridge_msgs__msg__memory_pair_int__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // floats
    PyObject * field = NULL;
    size_t size = ros_message->floats.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    naoqi_bridge_msgs__msg__MemoryPairFloat * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->floats.data[i]);
      PyObject * pyitem = naoqi_bridge_msgs__msg__memory_pair_float__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "floats", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
