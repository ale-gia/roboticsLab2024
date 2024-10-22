// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from naoqi_bridge_msgs:msg/EventStamped.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__FUNCTIONS_H_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "naoqi_bridge_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "naoqi_bridge_msgs/msg/detail/event_stamped__struct.h"

/// Initialize msg/EventStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__msg__EventStamped
 * )) before or use
 * naoqi_bridge_msgs__msg__EventStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__EventStamped__init(naoqi_bridge_msgs__msg__EventStamped * msg);

/// Finalize msg/EventStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__EventStamped__fini(naoqi_bridge_msgs__msg__EventStamped * msg);

/// Create msg/EventStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__msg__EventStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__msg__EventStamped *
naoqi_bridge_msgs__msg__EventStamped__create();

/// Destroy msg/EventStamped message.
/**
 * It calls
 * naoqi_bridge_msgs__msg__EventStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__EventStamped__destroy(naoqi_bridge_msgs__msg__EventStamped * msg);

/// Check for msg/EventStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__EventStamped__are_equal(const naoqi_bridge_msgs__msg__EventStamped * lhs, const naoqi_bridge_msgs__msg__EventStamped * rhs);

/// Copy a msg/EventStamped message.
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
naoqi_bridge_msgs__msg__EventStamped__copy(
  const naoqi_bridge_msgs__msg__EventStamped * input,
  naoqi_bridge_msgs__msg__EventStamped * output);

/// Initialize array of msg/EventStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__msg__EventStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__EventStamped__Sequence__init(naoqi_bridge_msgs__msg__EventStamped__Sequence * array, size_t size);

/// Finalize array of msg/EventStamped messages.
/**
 * It calls
 * naoqi_bridge_msgs__msg__EventStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__EventStamped__Sequence__fini(naoqi_bridge_msgs__msg__EventStamped__Sequence * array);

/// Create array of msg/EventStamped messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__msg__EventStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__msg__EventStamped__Sequence *
naoqi_bridge_msgs__msg__EventStamped__Sequence__create(size_t size);

/// Destroy array of msg/EventStamped messages.
/**
 * It calls
 * naoqi_bridge_msgs__msg__EventStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__msg__EventStamped__Sequence__destroy(naoqi_bridge_msgs__msg__EventStamped__Sequence * array);

/// Check for msg/EventStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__msg__EventStamped__Sequence__are_equal(const naoqi_bridge_msgs__msg__EventStamped__Sequence * lhs, const naoqi_bridge_msgs__msg__EventStamped__Sequence * rhs);

/// Copy an array of msg/EventStamped messages.
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
naoqi_bridge_msgs__msg__EventStamped__Sequence__copy(
  const naoqi_bridge_msgs__msg__EventStamped__Sequence * input,
  naoqi_bridge_msgs__msg__EventStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__EVENT_STAMPED__FUNCTIONS_H_
