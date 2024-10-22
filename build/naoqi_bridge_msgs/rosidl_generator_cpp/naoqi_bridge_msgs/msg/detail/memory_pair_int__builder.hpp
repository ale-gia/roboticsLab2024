// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/MemoryPairInt.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_INT__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/memory_pair_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_MemoryPairInt_data
{
public:
  explicit Init_MemoryPairInt_data(::naoqi_bridge_msgs::msg::MemoryPairInt & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::MemoryPairInt data(::naoqi_bridge_msgs::msg::MemoryPairInt::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryPairInt msg_;
};

class Init_MemoryPairInt_memory_key
{
public:
  Init_MemoryPairInt_memory_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MemoryPairInt_data memory_key(::naoqi_bridge_msgs::msg::MemoryPairInt::_memory_key_type arg)
  {
    msg_.memory_key = std::move(arg);
    return Init_MemoryPairInt_data(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::MemoryPairInt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::MemoryPairInt>()
{
  return naoqi_bridge_msgs::msg::builder::Init_MemoryPairInt_memory_key();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_PAIR_INT__BUILDER_HPP_
