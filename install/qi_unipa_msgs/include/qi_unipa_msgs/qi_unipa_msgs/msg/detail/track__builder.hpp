// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qi_unipa_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qi_unipa_msgs/msg/detail/track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qi_unipa_msgs
{

namespace msg
{

namespace builder
{

class Init_Track_distance
{
public:
  explicit Init_Track_distance(::qi_unipa_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  ::qi_unipa_msgs::msg::Track distance(::qi_unipa_msgs::msg::Track::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Track msg_;
};

class Init_Track_target_name
{
public:
  Init_Track_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Track_distance target_name(::qi_unipa_msgs::msg::Track::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return Init_Track_distance(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Track msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qi_unipa_msgs::msg::Track>()
{
  return qi_unipa_msgs::msg::builder::Init_Track_target_name();
}

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
