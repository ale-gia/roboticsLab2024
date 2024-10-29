// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/MemoryPairFloat.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_FLOAT__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_FLOAT__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MemoryPairFloat in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__MemoryPairFloat
{
  rosidl_runtime_c__String memory_key;
  float data;
} naoqi_bridge_msgs__msg__MemoryPairFloat;

// Struct for a sequence of naoqi_bridge_msgs__msg__MemoryPairFloat.
typedef struct naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence
{
  naoqi_bridge_msgs__msg__MemoryPairFloat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_FLOAT__STRUCT_H_
