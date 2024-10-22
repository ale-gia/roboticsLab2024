// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:msg/MemoryList.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/memory_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `strings`
#include "naoqi_bridge_msgs/msg/detail/memory_pair_string__functions.h"
// Member `ints`
#include "naoqi_bridge_msgs/msg/detail/memory_pair_int__functions.h"
// Member `floats`
#include "naoqi_bridge_msgs/msg/detail/memory_pair_float__functions.h"

bool
naoqi_bridge_msgs__msg__MemoryList__init(naoqi_bridge_msgs__msg__MemoryList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    naoqi_bridge_msgs__msg__MemoryList__fini(msg);
    return false;
  }
  // strings
  if (!naoqi_bridge_msgs__msg__MemoryPairString__Sequence__init(&msg->strings, 0)) {
    naoqi_bridge_msgs__msg__MemoryList__fini(msg);
    return false;
  }
  // ints
  if (!naoqi_bridge_msgs__msg__MemoryPairInt__Sequence__init(&msg->ints, 0)) {
    naoqi_bridge_msgs__msg__MemoryList__fini(msg);
    return false;
  }
  // floats
  if (!naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence__init(&msg->floats, 0)) {
    naoqi_bridge_msgs__msg__MemoryList__fini(msg);
    return false;
  }
  return true;
}

void
naoqi_bridge_msgs__msg__MemoryList__fini(naoqi_bridge_msgs__msg__MemoryList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // strings
  naoqi_bridge_msgs__msg__MemoryPairString__Sequence__fini(&msg->strings);
  // ints
  naoqi_bridge_msgs__msg__MemoryPairInt__Sequence__fini(&msg->ints);
  // floats
  naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence__fini(&msg->floats);
}

bool
naoqi_bridge_msgs__msg__MemoryList__are_equal(const naoqi_bridge_msgs__msg__MemoryList * lhs, const naoqi_bridge_msgs__msg__MemoryList * rhs)
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
  // strings
  if (!naoqi_bridge_msgs__msg__MemoryPairString__Sequence__are_equal(
      &(lhs->strings), &(rhs->strings)))
  {
    return false;
  }
  // ints
  if (!naoqi_bridge_msgs__msg__MemoryPairInt__Sequence__are_equal(
      &(lhs->ints), &(rhs->ints)))
  {
    return false;
  }
  // floats
  if (!naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence__are_equal(
      &(lhs->floats), &(rhs->floats)))
  {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__MemoryList__copy(
  const naoqi_bridge_msgs__msg__MemoryList * input,
  naoqi_bridge_msgs__msg__MemoryList * output)
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
  // strings
  if (!naoqi_bridge_msgs__msg__MemoryPairString__Sequence__copy(
      &(input->strings), &(output->strings)))
  {
    return false;
  }
  // ints
  if (!naoqi_bridge_msgs__msg__MemoryPairInt__Sequence__copy(
      &(input->ints), &(output->ints)))
  {
    return false;
  }
  // floats
  if (!naoqi_bridge_msgs__msg__MemoryPairFloat__Sequence__copy(
      &(input->floats), &(output->floats)))
  {
    return false;
  }
  return true;
}

naoqi_bridge_msgs__msg__MemoryList *
naoqi_bridge_msgs__msg__MemoryList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__MemoryList * msg = (naoqi_bridge_msgs__msg__MemoryList *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__MemoryList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__msg__MemoryList));
  bool success = naoqi_bridge_msgs__msg__MemoryList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__msg__MemoryList__destroy(naoqi_bridge_msgs__msg__MemoryList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__msg__MemoryList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__msg__MemoryList__Sequence__init(naoqi_bridge_msgs__msg__MemoryList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__MemoryList * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__msg__MemoryList *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__msg__MemoryList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__msg__MemoryList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__msg__MemoryList__fini(&data[i - 1]);
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
naoqi_bridge_msgs__msg__MemoryList__Sequence__fini(naoqi_bridge_msgs__msg__MemoryList__Sequence * array)
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
      naoqi_bridge_msgs__msg__MemoryList__fini(&array->data[i]);
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

naoqi_bridge_msgs__msg__MemoryList__Sequence *
naoqi_bridge_msgs__msg__MemoryList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__MemoryList__Sequence * array = (naoqi_bridge_msgs__msg__MemoryList__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__MemoryList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__msg__MemoryList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__msg__MemoryList__Sequence__destroy(naoqi_bridge_msgs__msg__MemoryList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__msg__MemoryList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__msg__MemoryList__Sequence__are_equal(const naoqi_bridge_msgs__msg__MemoryList__Sequence * lhs, const naoqi_bridge_msgs__msg__MemoryList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__msg__MemoryList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__MemoryList__Sequence__copy(
  const naoqi_bridge_msgs__msg__MemoryList__Sequence * input,
  naoqi_bridge_msgs__msg__MemoryList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__msg__MemoryList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__msg__MemoryList * data =
      (naoqi_bridge_msgs__msg__MemoryList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__msg__MemoryList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__msg__MemoryList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__msg__MemoryList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
