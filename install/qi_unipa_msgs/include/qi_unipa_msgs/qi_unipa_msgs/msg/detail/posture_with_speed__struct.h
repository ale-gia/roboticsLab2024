// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qi_unipa_msgs:msg/PostureWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__STRUCT_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'posture_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PostureWithSpeed in the package qi_unipa_msgs.
typedef struct qi_unipa_msgs__msg__PostureWithSpeed
{
  rosidl_runtime_c__String posture_name;
  float speed;
} qi_unipa_msgs__msg__PostureWithSpeed;

// Struct for a sequence of qi_unipa_msgs__msg__PostureWithSpeed.
typedef struct qi_unipa_msgs__msg__PostureWithSpeed__Sequence
{
  qi_unipa_msgs__msg__PostureWithSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qi_unipa_msgs__msg__PostureWithSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__STRUCT_H_
