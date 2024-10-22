// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from naoqi_bridge_msgs:msg/AudioBuffer.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__STRUCT_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CHANNEL_FRONT_LEFT'.
/**
  * channel order properties :
 */
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_FRONT_LEFT = 0
};

/// Constant 'CHANNEL_FRONT_CENTER'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_FRONT_CENTER = 1
};

/// Constant 'CHANNEL_FRONT_RIGHT'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_FRONT_RIGHT = 2
};

/// Constant 'CHANNEL_REAR_LEFT'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_REAR_LEFT = 3
};

/// Constant 'CHANNEL_REAR_CENTER'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_REAR_CENTER = 4
};

/// Constant 'CHANNEL_REAR_RIGHT'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_REAR_RIGHT = 5
};

/// Constant 'CHANNEL_SURROUND_LEFT'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_SURROUND_LEFT = 6
};

/// Constant 'CHANNEL_SURROUND_RIGHT'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_SURROUND_RIGHT = 7
};

/// Constant 'CHANNEL_SUBWOOFER'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_SUBWOOFER = 8
};

/// Constant 'CHANNEL_LFE'.
enum
{
  naoqi_bridge_msgs__msg__AudioBuffer__CHANNEL_LFE = 9
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'channel_map'
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AudioBuffer in the package naoqi_bridge_msgs.
/**
  * timestanp the audio buffer
 */
typedef struct naoqi_bridge_msgs__msg__AudioBuffer
{
  std_msgs__msg__Header header;
  /// current frequency of the audio interface
  uint16_t frequency;
  /// channel order of the current buffer
  rosidl_runtime_c__uint8__Sequence channel_map;
  /// interlaced data of the audio buffer
  rosidl_runtime_c__int16__Sequence data;
} naoqi_bridge_msgs__msg__AudioBuffer;

// Struct for a sequence of naoqi_bridge_msgs__msg__AudioBuffer.
typedef struct naoqi_bridge_msgs__msg__AudioBuffer__Sequence
{
  naoqi_bridge_msgs__msg__AudioBuffer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} naoqi_bridge_msgs__msg__AudioBuffer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__STRUCT_H_
