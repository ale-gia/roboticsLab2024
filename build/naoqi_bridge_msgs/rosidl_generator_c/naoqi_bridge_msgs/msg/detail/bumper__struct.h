// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RIGHT'.
enum
{
  naoqi_bridge_msgs__msg__Bumper__RIGHT = 0
};

/// Constant 'LEFT'.
enum
{
  naoqi_bridge_msgs__msg__Bumper__LEFT = 1
};

/// Constant 'BACK'.
enum
{
  naoqi_bridge_msgs__msg__Bumper__BACK = 2
};

/// Constant 'STATE_RELEASED'.
enum
{
  naoqi_bridge_msgs__msg__Bumper__STATE_RELEASED = 0
};

/// Constant 'STATE_PRESSED'.
enum
{
  naoqi_bridge_msgs__msg__Bumper__STATE_PRESSED = 1
};

/// Struct defined in msg/Bumper in the package naoqi_bridge_msgs.
/**
  * A message for Nao's bumpers on the feet
 */
typedef struct naoqi_bridge_msgs__msg__Bumper
{
  /// which bumper (left or right)
  uint8_t bumper;
  /// state of the bumper (pressed or released)
  uint8_t state;
} naoqi_bridge_msgs__msg__Bumper;

// Struct for a sequence of naoqi_bridge_msgs__msg__Bumper.
typedef struct naoqi_bridge_msgs__msg__Bumper__Sequence
{
  naoqi_bridge_msgs__msg__Bumper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__Bumper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__BUMPER__STRUCT_H_
