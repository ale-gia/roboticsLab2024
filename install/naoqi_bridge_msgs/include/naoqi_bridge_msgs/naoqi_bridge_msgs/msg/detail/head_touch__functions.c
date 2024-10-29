// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:msg/HeadTouch.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/head_touch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
naoqi_bridge_msgs__msg__HeadTouch__init(naoqi_bridge_msgs__msg__HeadTouch * msg)
{
  if (!msg) {
    return false;
  }
  // button
  // state
  return true;
}

void
naoqi_bridge_msgs__msg__HeadTouch__fini(naoqi_bridge_msgs__msg__HeadTouch * msg)
{
  if (!msg) {
    return;
  }
  // button
  // state
}

bool
naoqi_bridge_msgs__msg__HeadTouch__are_equal(const naoqi_bridge_msgs__msg__HeadTouch * lhs, const naoqi_bridge_msgs__msg__HeadTouch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // button
  if (lhs->button != rhs->button) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__HeadTouch__copy(
  const naoqi_bridge_msgs__msg__HeadTouch * input,
  naoqi_bridge_msgs__msg__HeadTouch * output)
{
  if (!input || !output) {
    return false;
  }
  // button
  output->button = input->button;
  // state
  output->state = input->state;
  return true;
}

naoqi_bridge_msgs__msg__HeadTouch *
naoqi_bridge_msgs__msg__HeadTouch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__HeadTouch * msg = (naoqi_bridge_msgs__msg__HeadTouch *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__HeadTouch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__msg__HeadTouch));
  bool success = naoqi_bridge_msgs__msg__HeadTouch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__msg__HeadTouch__destroy(naoqi_bridge_msgs__msg__HeadTouch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__msg__HeadTouch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__msg__HeadTouch__Sequence__init(naoqi_bridge_msgs__msg__HeadTouch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__HeadTouch * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__msg__HeadTouch *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__msg__HeadTouch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__msg__HeadTouch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__msg__HeadTouch__fini(&data[i - 1]);
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
naoqi_bridge_msgs__msg__HeadTouch__Sequence__fini(naoqi_bridge_msgs__msg__HeadTouch__Sequence * array)
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
      naoqi_bridge_msgs__msg__HeadTouch__fini(&array->data[i]);
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

naoqi_bridge_msgs__msg__HeadTouch__Sequence *
naoqi_bridge_msgs__msg__HeadTouch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__HeadTouch__Sequence * array = (naoqi_bridge_msgs__msg__HeadTouch__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__HeadTouch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__msg__HeadTouch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__msg__HeadTouch__Sequence__destroy(naoqi_bridge_msgs__msg__HeadTouch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__msg__HeadTouch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__msg__HeadTouch__Sequence__are_equal(const naoqi_bridge_msgs__msg__HeadTouch__Sequence * lhs, const naoqi_bridge_msgs__msg__HeadTouch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__msg__HeadTouch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__HeadTouch__Sequence__copy(
  const naoqi_bridge_msgs__msg__HeadTouch__Sequence * input,
  naoqi_bridge_msgs__msg__HeadTouch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__msg__HeadTouch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__msg__HeadTouch * data =
      (naoqi_bridge_msgs__msg__HeadTouch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__msg__HeadTouch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__msg__HeadTouch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__msg__HeadTouch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
