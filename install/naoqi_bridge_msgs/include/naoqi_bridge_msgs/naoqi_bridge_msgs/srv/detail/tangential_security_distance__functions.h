// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from naoqi_bridge_msgs:srv/TangentialSecurityDistance.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__TANGENTIAL_SECURITY_DISTANCE__FUNCTIONS_H_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__TANGENTIAL_SECURITY_DISTANCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "naoqi_bridge_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "naoqi_bridge_msgs/srv/detail/tangential_security_distance__struct.h"

/// Initialize srv/TangentialSecurityDistance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request
 * )) before or use
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__init(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request * msg);

/// Finalize srv/TangentialSecurityDistance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__fini(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request * msg);

/// Create srv/TangentialSecurityDistance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request *
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__create();

/// Destroy srv/TangentialSecurityDistance message.
/**
 * It calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__destroy(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request * msg);

/// Check for srv/TangentialSecurityDistance message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__are_equal(const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request * lhs, const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request * rhs);

/// Copy a srv/TangentialSecurityDistance message.
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
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__copy(
  const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request * input,
  naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request * output);

/// Initialize array of srv/TangentialSecurityDistance messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__init(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence * array, size_t size);

/// Finalize array of srv/TangentialSecurityDistance messages.
/**
 * It calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__fini(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence * array);

/// Create array of srv/TangentialSecurityDistance messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence *
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__create(size_t size);

/// Destroy array of srv/TangentialSecurityDistance messages.
/**
 * It calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__destroy(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence * array);

/// Check for srv/TangentialSecurityDistance message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__are_equal(const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence * lhs, const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence * rhs);

/// Copy an array of srv/TangentialSecurityDistance messages.
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
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence__copy(
  const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence * input,
  naoqi_bridge_msgs__srv__TangentialSecurityDistance_Request__Sequence * output);

/// Initialize srv/TangentialSecurityDistance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response
 * )) before or use
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__init(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response * msg);

/// Finalize srv/TangentialSecurityDistance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__fini(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response * msg);

/// Create srv/TangentialSecurityDistance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response *
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__create();

/// Destroy srv/TangentialSecurityDistance message.
/**
 * It calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__destroy(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response * msg);

/// Check for srv/TangentialSecurityDistance message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__are_equal(const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response * lhs, const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response * rhs);

/// Copy a srv/TangentialSecurityDistance message.
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
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__copy(
  const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response * input,
  naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response * output);

/// Initialize array of srv/TangentialSecurityDistance messages.
/**
 * It allocates the memory for the number of elements and calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__init(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence * array, size_t size);

/// Finalize array of srv/TangentialSecurityDistance messages.
/**
 * It calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__fini(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence * array);

/// Create array of srv/TangentialSecurityDistance messages.
/**
 * It allocates the memory for the array and calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence *
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__create(size_t size);

/// Destroy array of srv/TangentialSecurityDistance messages.
/**
 * It calls
 * naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
void
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__destroy(naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence * array);

/// Check for srv/TangentialSecurityDistance message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_naoqi_bridge_msgs
bool
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__are_equal(const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence * lhs, const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence * rhs);

/// Copy an array of srv/TangentialSecurityDistance messages.
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
naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence__copy(
  const naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence * input,
  naoqi_bridge_msgs__srv__TangentialSecurityDistance_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__TANGENTIAL_SECURITY_DISTANCE__FUNCTIONS_H_
