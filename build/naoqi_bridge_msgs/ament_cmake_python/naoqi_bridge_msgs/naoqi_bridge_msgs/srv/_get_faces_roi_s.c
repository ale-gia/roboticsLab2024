// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from naoqi_bridge_msgs:srv/GetFacesROI.idl
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
#include "naoqi_bridge_msgs/srv/detail/get_faces_roi__struct.h"
#include "naoqi_bridge_msgs/srv/detail/get_faces_roi__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool naoqi_bridge_msgs__srv__get_faces_roi__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("naoqi_bridge_msgs.srv._get_faces_roi.GetFacesROI_Request", full_classname_dest, 56) == 0);
  }
  naoqi_bridge_msgs__srv__GetFacesROI_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * naoqi_bridge_msgs__srv__get_faces_roi__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetFacesROI_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("naoqi_bridge_msgs.srv._get_faces_roi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetFacesROI_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

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
// #include "naoqi_bridge_msgs/srv/detail/get_faces_roi__struct.h"
// already included above
// #include "naoqi_bridge_msgs/srv/detail/get_faces_roi__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "naoqi_bridge_msgs/msg/detail/face_roi__functions.h"
// end nested array functions include
bool naoqi_bridge_msgs__msg__face_roi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * naoqi_bridge_msgs__msg__face_roi__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool naoqi_bridge_msgs__srv__get_faces_roi__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("naoqi_bridge_msgs.srv._get_faces_roi.GetFacesROI_Response", full_classname_dest, 57) == 0);
  }
  naoqi_bridge_msgs__srv__GetFacesROI_Response * ros_message = _ros_message;
  {  // faces
    PyObject * field = PyObject_GetAttrString(_pymsg, "faces");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'faces'");
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
    if (!naoqi_bridge_msgs__msg__FaceROI__Sequence__init(&(ros_message->faces), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create naoqi_bridge_msgs__msg__FaceROI__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    naoqi_bridge_msgs__msg__FaceROI * dest = ros_message->faces.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!naoqi_bridge_msgs__msg__face_roi__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * naoqi_bridge_msgs__srv__get_faces_roi__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetFacesROI_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("naoqi_bridge_msgs.srv._get_faces_roi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetFacesROI_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  naoqi_bridge_msgs__srv__GetFacesROI_Response * ros_message = (naoqi_bridge_msgs__srv__GetFacesROI_Response *)raw_ros_message;
  {  // faces
    PyObject * field = NULL;
    size_t size = ros_message->faces.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    naoqi_bridge_msgs__msg__FaceROI * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->faces.data[i]);
      PyObject * pyitem = naoqi_bridge_msgs__msg__face_roi__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "faces", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
