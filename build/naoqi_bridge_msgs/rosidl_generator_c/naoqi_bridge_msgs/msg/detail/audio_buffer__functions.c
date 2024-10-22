// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:msg/AudioBuffer.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/audio_buffer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `channel_map`
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
naoqi_bridge_msgs__msg__AudioBuffer__init(naoqi_bridge_msgs__msg__AudioBuffer * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    naoqi_bridge_msgs__msg__AudioBuffer__fini(msg);
    return false;
  }
  // frequency
  // channel_map
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->channel_map, 0)) {
    naoqi_bridge_msgs__msg__AudioBuffer__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->data, 0)) {
    naoqi_bridge_msgs__msg__AudioBuffer__fini(msg);
    return false;
  }
  return true;
}

void
naoqi_bridge_msgs__msg__AudioBuffer__fini(naoqi_bridge_msgs__msg__AudioBuffer * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frequency
  // channel_map
  rosidl_runtime_c__uint8__Sequence__fini(&msg->channel_map);
  // data
  rosidl_runtime_c__int16__Sequence__fini(&msg->data);
}

bool
naoqi_bridge_msgs__msg__AudioBuffer__are_equal(const naoqi_bridge_msgs__msg__AudioBuffer * lhs, const naoqi_bridge_msgs__msg__AudioBuffer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // channel_map
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->channel_map), &(rhs->channel_map)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__AudioBuffer__copy(
  const naoqi_bridge_msgs__msg__AudioBuffer * input,
  naoqi_bridge_msgs__msg__AudioBuffer * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  // channel_map
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->channel_map), &(output->channel_map)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

naoqi_bridge_msgs__msg__AudioBuffer *
naoqi_bridge_msgs__msg__AudioBuffer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__AudioBuffer * msg = (naoqi_bridge_msgs__msg__AudioBuffer *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__AudioBuffer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__msg__AudioBuffer));
  bool success = naoqi_bridge_msgs__msg__AudioBuffer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__msg__AudioBuffer__destroy(naoqi_bridge_msgs__msg__AudioBuffer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__msg__AudioBuffer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__msg__AudioBuffer__Sequence__init(naoqi_bridge_msgs__msg__AudioBuffer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__AudioBuffer * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__msg__AudioBuffer *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__msg__AudioBuffer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__msg__AudioBuffer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__msg__AudioBuffer__fini(&data[i - 1]);
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
naoqi_bridge_msgs__msg__AudioBuffer__Sequence__fini(naoqi_bridge_msgs__msg__AudioBuffer__Sequence * array)
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
      naoqi_bridge_msgs__msg__AudioBuffer__fini(&array->data[i]);
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

naoqi_bridge_msgs__msg__AudioBuffer__Sequence *
naoqi_bridge_msgs__msg__AudioBuffer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__AudioBuffer__Sequence * array = (naoqi_bridge_msgs__msg__AudioBuffer__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__AudioBuffer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__msg__AudioBuffer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__msg__AudioBuffer__Sequence__destroy(naoqi_bridge_msgs__msg__AudioBuffer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__msg__AudioBuffer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__msg__AudioBuffer__Sequence__are_equal(const naoqi_bridge_msgs__msg__AudioBuffer__Sequence * lhs, const naoqi_bridge_msgs__msg__AudioBuffer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__msg__AudioBuffer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__AudioBuffer__Sequence__copy(
  const naoqi_bridge_msgs__msg__AudioBuffer__Sequence * input,
  naoqi_bridge_msgs__msg__AudioBuffer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__msg__AudioBuffer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__msg__AudioBuffer * data =
      (naoqi_bridge_msgs__msg__AudioBuffer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__msg__AudioBuffer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__msg__AudioBuffer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__msg__AudioBuffer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
