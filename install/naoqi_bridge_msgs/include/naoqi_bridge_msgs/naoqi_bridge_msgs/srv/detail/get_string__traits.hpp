// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from naoqi_bridge_msgs:srv/GetString.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_STRING__TRAITS_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "naoqi_bridge_msgs/srv/detail/get_string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace naoqi_bridge_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetString_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetString_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::srv::GetString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::srv::GetString_Request & msg)
{
  return naoqi_bridge_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::srv::GetString_Request>()
{
  return "naoqi_bridge_msgs::srv::GetString_Request";
}

template<>
inline const char * name<naoqi_bridge_msgs::srv::GetString_Request>()
{
  return "naoqi_bridge_msgs/srv/GetString_Request";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::srv::GetString_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::srv::GetString_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<naoqi_bridge_msgs::srv::GetString_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace naoqi_bridge_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetString_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetString_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetString_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use naoqi_bridge_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const naoqi_bridge_msgs::srv::GetString_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  naoqi_bridge_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use naoqi_bridge_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const naoqi_bridge_msgs::srv::GetString_Response & msg)
{
  return naoqi_bridge_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<naoqi_bridge_msgs::srv::GetString_Response>()
{
  return "naoqi_bridge_msgs::srv::GetString_Response";
}

template<>
inline const char * name<naoqi_bridge_msgs::srv::GetString_Response>()
{
  return "naoqi_bridge_msgs/srv/GetString_Response";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::srv::GetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<naoqi_bridge_msgs::srv::GetString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<naoqi_bridge_msgs::srv::GetString_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<naoqi_bridge_msgs::srv::GetString>()
{
  return "naoqi_bridge_msgs::srv::GetString";
}

template<>
inline const char * name<naoqi_bridge_msgs::srv::GetString>()
{
  return "naoqi_bridge_msgs/srv/GetString";
}

template<>
struct has_fixed_size<naoqi_bridge_msgs::srv::GetString>
  : std::integral_constant<
    bool,
    has_fixed_size<naoqi_bridge_msgs::srv::GetString_Request>::value &&
    has_fixed_size<naoqi_bridge_msgs::srv::GetString_Response>::value
  >
{
};

template<>
struct has_bounded_size<naoqi_bridge_msgs::srv::GetString>
  : std::integral_constant<
    bool,
    has_bounded_size<naoqi_bridge_msgs::srv::GetString_Request>::value &&
    has_bounded_size<naoqi_bridge_msgs::srv::GetString_Response>::value
  >
{
};

template<>
struct is_service<naoqi_bridge_msgs::srv::GetString>
  : std::true_type
{
};

template<>
struct is_service_request<naoqi_bridge_msgs::srv::GetString_Request>
  : std::true_type
{
};

template<>
struct is_service_response<naoqi_bridge_msgs::srv::GetString_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_STRING__TRAITS_HPP_
