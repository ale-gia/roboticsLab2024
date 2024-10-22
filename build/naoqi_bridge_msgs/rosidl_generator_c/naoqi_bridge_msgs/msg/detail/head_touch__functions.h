// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from naoqi_bridge_msgs:msg/HeadTouch.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__FUNCTIONS_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "naoqi_bridge_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "naoqi_bridge_msgs/msg/detail/head_touch__struct.h"

/// Initialize msg/HeadTouch message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__msg__HeadTouch
 * )) before or use
 * naoqi_bridge_msgs__msg__HeadTouch__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__HeadTouch__init(naoqi_bridge_msgs__msg__HeadTouch * msg);

/// Finalize msg/HeadTouch message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__HeadTouch__fini(naoqi_bridge_msgs__msg__HeadTouch * msg);

/// Create msg/HeadTouch message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__msg__HeadTouch__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__msg__HeadTouch *
naoqi_bridge_msgs__msg__HeadTouch__create();

/// Destroy msg/HeadTouch message.
/**
 * It calls
 * naoqi_bridge_msgs__msg__HeadTouch__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__HeadTouch__destroy(naoqi_bridge_msgs__msg__HeadTouch * msg);

/// Check for msg/HeadTouch message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__HeadTouch__are_equal(const naoqi_bridge_msgs__msg__HeadTouch * lhs, const naoqi_bridge_msgs__msg__HeadTouch * rhs);

/// Copy a msg/HeadTouch message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__HeadTouch__copy(
  const naoqi_bridge_msgs__msg__HeadTouch * input,
  naoqi_bridge_msgs__msg__HeadTouch * output);

/// Initialize array of msg/HeadTouch messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__msg__HeadTouch__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__HeadTouch__Sequence__init(naoqi_bridge_msgs__msg__HeadTouch__Sequence * array, size_t size);

/// Finalize array of msg/HeadTouch messages.
/**
 * It calls
 * naoqi_bridge_msgs__msg__HeadTouch__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__HeadTouch__Sequence__fini(naoqi_bridge_msgs__msg__HeadTouch__Sequence * array);

/// Create array of msg/HeadTouch messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__msg__HeadTouch__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__msg__HeadTouch__Sequence *
naoqi_bridge_msgs__msg__HeadTouch__Sequence__create(size_t size);

/// Destroy array of msg/HeadTouch messages.
/**
 * It calls
 * naoqi_bridge_msgs__msg__HeadTouch__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__HeadTouch__Sequence__destroy(naoqi_bridge_msgs__msg__HeadTouch__Sequence * array);

/// Check for msg/HeadTouch message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__HeadTouch__Sequence__are_equal(const naoqi_bridge_msgs__msg__HeadTouch__Sequence * lhs, const naoqi_bridge_msgs__msg__HeadTouch__Sequence * rhs);

/// Copy an array of msg/HeadTouch messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__HeadTouch__Sequence__copy(
  const naoqi_bridge_msgs__msg__HeadTouch__Sequence * input,
  naoqi_bridge_msgs__msg__HeadTouch__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__HEAD_TOUCH__FUNCTIONS_H_
