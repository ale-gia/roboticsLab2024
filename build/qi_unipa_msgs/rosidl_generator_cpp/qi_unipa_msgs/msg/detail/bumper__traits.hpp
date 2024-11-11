// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qi_unipa_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__TRAITS_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qi_unipa_msgs/msg/detail/bumper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qi_unipa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Bumper & msg,
  std::ostream & out)
{
  out << "{";
  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << ", ";
  }

  // member: back
  {
    out << "back: ";
    rosidl_generator_traits::value_to_yaml(msg.back, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Bumper & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }

  // member: back
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back: ";
    rosidl_generator_traits::value_to_yaml(msg.back, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Bumper & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace qi_unipa_msgs

namespace rosidl_generator_traits
{

[[deprecated("use qi_unipa_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qi_unipa_msgs::msg::Bumper & msg,
  std::ostream & out, size_t indentation = 0)
{
  qi_unipa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qi_unipa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const qi_unipa_msgs::msg::Bumper & msg)
{
  return qi_unipa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qi_unipa_msgs::msg::Bumper>()
{
  return "qi_unipa_msgs::msg::Bumper";
}

template<>
inline const char * name<qi_unipa_msgs::msg::Bumper>()
{
  return "qi_unipa_msgs/msg/Bumper";
}

template<>
struct has_fixed_size<qi_unipa_msgs::msg::Bumper>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<qi_unipa_msgs::msg::Bumper>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<qi_unipa_msgs::msg::Bumper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__BUMPER__TRAITS_HPP_
