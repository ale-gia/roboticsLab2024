// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from naoqi_bridge_msgs:action/SpeechWithFeedback.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__SPEECH_WITH_FEEDBACK__FUNCTIONS_H_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__SPEECH_WITH_FEEDBACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "naoqi_bridge_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "naoqi_bridge_msgs/action/detail/speech_with_feedback__struct.h"

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__init(naoqi_bridge_msgs__action__SpeechWithFeedback_Goal * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_Goal * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal *
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_Goal * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_Goal * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_Goal * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_Goal * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_Goal * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_Goal__Sequence * output);

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__init(naoqi_bridge_msgs__action__SpeechWithFeedback_Result * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_Result * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_Result *
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_Result * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_Result * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_Result * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_Result * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_Result * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_Result__Sequence * output);

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__init(naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback *
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_Feedback__Sequence * output);

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__init(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request *
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Request__Sequence * output);

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__init(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response *
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_SendGoal_Response__Sequence * output);

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__init(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request *
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Request__Sequence * output);

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__init(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response *
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_GetResult_Response__Sequence * output);

/// Initialize action/SpeechWithFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage
 * )) before or use
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__init(naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage * msg);

/// Finalize action/SpeechWithFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage * msg);

/// Create action/SpeechWithFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage *
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__create();

/// Destroy action/SpeechWithFeedback message.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage * msg);

/// Check for action/SpeechWithFeedback message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage * rhs);

/// Copy a action/SpeechWithFeedback message.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage * output);

/// Initialize array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__init(naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__fini(naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence * array);

/// Create array of action/SpeechWithFeedback messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence *
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/SpeechWithFeedback messages.
/**
 * It calls
 * naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__destroy(naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence * array);

/// Check for action/SpeechWithFeedback message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__are_equal(const naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence * lhs, const naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/SpeechWithFeedback messages.
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
naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence__copy(
  const naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence * input,
  naoqi_bridge_msgs__action__SpeechWithFeedback_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__SPEECH_WITH_FEEDBACK__FUNCTIONS_H_
