// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/FadeRGB.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led_name'
#include "rosidl_runtime_c/string.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'fade_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/FadeRGB in the package naoqi_bridge_msgs.
/**
  * Message to fade leds
 */
typedef struct naoqi_bridge_msgs__msg__FadeRGB
{
  rosidl_runtime_c__String led_name;
  std_msgs__msg__ColorRGBA color;
  builtin_interfaces__msg__Duration fade_duration;
} naoqi_bridge_msgs__msg__FadeRGB;

// Struct for a sequence of naoqi_bridge_msgs__msg__FadeRGB.
typedef struct naoqi_bridge_msgs__msg__FadeRGB__Sequence
{
  naoqi_bridge_msgs__msg__FadeRGB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__FadeRGB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__FADE_RGB__STRUCT_H_
