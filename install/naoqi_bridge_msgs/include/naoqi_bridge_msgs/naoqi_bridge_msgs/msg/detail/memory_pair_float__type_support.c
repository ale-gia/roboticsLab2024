// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from naoqi_bridge_msgs:msg/MemoryPairFloat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__rosidl_typesupport_introspection_c.h"
#include "naoqi_bridge_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__functions.h"
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__struct.h"


// Include directives for member types
// Member `memory_key`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  naoqi_bridge_msgs__msg__MemoryPairFloat__init(message_memory);
}

void naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_fini_function(void * message_memory)
{
  naoqi_bridge_msgs__msg__MemoryPairFloat__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_member_array[2] = {
  {
    "memory_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__MemoryPairFloat, memory_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs__msg__MemoryPairFloat, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_members = {
  "naoqi_bridge_msgs__msg",  // message namespace
  "MemoryPairFloat",  // message name
  2,  // number of fields
  sizeof(naoqi_bridge_msgs__msg__MemoryPairFloat),
  naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_member_array,  // message members
  naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_init_function,  // function to initialize message memory (memory has to be allocated)
  naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_type_support_handle = {
  0,
  &naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_naoqi_bridge_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, naoqi_bridge_msgs, msg, MemoryPairFloat)() {
  if (!naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_type_support_handle.typesupport_identifier) {
    naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &naoqi_bridge_msgs__msg__MemoryPairFloat__rosidl_typesupport_introspection_c__MemoryPairFloat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
