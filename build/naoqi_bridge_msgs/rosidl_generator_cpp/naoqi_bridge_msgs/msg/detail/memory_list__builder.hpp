// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/memory_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_MemoryList_floats
{
public:
  explicit Init_MemoryList_floats(::naoqi_bridge_msgs::msg::MemoryList & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::MemoryList floats(::naoqi_bridge_msgs::msg::MemoryList::_floats_type arg)
  {
    msg_.floats = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryList msg_;
};

class Init_MemoryList_ints
{
public:
  explicit Init_MemoryList_ints(::naoqi_bridge_msgs::msg::MemoryList & msg)
  : msg_(msg)
  {}
  Init_MemoryList_floats ints(::naoqi_bridge_msgs::msg::MemoryList::_ints_type arg)
  {
    msg_.ints = std::move(arg);
    return Init_MemoryList_floats(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryList msg_;
};

class Init_MemoryList_strings
{
public:
  explicit Init_MemoryList_strings(::naoqi_bridge_msgs::msg::MemoryList & msg)
  : msg_(msg)
  {}
  Init_MemoryList_ints strings(::naoqi_bridge_msgs::msg::MemoryList::_strings_type arg)
  {
    msg_.strings = std::move(arg);
    return Init_MemoryList_ints(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryList msg_;
};

class Init_MemoryList_header
{
public:
  Init_MemoryList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MemoryList_strings header(::naoqi_bridge_msgs::msg::MemoryList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MemoryList_strings(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::MemoryList>()
{
  return naoqi_bridge_msgs::msg::builder::Init_MemoryList_header();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__BUILDER_HPP_
