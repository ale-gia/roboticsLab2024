// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qi_unipa_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qi_unipa_msgs/msg/detail/hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qi_unipa_msgs
{

namespace msg
{

namespace builder
{

class Init_Hand_fun
{
public:
  explicit Init_Hand_fun(::qi_unipa_msgs::msg::Hand & msg)
  : msg_(msg)
  {}
  ::qi_unipa_msgs::msg::Hand fun(::qi_unipa_msgs::msg::Hand::_fun_type arg)
  {
    msg_.fun = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Hand msg_;
};

class Init_Hand_hand
{
public:
  Init_Hand_hand()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hand_fun hand(::qi_unipa_msgs::msg::Hand::_hand_type arg)
  {
    msg_.hand = std::move(arg);
    return Init_Hand_fun(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Hand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qi_unipa_msgs::msg::Hand>()
{
  return qi_unipa_msgs::msg::builder::Init_Hand_hand();
}

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__HAND__BUILDER_HPP_
