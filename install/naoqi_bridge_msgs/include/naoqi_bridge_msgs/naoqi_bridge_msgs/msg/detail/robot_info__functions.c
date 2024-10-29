// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/robot_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `model`
// Member `head_version`
// Member `body_version`
// Member `arm_version`
#include "rosidl_runtime_c/string_functions.h"

bool
naoqi_bridge_msgs__msg__RobotInfo__init(naoqi_bridge_msgs__msg__RobotInfo * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    naoqi_bridge_msgs__msg__RobotInfo__fini(msg);
    return false;
  }
  // head_version
  if (!rosidl_runtime_c__String__init(&msg->head_version)) {
    naoqi_bridge_msgs__msg__RobotInfo__fini(msg);
    return false;
  }
  // body_version
  if (!rosidl_runtime_c__String__init(&msg->body_version)) {
    naoqi_bridge_msgs__msg__RobotInfo__fini(msg);
    return false;
  }
  // arm_version
  if (!rosidl_runtime_c__String__init(&msg->arm_version)) {
    naoqi_bridge_msgs__msg__RobotInfo__fini(msg);
    return false;
  }
  // has_laser
  // has_extended_arms
  // number_of_legs
  // number_of_arms
  // number_of_hands
  return true;
}

void
naoqi_bridge_msgs__msg__RobotInfo__fini(naoqi_bridge_msgs__msg__RobotInfo * msg)
{
  if (!msg) {
    return;
  }
  // type
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // head_version
  rosidl_runtime_c__String__fini(&msg->head_version);
  // body_version
  rosidl_runtime_c__String__fini(&msg->body_version);
  // arm_version
  rosidl_runtime_c__String__fini(&msg->arm_version);
  // has_laser
  // has_extended_arms
  // number_of_legs
  // number_of_arms
  // number_of_hands
}

bool
naoqi_bridge_msgs__msg__RobotInfo__are_equal(const naoqi_bridge_msgs__msg__RobotInfo * lhs, const naoqi_bridge_msgs__msg__RobotInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // head_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->head_version), &(rhs->head_version)))
  {
    return false;
  }
  // body_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_version), &(rhs->body_version)))
  {
    return false;
  }
  // arm_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arm_version), &(rhs->arm_version)))
  {
    return false;
  }
  // has_laser
  if (lhs->has_laser != rhs->has_laser) {
    return false;
  }
  // has_extended_arms
  if (lhs->has_extended_arms != rhs->has_extended_arms) {
    return false;
  }
  // number_of_legs
  if (lhs->number_of_legs != rhs->number_of_legs) {
    return false;
  }
  // number_of_arms
  if (lhs->number_of_arms != rhs->number_of_arms) {
    return false;
  }
  // number_of_hands
  if (lhs->number_of_hands != rhs->number_of_hands) {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__RobotInfo__copy(
  const naoqi_bridge_msgs__msg__RobotInfo * input,
  naoqi_bridge_msgs__msg__RobotInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // head_version
  if (!rosidl_runtime_c__String__copy(
      &(input->head_version), &(output->head_version)))
  {
    return false;
  }
  // body_version
  if (!rosidl_runtime_c__String__copy(
      &(input->body_version), &(output->body_version)))
  {
    return false;
  }
  // arm_version
  if (!rosidl_runtime_c__String__copy(
      &(input->arm_version), &(output->arm_version)))
  {
    return false;
  }
  // has_laser
  output->has_laser = input->has_laser;
  // has_extended_arms
  output->has_extended_arms = input->has_extended_arms;
  // number_of_legs
  output->number_of_legs = input->number_of_legs;
  // number_of_arms
  output->number_of_arms = input->number_of_arms;
  // number_of_hands
  output->number_of_hands = input->number_of_hands;
  return true;
}

naoqi_bridge_msgs__msg__RobotInfo *
naoqi_bridge_msgs__msg__RobotInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__RobotInfo * msg = (naoqi_bridge_msgs__msg__RobotInfo *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__RobotInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__msg__RobotInfo));
  bool success = naoqi_bridge_msgs__msg__RobotInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__msg__RobotInfo__destroy(naoqi_bridge_msgs__msg__RobotInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__msg__RobotInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__msg__RobotInfo__Sequence__init(naoqi_bridge_msgs__msg__RobotInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__RobotInfo * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__msg__RobotInfo *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__msg__RobotInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__msg__RobotInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__msg__RobotInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
naoqi_bridge_msgs__msg__RobotInfo__Sequence__fini(naoqi_bridge_msgs__msg__RobotInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      naoqi_bridge_msgs__msg__RobotInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

naoqi_bridge_msgs__msg__RobotInfo__Sequence *
naoqi_bridge_msgs__msg__RobotInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__RobotInfo__Sequence * array = (naoqi_bridge_msgs__msg__RobotInfo__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__RobotInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__msg__RobotInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__msg__RobotInfo__Sequence__destroy(naoqi_bridge_msgs__msg__RobotInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__msg__RobotInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__msg__RobotInfo__Sequence__are_equal(const naoqi_bridge_msgs__msg__RobotInfo__Sequence * lhs, const naoqi_bridge_msgs__msg__RobotInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__msg__RobotInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__RobotInfo__Sequence__copy(
  const naoqi_bridge_msgs__msg__RobotInfo__Sequence * input,
  naoqi_bridge_msgs__msg__RobotInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__msg__RobotInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__msg__RobotInfo * data =
      (naoqi_bridge_msgs__msg__RobotInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__msg__RobotInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__msg__RobotInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__msg__RobotInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
