// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from naoqi_bridge_msgs:action/SetSpeechVocabulary.idl
// generated code does not contain a copyright notice

#ifndef NAOQI_BRIDGE_MSGS__ACTION__DETAIL__SET_SPEECH_VOCABULARY__BUILDER_HPP_
#define NAOQI_BRIDGE_MSGS__ACTION__DETAIL__SET_SPEECH_VOCABULARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "naoqi_bridge_msgs/action/detail/set_speech_vocabulary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_SetSpeechVocabulary_Goal_words
{
public:
  Init_SetSpeechVocabulary_Goal_words()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_Goal words(::naoqi_bridge_msgs::action::SetSpeechVocabulary_Goal::_words_type arg)
  {
    msg_.words = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_Goal>()
{
  return naoqi_bridge_msgs::action::builder::Init_SetSpeechVocabulary_Goal_words();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_SetSpeechVocabulary_Result_success
{
public:
  Init_SetSpeechVocabulary_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_Result success(::naoqi_bridge_msgs::action::SetSpeechVocabulary_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_Result>()
{
  return naoqi_bridge_msgs::action::builder::Init_SetSpeechVocabulary_Result_success();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_Feedback>()
{
  return ::naoqi_bridge_msgs::action::SetSpeechVocabulary_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_SetSpeechVocabulary_SendGoal_Request_goal
{
public:
  explicit Init_SetSpeechVocabulary_SendGoal_Request_goal(::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Request goal(::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Request msg_;
};

class Init_SetSpeechVocabulary_SendGoal_Request_goal_id
{
public:
  Init_SetSpeechVocabulary_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeechVocabulary_SendGoal_Request_goal goal_id(::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetSpeechVocabulary_SendGoal_Request_goal(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Request>()
{
  return naoqi_bridge_msgs::action::builder::Init_SetSpeechVocabulary_SendGoal_Request_goal_id();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_SetSpeechVocabulary_SendGoal_Response_stamp
{
public:
  explicit Init_SetSpeechVocabulary_SendGoal_Response_stamp(::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Response stamp(::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Response msg_;
};

class Init_SetSpeechVocabulary_SendGoal_Response_accepted
{
public:
  Init_SetSpeechVocabulary_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeechVocabulary_SendGoal_Response_stamp accepted(::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetSpeechVocabulary_SendGoal_Response_stamp(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_SendGoal_Response>()
{
  return naoqi_bridge_msgs::action::builder::Init_SetSpeechVocabulary_SendGoal_Response_accepted();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_SetSpeechVocabulary_GetResult_Request_goal_id
{
public:
  Init_SetSpeechVocabulary_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Request goal_id(::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Request>()
{
  return naoqi_bridge_msgs::action::builder::Init_SetSpeechVocabulary_GetResult_Request_goal_id();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_SetSpeechVocabulary_GetResult_Response_result
{
public:
  explicit Init_SetSpeechVocabulary_GetResult_Response_result(::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Response result(::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Response msg_;
};

class Init_SetSpeechVocabulary_GetResult_Response_status
{
public:
  Init_SetSpeechVocabulary_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeechVocabulary_GetResult_Response_result status(::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetSpeechVocabulary_GetResult_Response_result(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_GetResult_Response>()
{
  return naoqi_bridge_msgs::action::builder::Init_SetSpeechVocabulary_GetResult_Response_status();
}

}  // namespace naoqi_bridge_msgs


namespace naoqi_bridge_msgs
{

namespace action
{

namespace builder
{

class Init_SetSpeechVocabulary_FeedbackMessage_feedback
{
public:
  explicit Init_SetSpeechVocabulary_FeedbackMessage_feedback(::naoqi_bridge_msgs::action::SetSpeechVocabulary_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_FeedbackMessage feedback(::naoqi_bridge_msgs::action::SetSpeechVocabulary_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_FeedbackMessage msg_;
};

class Init_SetSpeechVocabulary_FeedbackMessage_goal_id
{
public:
  Init_SetSpeechVocabulary_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeechVocabulary_FeedbackMessage_feedback goal_id(::naoqi_bridge_msgs::action::SetSpeechVocabulary_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetSpeechVocabulary_FeedbackMessage_feedback(msg_);
  }

private:
  ::naoqi_bridge_msgs::action::SetSpeechVocabulary_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::naoqi_bridge_msgs::action::SetSpeechVocabulary_FeedbackMessage>()
{
  return naoqi_bridge_msgs::action::builder::Init_SetSpeechVocabulary_FeedbackMessage_goal_id();
}

}  // namespace naoqi_bridge_msgs

#endif  // NAOQI_BRIDGE_MSGS__ACTION__DETAIL__SET_SPEECH_VOCABULARY__BUILDER_HPP_
