// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:msg/AudioBuffer.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__msg__AudioBuffer __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__msg__AudioBuffer __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioBuffer_
{
  using Type = AudioBuffer_<ContainerAllocator>;

  explicit AudioBuffer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0;
    }
  }

  explicit AudioBuffer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frequency_type =
    uint16_t;
  _frequency_type frequency;
  using _channel_map_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _channel_map_type channel_map;
  using _data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__frequency(
    const uint16_t & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__channel_map(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->channel_map = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CHANNEL_FRONT_LEFT =
    0u;
  static constexpr uint8_t CHANNEL_FRONT_CENTER =
    1u;
  static constexpr uint8_t CHANNEL_FRONT_RIGHT =
    2u;
  static constexpr uint8_t CHANNEL_REAR_LEFT =
    3u;
  static constexpr uint8_t CHANNEL_REAR_CENTER =
    4u;
  static constexpr uint8_t CHANNEL_REAR_RIGHT =
    5u;
  static constexpr uint8_t CHANNEL_SURROUND_LEFT =
    6u;
  static constexpr uint8_t CHANNEL_SURROUND_RIGHT =
    7u;
  static constexpr uint8_t CHANNEL_SUBWOOFER =
    8u;
  static constexpr uint8_t CHANNEL_LFE =
    9u;

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__msg__AudioBuffer
    std::shared_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__msg__AudioBuffer
    std::shared_ptr<naoqi_bridge_msgs::msg::AudioBuffer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioBuffer_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->channel_map != other.channel_map) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioBuffer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioBuffer_

// alias to use template instance with default allocator
using AudioBuffer =
  naoqi_bridge_msgs::msg::AudioBuffer_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_FRONT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_FRONT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_FRONT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_REAR_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_REAR_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_REAR_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_SURROUND_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_SURROUND_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_SUBWOOFER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AudioBuffer_<ContainerAllocator>::CHANNEL_LFE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__MSG__DETAIL__AUDIO_BUFFER__STRUCT_HPP_
