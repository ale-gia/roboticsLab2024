// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qi_unipa_msgs:msg/Sonar.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__SONAR__BUILDER_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__SONAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qi_unipa_msgs/msg/detail/sonar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qi_unipa_msgs
{

namespace msg
{

namespace builder
{

class Init_Sonar_back_sonar
{
public:
  explicit Init_Sonar_back_sonar(::qi_unipa_msgs::msg::Sonar & msg)
  : msg_(msg)
  {}
  ::qi_unipa_msgs::msg::Sonar back_sonar(::qi_unipa_msgs::msg::Sonar::_back_sonar_type arg)
  {
    msg_.back_sonar = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Sonar msg_;
};

class Init_Sonar_front_sonar
{
public:
  Init_Sonar_front_sonar()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sonar_back_sonar front_sonar(::qi_unipa_msgs::msg::Sonar::_front_sonar_type arg)
  {
    msg_.front_sonar = std::move(arg);
    return Init_Sonar_back_sonar(msg_);
  }

private:
  ::qi_unipa_msgs::msg::Sonar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qi_unipa_msgs::msg::Sonar>()
{
  return qi_unipa_msgs::msg::builder::Init_Sonar_front_sonar();
}

}  // namespace qi_unipa_msgs

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__SONAR__BUILDER_HPP_
