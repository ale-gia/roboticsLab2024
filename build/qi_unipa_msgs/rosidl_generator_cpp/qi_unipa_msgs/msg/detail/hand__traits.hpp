// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qi_unipa_msgs:msg/Hand.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__HAND__TRAITS_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qi_unipa_msgs/msg/detail/hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qi_unipa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Hand & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand
  {
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
    out << ", ";
  }

  // member: fun
  {
    out << "fun: ";
    rosidl_generator_traits::value_to_yaml(msg.fun, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Hand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand: ";
    rosidl_generator_traits::value_to_yaml(msg.hand, out);
    out << "\n";
  }

  // member: fun
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fun: ";
    rosidl_generator_traits::value_to_yaml(msg.fun, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Hand & msg, bool use_flow_style = false)
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
  const qi_unipa_msgs::msg::Hand & msg,
  std::ostream & out, size_t indentation = 0)
{
  qi_unipa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qi_unipa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const qi_unipa_msgs::msg::Hand & msg)
{
  return qi_unipa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qi_unipa_msgs::msg::Hand>()
{
  return "qi_unipa_msgs::msg::Hand";
}

template<>
inline const char * name<qi_unipa_msgs::msg::Hand>()
{
  return "qi_unipa_msgs/msg/Hand";
}

template<>
struct has_fixed_size<qi_unipa_msgs::msg::Hand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qi_unipa_msgs::msg::Hand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qi_unipa_msgs::msg::Hand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__HAND__TRAITS_HPP_
