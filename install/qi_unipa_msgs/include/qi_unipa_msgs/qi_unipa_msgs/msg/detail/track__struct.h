// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qi_unipa_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Track in the package qi_unipa_msgs.
typedef struct qi_unipa_msgs__msg__Track
{
  rosidl_runtime_c__String target_name;
  float distance;
} qi_unipa_msgs__msg__Track;

// Struct for a sequence of qi_unipa_msgs__msg__Track.
typedef struct qi_unipa_msgs__msg__Track__Sequence
{
  qi_unipa_msgs__msg__Track * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qi_unipa_msgs__msg__Track__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
