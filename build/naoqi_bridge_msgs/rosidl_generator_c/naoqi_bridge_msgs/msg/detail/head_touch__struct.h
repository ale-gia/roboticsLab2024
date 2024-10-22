// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/HeadTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BUTTON_FRONT'.
enum
{
  naoqi_bridge_msgs__msg__HeadTouch__BUTTON_FRONT = 1
};

/// Constant 'BUTTON_MIDDLE'.
enum
{
  naoqi_bridge_msgs__msg__HeadTouch__BUTTON_MIDDLE = 2
};

/// Constant 'BUTTON_REAR'.
enum
{
  naoqi_bridge_msgs__msg__HeadTouch__BUTTON_REAR = 3
};

/// Constant 'STATE_RELEASED'.
enum
{
  naoqi_bridge_msgs__msg__HeadTouch__STATE_RELEASED = 0
};

/// Constant 'STATE_PRESSED'.
enum
{
  naoqi_bridge_msgs__msg__HeadTouch__STATE_PRESSED = 1
};

/// Struct defined in msg/HeadTouch in the package naoqi_bridge_msgs.
/**
  * A message for Nao's tactile interface (toucht buttons on the head)
 */
typedef struct naoqi_bridge_msgs__msg__HeadTouch
{
  /// which of the three segments is touched
  uint8_t button;
  /// pressed or released, see below
  uint8_t state;
} naoqi_bridge_msgs__msg__HeadTouch;

// Struct for a sequence of naoqi_bridge_msgs__msg__HeadTouch.
typedef struct naoqi_bridge_msgs__msg__HeadTouch__Sequence
{
  naoqi_bridge_msgs__msg__HeadTouch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__HeadTouch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__STRUCT_H_
