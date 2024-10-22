// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/MemoryPairString.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_STRING__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'memory_key'
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MemoryPairString in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__MemoryPairString
{
  rosidl_runtime_c__String memory_key;
  rosidl_runtime_c__String data;
} naoqi_bridge_msgs__msg__MemoryPairString;

// Struct for a sequence of naoqi_bridge_msgs__msg__MemoryPairString.
typedef struct naoqi_bridge_msgs__msg__MemoryPairString__Sequence
{
  naoqi_bridge_msgs__msg__MemoryPairString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__MemoryPairString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_STRING__STRUCT_H_
