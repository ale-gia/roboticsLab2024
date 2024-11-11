// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from qi_unipa_msgs:msg/PostureWithSpeed.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__FUNCTIONS_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "qi_unipa_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "qi_unipa_msgs/msg/detail/posture_with_speed__struct.h"

/// Initialize msg/PostureWithSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * qi_unipa_msgs__msg__PostureWithSpeed
 * )) before or use
 * qi_unipa_msgs__msg__PostureWithSpeed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__PostureWithSpeed__init(qi_unipa_msgs__msg__PostureWithSpeed * msg);

/// Finalize msg/PostureWithSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__PostureWithSpeed__fini(qi_unipa_msgs__msg__PostureWithSpeed * msg);

/// Create msg/PostureWithSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * qi_unipa_msgs__msg__PostureWithSpeed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
qi_unipa_msgs__msg__PostureWithSpeed *
qi_unipa_msgs__msg__PostureWithSpeed__create();

/// Destroy msg/PostureWithSpeed message.
/**
 * It calls
 * qi_unipa_msgs__msg__PostureWithSpeed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__PostureWithSpeed__destroy(qi_unipa_msgs__msg__PostureWithSpeed * msg);

/// Check for msg/PostureWithSpeed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__PostureWithSpeed__are_equal(const qi_unipa_msgs__msg__PostureWithSpeed * lhs, const qi_unipa_msgs__msg__PostureWithSpeed * rhs);

/// Copy a msg/PostureWithSpeed message.
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
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__PostureWithSpeed__copy(
  const qi_unipa_msgs__msg__PostureWithSpeed * input,
  qi_unipa_msgs__msg__PostureWithSpeed * output);

/// Initialize array of msg/PostureWithSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * qi_unipa_msgs__msg__PostureWithSpeed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__PostureWithSpeed__Sequence__init(qi_unipa_msgs__msg__PostureWithSpeed__Sequence * array, size_t size);

/// Finalize array of msg/PostureWithSpeed messages.
/**
 * It calls
 * qi_unipa_msgs__msg__PostureWithSpeed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__PostureWithSpeed__Sequence__fini(qi_unipa_msgs__msg__PostureWithSpeed__Sequence * array);

/// Create array of msg/PostureWithSpeed messages.
/**
 * It allocates the memory for the array and calls
 * qi_unipa_msgs__msg__PostureWithSpeed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
qi_unipa_msgs__msg__PostureWithSpeed__Sequence *
qi_unipa_msgs__msg__PostureWithSpeed__Sequence__create(size_t size);

/// Destroy array of msg/PostureWithSpeed messages.
/**
 * It calls
 * qi_unipa_msgs__msg__PostureWithSpeed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__PostureWithSpeed__Sequence__destroy(qi_unipa_msgs__msg__PostureWithSpeed__Sequence * array);

/// Check for msg/PostureWithSpeed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__PostureWithSpeed__Sequence__are_equal(const qi_unipa_msgs__msg__PostureWithSpeed__Sequence * lhs, const qi_unipa_msgs__msg__PostureWithSpeed__Sequence * rhs);

/// Copy an array of msg/PostureWithSpeed messages.
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
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__PostureWithSpeed__Sequence__copy(
  const qi_unipa_msgs__msg__PostureWithSpeed__Sequence * input,
  qi_unipa_msgs__msg__PostureWithSpeed__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__POSTURE_WITH_SPEED__FUNCTIONS_H_
