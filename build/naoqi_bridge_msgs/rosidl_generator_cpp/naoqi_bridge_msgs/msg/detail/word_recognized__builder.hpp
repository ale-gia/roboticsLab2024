// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:msg/WordRecognized.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/msg/detail/word_recognized__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_WordRecognized_confidence_values
{
public:
  explicit Init_WordRecognized_confidence_values(::naoqi_bridge_msgs::msg::WordRecognized & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::msg::WordRecognized confidence_values(::naoqi_bridge_msgs::msg::WordRecognized::_confidence_values_type arg)
  {
    msg_.confidence_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::WordRecognized msg_;
};

class Init_WordRecognized_words
{
public:
  Init_WordRecognized_words()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WordRecognized_confidence_values words(::naoqi_bridge_msgs::msg::WordRecognized::_words_type arg)
  {
    msg_.words = std::move(arg);
    return Init_WordRecognized_confidence_values(msg_);
  }

private:
  ::naoqi_bridge_msgs::msg::WordRecognized msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::msg::WordRecognized>()
{
  return naoqi_bridge_msgs::msg::builder::Init_WordRecognized_words();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__BUILDER_HPP_
