// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/HandTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RIGHT_BACK'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__RIGHT_BACK = 0
};

/// Constant 'RIGHT_LEFT'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__RIGHT_LEFT = 1
};

/// Constant 'RIGHT_RIGHT'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__RIGHT_RIGHT = 2
};

/// Constant 'LEFT_BACK'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__LEFT_BACK = 3
};

/// Constant 'LEFT_LEFT'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__LEFT_LEFT = 4
};

/// Constant 'LEFT_RIGHT'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__LEFT_RIGHT = 5
};

/// Constant 'STATE_RELEASED'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__STATE_RELEASED = 0
};

/// Constant 'STATE_PRESSED'.
enum
{
  naoqi_bridge_msgs__msg__HandTouch__STATE_PRESSED = 1
};

/// Struct defined in msg/HandTouch in the package naoqi_bridge_msgs.
/**
  * A message for Nao and Pepper's hand touch interface (touched tactile sensors on the hands)
 */
typedef struct naoqi_bridge_msgs__msg__HandTouch
{
  /// which hand (left or right)
  uint8_t hand;
  /// state of the hands (pressed or released)
  uint8_t state;
} naoqi_bridge_msgs__msg__HandTouch;

// Struct for a sequence of naoqi_bridge_msgs__msg__HandTouch.
typedef struct naoqi_bridge_msgs__msg__HandTouch__Sequence
{
  naoqi_bridge_msgs__msg__HandTouch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__HandTouch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HAND_TOUCH__STRUCT_H_
