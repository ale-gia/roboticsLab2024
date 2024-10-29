// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:msg/WordRecognized.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/msg/detail/word_recognized__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace naoqi_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WordRecognized & msg,
  std::ostream & out)
{
  out << "{";
  // member: words
  {
    if (msg.words.size() == 0) {
      out << "words: []";
    } else {
      out << "words: [";
      size_t pending_items = msg.words.size();
      for (auto item : msg.words) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confidence_values
  {
    if (msg.confidence_values.size() == 0) {
      out << "confidence_values: []";
    } else {
      out << "confidence_values: [";
      size_t pending_items = msg.confidence_values.size();
      for (auto item : msg.confidence_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WordRecognized & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: words
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.words.size() == 0) {
      out << "words: []\n";
    } else {
      out << "words:\n";
      for (auto item : msg.words) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confidence_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confidence_values.size() == 0) {
      out << "confidence_values: []\n";
    } else {
      out << "confidence_values:\n";
      for (auto item : msg.confidence_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WordRecognized & msg, bool use_flow_style = false)
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

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::msg::WordRecognized & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::msg::WordRecognized & msg)
{
  return naoqi_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::msg::WordRecognized>()
{
  return "naoqi_bridge_msgs::msg::WordRecognized";
}

template<>
inline const char * name<naoqi_bridge_msgs::msg::WordRecognized>()
{
  return "naoqi_bridge_msgs/msg/WordRecognized";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::msg::WordRecognized>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::msg::WordRecognized>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naoqi_bridge_msgs::msg::WordRecognized>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__WORD_RECOGNIZED__TRAITS_HPP_
