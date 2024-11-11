// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from qi_unipa_msgs:msg/JointAnglesWithSpeed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "qi_unipa_msgs/msg/detail/joint_angles_with_speed__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace qi_unipa_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointAnglesWithSpeed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qi_unipa_msgs::msg::JointAnglesWithSpeed(_init);
}

void JointAnglesWithSpeed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qi_unipa_msgs::msg::JointAnglesWithSpeed *>(message_memory);
  typed_message->~JointAnglesWithSpeed();
}

size_t size_function__JointAnglesWithSpeed__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointAnglesWithSpeed__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointAnglesWithSpeed__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointAnglesWithSpeed__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointAnglesWithSpeed__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointAnglesWithSpeed__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointAnglesWithSpeed__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__JointAnglesWithSpeed__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointAnglesWithSpeed__angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointAnglesWithSpeed__angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointAnglesWithSpeed__angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointAnglesWithSpeed__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointAnglesWithSpeed__angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointAnglesWithSpeed__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointAnglesWithSpeed__angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__JointAnglesWithSpeed__angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointAnglesWithSpeed_message_member_array[3] = {
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs::msg::JointAnglesWithSpeed, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointAnglesWithSpeed__names,  // size() function pointer
    get_const_function__JointAnglesWithSpeed__names,  // get_const(index) function pointer
    get_function__JointAnglesWithSpeed__names,  // get(index) function pointer
    fetch_function__JointAnglesWithSpeed__names,  // fetch(index, &value) function pointer
    assign_function__JointAnglesWithSpeed__names,  // assign(index, value) function pointer
    resize_function__JointAnglesWithSpeed__names  // resize(index) function pointer
  },
  {
    "angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs::msg::JointAnglesWithSpeed, angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointAnglesWithSpeed__angles,  // size() function pointer
    get_const_function__JointAnglesWithSpeed__angles,  // get_const(index) function pointer
    get_function__JointAnglesWithSpeed__angles,  // get(index) function pointer
    fetch_function__JointAnglesWithSpeed__angles,  // fetch(index, &value) function pointer
    assign_function__JointAnglesWithSpeed__angles,  // assign(index, value) function pointer
    resize_function__JointAnglesWithSpeed__angles  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qi_unipa_msgs::msg::JointAnglesWithSpeed, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointAnglesWithSpeed_message_members = {
  "qi_unipa_msgs::msg",  // message namespace
  "JointAnglesWithSpeed",  // message name
  3,  // number of fields
  sizeof(qi_unipa_msgs::msg::JointAnglesWithSpeed),
  JointAnglesWithSpeed_message_member_array,  // message members
  JointAnglesWithSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  JointAnglesWithSpeed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointAnglesWithSpeed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointAnglesWithSpeed_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace qi_unipa_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qi_unipa_msgs::msg::JointAnglesWithSpeed>()
{
  return &::qi_unipa_msgs::msg::rosidl_typesupport_introspection_cpp::JointAnglesWithSpeed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qi_unipa_msgs, msg, JointAnglesWithSpeed)() {
  return &::qi_unipa_msgs::msg::rosidl_typesupport_introspection_cpp::JointAnglesWithSpeed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
