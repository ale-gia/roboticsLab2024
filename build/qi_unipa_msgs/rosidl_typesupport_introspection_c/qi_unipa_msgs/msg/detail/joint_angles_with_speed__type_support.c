// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qi_unipa_msgs:msg/JointAnglesWithSpeed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qi_unipa_msgs/msg/detail/joint_angles_with_speed__rosidl_typesupport_introspection_c.h"
#include "qi_unipa_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qi_unipa_msgs/msg/detail/joint_angles_with_speed__functions.h"
#include "qi_unipa_msgs/msg/detail/joint_angles_with_speed__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qi_unipa_msgs__msg__JointAnglesWithSpeed__init(message_memory);
}

void qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_fini_function(void * message_memory)
{
  qi_unipa_msgs__msg__JointAnglesWithSpeed__fini(message_memory);
}

size_t qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__size_function__JointAnglesWithSpeed__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_const_function__JointAnglesWithSpeed__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_function__JointAnglesWithSpeed__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__fetch_function__JointAnglesWithSpeed__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_const_function__JointAnglesWithSpeed__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__assign_function__JointAnglesWithSpeed__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_function__JointAnglesWithSpeed__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__resize_function__JointAnglesWithSpeed__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__size_function__JointAnglesWithSpeed__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_const_function__JointAnglesWithSpeed__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_function__JointAnglesWithSpeed__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__fetch_function__JointAnglesWithSpeed__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_const_function__JointAnglesWithSpeed__angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__assign_function__JointAnglesWithSpeed__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_function__JointAnglesWithSpeed__angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__resize_function__JointAnglesWithSpeed__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_member_array[3] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs__msg__JointAnglesWithSpeed, names),  // bytes offset in struct
    NULL,  // default value
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__size_function__JointAnglesWithSpeed__names,  // size() function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_const_function__JointAnglesWithSpeed__names,  // get_const(index) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_function__JointAnglesWithSpeed__names,  // get(index) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__fetch_function__JointAnglesWithSpeed__names,  // fetch(index, &value) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__assign_function__JointAnglesWithSpeed__names,  // assign(index, value) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__resize_function__JointAnglesWithSpeed__names  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs__msg__JointAnglesWithSpeed, angles),  // bytes offset in struct
    NULL,  // default value
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__size_function__JointAnglesWithSpeed__angles,  // size() function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_const_function__JointAnglesWithSpeed__angles,  // get_const(index) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__get_function__JointAnglesWithSpeed__angles,  // get(index) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__fetch_function__JointAnglesWithSpeed__angles,  // fetch(index, &value) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__assign_function__JointAnglesWithSpeed__angles,  // assign(index, value) function pointer
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__resize_function__JointAnglesWithSpeed__angles  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs__msg__JointAnglesWithSpeed, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_members = {
  "qi_unipa_msgs__msg",  // message namespace
  "JointAnglesWithSpeed",  // message name
  3,  // number of fields
  sizeof(qi_unipa_msgs__msg__JointAnglesWithSpeed),
  qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_member_array,  // message members
  qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_type_support_handle = {
  0,
  &qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qi_unipa_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qi_unipa_msgs, msg, JointAnglesWithSpeed)() {
  if (!qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_type_support_handle.typesupport_identifier) {
    qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qi_unipa_msgs__msg__JointAnglesWithSpeed__rosidl_typesupport_introspection_c__JointAnglesWithSpeed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
