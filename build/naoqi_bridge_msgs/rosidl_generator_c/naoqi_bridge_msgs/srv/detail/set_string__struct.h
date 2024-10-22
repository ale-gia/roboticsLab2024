// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetString in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__srv__SetString_Request
{
  rosidl_runtime_c__String data;
} naoqi_bridge_msgs__srv__SetString_Request;

// Struct for a sequence of naoqi_bridge_msgs__srv__SetString_Request.
typedef struct naoqi_bridge_msgs__srv__SetString_Request__Sequence
{
  naoqi_bridge_msgs__srv__SetString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__srv__SetString_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetString in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__srv__SetString_Response
{
  bool success;
} naoqi_bridge_msgs__srv__SetString_Response;

// Struct for a sequence of naoqi_bridge_msgs__srv__SetString_Response.
typedef struct naoqi_bridge_msgs__srv__SetString_Response__Sequence
{
  naoqi_bridge_msgs__srv__SetString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__srv__SetString_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__SET_STRING__STRUCT_H_
