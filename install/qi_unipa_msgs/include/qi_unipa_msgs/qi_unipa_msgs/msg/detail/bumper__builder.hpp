// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qi_unipa_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qi_unipa_msgs/msg/detail/bumper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qi_unipa_msgs
{

namespace msg
{

namespace builder
{

class Init_Bumper_back
{
public:
  explicit Init_Bumper_back(::qi_unipa_msgs::msg::Bumper & msg)
  : msg_(msg)
  {}
  ::qi_unipa_msgs::msg::Bumper back(::qi_unipa_msgs::msg::Bumper::_back_type arg)
  {
    msg_.back = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Bumper msg_;
};

class Init_Bumper_right
{
public:
  explicit Init_Bumper_right(::qi_unipa_msgs::msg::Bumper & msg)
  : msg_(msg)
  {}
  Init_Bumper_back right(::qi_unipa_msgs::msg::Bumper::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_Bumper_back(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Bumper msg_;
};

class Init_Bumper_left
{
public:
  Init_Bumper_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bumper_right left(::qi_unipa_msgs::msg::Bumper::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Bumper_right(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Bumper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qi_unipa_msgs::msg::Bumper>()
{
  return qi_unipa_msgs::msg::builder::Init_Bumper_left();
}

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__BUILDER_HPP_
