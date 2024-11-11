// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qi_unipa_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef QI_UNIPA_MSGS__MSG__DETAIL__TRACK__TRAITS_HPP_
#define QI_UNIPA_MSGS__MSG__DETAIL__TRACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qi_unipa_msgs/msg/detail/track__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qi_unipa_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Track & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_name
  {
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Track & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Track & msg, bool use_flow_style = false)
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
  const qi_unipa_msgs::msg::Track & msg,
  std::ostream & out, size_t indentation = 0)
{
  qi_unipa_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qi_unipa_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const qi_unipa_msgs::msg::Track & msg)
{
  return qi_unipa_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qi_unipa_msgs::msg::Track>()
{
  return "qi_unipa_msgs::msg::Track";
}

template<>
inline const char * name<qi_unipa_msgs::msg::Track>()
{
  return "qi_unipa_msgs/msg/Track";
}

template<>
struct has_fixed_size<qi_unipa_msgs::msg::Track>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qi_unipa_msgs::msg::Track>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qi_unipa_msgs::msg::Track>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QI_UNIPA_MSGS__MSG__DETAIL__TRACK__TRAITS_HPP_
