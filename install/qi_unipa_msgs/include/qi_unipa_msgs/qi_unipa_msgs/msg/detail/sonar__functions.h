// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from qi_unipa_msgs:msg/Sonar.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__SONAR__FUNCTIONS_H_
#define QI_UNIPA_MSGS__MSG__DETAIL__SONAR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "qi_unipa_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "qi_unipa_msgs/msg/detail/sonar__struct.h"

/// Initialize msg/Sonar message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * qi_unipa_msgs__msg__Sonar
 * )) before or use
 * qi_unipa_msgs__msg__Sonar__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__Sonar__init(qi_unipa_msgs__msg__Sonar * msg);

/// Finalize msg/Sonar message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__Sonar__fini(qi_unipa_msgs__msg__Sonar * msg);

/// Create msg/Sonar message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * qi_unipa_msgs__msg__Sonar__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
qi_unipa_msgs__msg__Sonar *
qi_unipa_msgs__msg__Sonar__create();

/// Destroy msg/Sonar message.
/**
 * It calls
 * qi_unipa_msgs__msg__Sonar__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__Sonar__destroy(qi_unipa_msgs__msg__Sonar * msg);

/// Check for msg/Sonar message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__Sonar__are_equal(const qi_unipa_msgs__msg__Sonar * lhs, const qi_unipa_msgs__msg__Sonar * rhs);

/// Copy a msg/Sonar message.
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
qi_unipa_msgs__msg__Sonar__copy(
  const qi_unipa_msgs__msg__Sonar * input,
  qi_unipa_msgs__msg__Sonar * output);

/// Initialize array of msg/Sonar messages.
/**
 * It allocates the memory for the number of elements and calls
 * qi_unipa_msgs__msg__Sonar__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__Sonar__Sequence__init(qi_unipa_msgs__msg__Sonar__Sequence * array, size_t size);

/// Finalize array of msg/Sonar messages.
/**
 * It calls
 * qi_unipa_msgs__msg__Sonar__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__Sonar__Sequence__fini(qi_unipa_msgs__msg__Sonar__Sequence * array);

/// Create array of msg/Sonar messages.
/**
 * It allocates the memory for the array and calls
 * qi_unipa_msgs__msg__Sonar__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
qi_unipa_msgs__msg__Sonar__Sequence *
qi_unipa_msgs__msg__Sonar__Sequence__create(size_t size);

/// Destroy array of msg/Sonar messages.
/**
 * It calls
 * qi_unipa_msgs__msg__Sonar__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
void
qi_unipa_msgs__msg__Sonar__Sequence__destroy(qi_unipa_msgs__msg__Sonar__Sequence * array);

/// Check for msg/Sonar message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_qi_unipa_msgs
bool
qi_unipa_msgs__msg__Sonar__Sequence__are_equal(const qi_unipa_msgs__msg__Sonar__Sequence * lhs, const qi_unipa_msgs__msg__Sonar__Sequence * rhs);

/// Copy an array of msg/Sonar messages.
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
qi_unipa_msgs__msg__Sonar__Sequence__copy(
  const qi_unipa_msgs__msg__Sonar__Sequence * input,
  qi_unipa_msgs__msg__Sonar__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__SONAR__FUNCTIONS_H_
