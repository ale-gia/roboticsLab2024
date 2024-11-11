// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qi_unipa_msgs:msg/Sonar.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__SONAR__STRUCT_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__SONAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Sonar in the package qi_unipa_msgs.
typedef struct qi_unipa_msgs__msg__Sonar
{
  float front_sonar;
  float back_sonar;
} qi_unipa_msgs__msg__Sonar;

// Struct for a sequence of qi_unipa_msgs__msg__Sonar.
typedef struct qi_unipa_msgs__msg__Sonar__Sequence
{
  qi_unipa_msgs__msg__Sonar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qi_unipa_msgs__msg__Sonar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__SONAR__STRUCT_H_
