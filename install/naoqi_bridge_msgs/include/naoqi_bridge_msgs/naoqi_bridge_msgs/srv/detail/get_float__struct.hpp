// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from naoqi_bridge_msgs:srv/GetFloat.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FLOAT__STRUCT_HPP_
#define NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FLOAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Request __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Request __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFloat_Request_
{
  using Type = GetFloat_Request_<ContainerAllocator>;

  explicit GetFloat_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetFloat_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Request
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFloat_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFloat_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFloat_Request_

// alias to use template instance with default allocator
using GetFloat_Request =
  naoqi_bridge_msgs::srv::GetFloat_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs


#ifndef _WIN32
# define DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Response __attribute__((deprecated))
#else
# define DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Response __declspec(deprecated)
#endif

namespace naoqi_bridge_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFloat_Response_
{
  using Type = GetFloat_Response_<ContainerAllocator>;

  explicit GetFloat_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
      this->message = "";
    }
  }

  explicit GetFloat_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
      this->message = "";
    }
  }

  // field types and members
  using _data_type =
    float;
  _data_type data;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__data(
    const float & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__naoqi_bridge_msgs__srv__GetFloat_Response
    std::shared_ptr<naoqi_bridge_msgs::srv::GetFloat_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFloat_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFloat_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFloat_Response_

// alias to use template instance with default allocator
using GetFloat_Response =
  naoqi_bridge_msgs::srv::GetFloat_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace naoqi_bridge_msgs

namespace naoqi_bridge_msgs
{

namespace srv
{

struct GetFloat
{
  using Request = naoqi_bridge_msgs::srv::GetFloat_Request;
  using Response = naoqi_bridge_msgs::srv::GetFloat_Response;
};

}  // namespace srv

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__SRV__DETAIL__GET_FLOAT__STRUCT_HPP_
