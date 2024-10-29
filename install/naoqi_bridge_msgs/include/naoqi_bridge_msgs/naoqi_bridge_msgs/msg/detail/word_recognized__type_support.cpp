// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from naoqi_bridge_msgs:msg/WordRecognized.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "naoqi_bridge_msgs/msg/detail/word_recognized__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace naoqi_bridge_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WordRecognized_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) naoqi_bridge_msgs::msg::WordRecognized(_init);
}

void WordRecognized_fini_function(void * message_memory)
{
  auto typed_message = static_cast<naoqi_bridge_msgs::msg::WordRecognized *>(message_memory);
  typed_message->~WordRecognized();
}

size_t size_function__WordRecognized__words(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WordRecognized__words(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__WordRecognized__words(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__WordRecognized__words(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__WordRecognized__words(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__WordRecognized__words(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__WordRecognized__words(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__WordRecognized__words(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WordRecognized__confidence_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WordRecognized__confidence_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__WordRecognized__confidence_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__WordRecognized__confidence_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WordRecognized__confidence_values(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WordRecognized__confidence_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WordRecognized__confidence_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__WordRecognized__confidence_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WordRecognized_message_member_array[2] = {
  {
    "words",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::WordRecognized, words),  // bytes offset in struct
    nullptr,  // default value
    size_function__WordRecognized__words,  // size() function pointer
    get_const_function__WordRecognized__words,  // get_const(index) function pointer
    get_function__WordRecognized__words,  // get(index) function pointer
    fetch_function__WordRecognized__words,  // fetch(index, &value) function pointer
    assign_function__WordRecognized__words,  // assign(index, value) function pointer
    resize_function__WordRecognized__words  // resize(index) function pointer
  },
  {
    "confidence_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(naoqi_bridge_msgs::msg::WordRecognized, confidence_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__WordRecognized__confidence_values,  // size() function pointer
    get_const_function__WordRecognized__confidence_values,  // get_const(index) function pointer
    get_function__WordRecognized__confidence_values,  // get(index) function pointer
    fetch_function__WordRecognized__confidence_values,  // fetch(index, &value) function pointer
    assign_function__WordRecognized__confidence_values,  // assign(index, value) function pointer
    resize_function__WordRecognized__confidence_values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WordRecognized_message_members = {
  "naoqi_bridge_msgs::msg",  // message namespace
  "WordRecognized",  // message name
  2,  // number of fields
  sizeof(naoqi_bridge_msgs::msg::WordRecognized),
  WordRecognized_message_member_array,  // message members
  WordRecognized_init_function,  // function to initialize message memory (memory has to be allocated)
  WordRecognized_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WordRecognized_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WordRecognized_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace naoqi_bridge_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<naoqi_bridge_msgs::msg::WordRecognized>()
{
  return &::naoqi_bridge_msgs::msg::rosidl_typesupport_introspection_cpp::WordRecognized_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, naoqi_bridge_msgs, msg, WordRecognized)() {
  return &::naoqi_bridge_msgs::msg::rosidl_typesupport_introspection_cpp::WordRecognized_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
