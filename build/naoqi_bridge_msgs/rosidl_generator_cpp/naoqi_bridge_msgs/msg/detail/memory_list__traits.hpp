// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/msg/detail/memory_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'strings'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_string__traits.hpp"
// Member 'ints'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_int__traits.hpp"
// Member 'floats'
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__traits.hpp"

namespace naoqi_bridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MemoryList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: strings
  {
    if (msg.strings.size() == 0) {
      out << "strings: []";
    } else {
      out << "strings: [";
      size_t pending_items = msg.strings.size();
      for (auto item : msg.strings) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ints
  {
    if (msg.ints.size() == 0) {
      out << "ints: []";
    } else {
      out << "ints: [";
      size_t pending_items = msg.ints.size();
      for (auto item : msg.ints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: floats
  {
    if (msg.floats.size() == 0) {
      out << "floats: []";
    } else {
      out << "floats: [";
      size_t pending_items = msg.floats.size();
      for (auto item : msg.floats) {
        to_flow_style_yaml(item, out);
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
  const MemoryList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: strings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.strings.size() == 0) {
      out << "strings: []\n";
    } else {
      out << "strings:\n";
      for (auto item : msg.strings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ints.size() == 0) {
      out << "ints: []\n";
    } else {
      out << "ints:\n";
      for (auto item : msg.ints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: floats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.floats.size() == 0) {
      out << "floats: []\n";
    } else {
      out << "floats:\n";
      for (auto item : msg.floats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MemoryList & msg, bool use_flow_style = false)
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
  const naoqi_bridge_msgs::msg::MemoryList & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::msg::MemoryList & msg)
{
  return naoqi_bridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::msg::MemoryList>()
{
  return "naoqi_bridge_msgs::msg::MemoryList";
}

template<>
inline const char * name<naoqi_bridge_msgs::msg::MemoryList>()
{
  return "naoqi_bridge_msgs/msg/MemoryList";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::msg::MemoryList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::msg::MemoryList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naoqi_bridge_msgs::msg::MemoryList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__MEMORY_LIST__TRAITS_HPP_
