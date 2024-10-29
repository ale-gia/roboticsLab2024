// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:msg/FadeRGB.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/fade_rgb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `led_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `fade_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
naoqi_bridge_msgs__msg__FadeRGB__init(naoqi_bridge_msgs__msg__FadeRGB * msg)
{
  if (!msg) {
    return false;
  }
  // led_name
  if (!rosidl_runtime_c__String__init(&msg->led_name)) {
    naoqi_bridge_msgs__msg__FadeRGB__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    naoqi_bridge_msgs__msg__FadeRGB__fini(msg);
    return false;
  }
  // fade_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->fade_duration)) {
    naoqi_bridge_msgs__msg__FadeRGB__fini(msg);
    return false;
  }
  return true;
}

void
naoqi_bridge_msgs__msg__FadeRGB__fini(naoqi_bridge_msgs__msg__FadeRGB * msg)
{
  if (!msg) {
    return;
  }
  // led_name
  rosidl_runtime_c__String__fini(&msg->led_name);
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
  // fade_duration
  builtin_interfaces__msg__Duration__fini(&msg->fade_duration);
}

bool
naoqi_bridge_msgs__msg__FadeRGB__are_equal(const naoqi_bridge_msgs__msg__FadeRGB * lhs, const naoqi_bridge_msgs__msg__FadeRGB * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->led_name), &(rhs->led_name)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // fade_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->fade_duration), &(rhs->fade_duration)))
  {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__FadeRGB__copy(
  const naoqi_bridge_msgs__msg__FadeRGB * input,
  naoqi_bridge_msgs__msg__FadeRGB * output)
{
  if (!input || !output) {
    return false;
  }
  // led_name
  if (!rosidl_runtime_c__String__copy(
      &(input->led_name), &(output->led_name)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // fade_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->fade_duration), &(output->fade_duration)))
  {
    return false;
  }
  return true;
}

naoqi_bridge_msgs__msg__FadeRGB *
naoqi_bridge_msgs__msg__FadeRGB__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__FadeRGB * msg = (naoqi_bridge_msgs__msg__FadeRGB *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__FadeRGB), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__msg__FadeRGB));
  bool success = naoqi_bridge_msgs__msg__FadeRGB__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__msg__FadeRGB__destroy(naoqi_bridge_msgs__msg__FadeRGB * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__msg__FadeRGB__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__msg__FadeRGB__Sequence__init(naoqi_bridge_msgs__msg__FadeRGB__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__FadeRGB * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__msg__FadeRGB *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__msg__FadeRGB), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__msg__FadeRGB__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__msg__FadeRGB__fini(&data[i - 1]);
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
naoqi_bridge_msgs__msg__FadeRGB__Sequence__fini(naoqi_bridge_msgs__msg__FadeRGB__Sequence * array)
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
      naoqi_bridge_msgs__msg__FadeRGB__fini(&array->data[i]);
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

naoqi_bridge_msgs__msg__FadeRGB__Sequence *
naoqi_bridge_msgs__msg__FadeRGB__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__FadeRGB__Sequence * array = (naoqi_bridge_msgs__msg__FadeRGB__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__FadeRGB__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__msg__FadeRGB__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__msg__FadeRGB__Sequence__destroy(naoqi_bridge_msgs__msg__FadeRGB__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__msg__FadeRGB__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__msg__FadeRGB__Sequence__are_equal(const naoqi_bridge_msgs__msg__FadeRGB__Sequence * lhs, const naoqi_bridge_msgs__msg__FadeRGB__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__msg__FadeRGB__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__FadeRGB__Sequence__copy(
  const naoqi_bridge_msgs__msg__FadeRGB__Sequence * input,
  naoqi_bridge_msgs__msg__FadeRGB__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__msg__FadeRGB);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__msg__FadeRGB * data =
      (naoqi_bridge_msgs__msg__FadeRGB *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__msg__FadeRGB__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__msg__FadeRGB__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__msg__FadeRGB__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
