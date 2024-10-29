// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/MemoryPairInt.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_INT__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_INT__STRUCT_H_

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

/// Struct defined in msg/MemoryPairInt in the package naoqi_bridge_msgs.
typedef struct naoqi_bridge_msgs__msg__MemoryPairInt
{
  rosidl_runtime_c__String memory_key;
  int32_t data;
} naoqi_bridge_msgs__msg__MemoryPairInt;

// Struct for a sequence of naoqi_bridge_msgs__msg__MemoryPairInt.
typedef struct naoqi_bridge_msgs__msg__MemoryPairInt__Sequence
{
  naoqi_bridge_msgs__msg__MemoryPairInt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__MemoryPairInt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_INT__STRUCT_H_
