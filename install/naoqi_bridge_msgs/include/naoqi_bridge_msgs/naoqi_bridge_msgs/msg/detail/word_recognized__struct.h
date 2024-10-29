// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/WordRecognized.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'words'
#include "rosidl_runtime_c/string.h"
// Member 'confidence_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/WordRecognized in the package naoqi_bridge_msgs.
/**
  * Message emitted by Nao speech recognition.
  * It contains the list of words recognized and confidence values
  * Both arrays are of the same length
 */
typedef struct naoqi_bridge_msgs__msg__WordRecognized
{
  rosidl_runtime_c__String__Sequence words;
  rosidl_runtime_c__float__Sequence confidence_values;
} naoqi_bridge_msgs__msg__WordRecognized;

// Struct for a sequence of naoqi_bridge_msgs__msg__WordRecognized.
typedef struct naoqi_bridge_msgs__msg__WordRecognized__Sequence
{
  naoqi_bridge_msgs__msg__WordRecognized * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__WordRecognized__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__STRUCT_H_
