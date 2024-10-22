// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:msg/PoseWithConfidenceStamped.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/pose_with_confidence_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__init(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__fini(msg);
    return false;
  }
  // confidence_index
  return true;
}

void
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__fini(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // confidence_index
}

bool
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__are_equal(const naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * lhs, const naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // confidence_index
  if (lhs->confidence_index != rhs->confidence_index) {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__copy(
  const naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * input,
  naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // confidence_index
  output->confidence_index = input->confidence_index;
  return true;
}

naoqi_bridge_msgs__msg__PoseWithConfidenceStamped *
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * msg = (naoqi_bridge_msgs__msg__PoseWithConfidenceStamped *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped));
  bool success = naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__destroy(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__init(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__msg__PoseWithConfidenceStamped *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__fini(&data[i - 1]);
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
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__fini(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * array)
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
      naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__fini(&array->data[i]);
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

naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence *
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * array = (naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__destroy(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__are_equal(const naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * lhs, const naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence__copy(
  const naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * input,
  naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__msg__PoseWithConfidenceStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__msg__PoseWithConfidenceStamped * data =
      (naoqi_bridge_msgs__msg__PoseWithConfidenceStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__msg__PoseWithConfidenceStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
