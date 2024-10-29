// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:msg/StatusChangeStamped.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/msg/detail/status_change_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `old_status`
// Member `new_status`
#include "std_msgs/msg/detail/string__functions.h"

bool
naoqi_bridge_msgs__msg__StatusChangeStamped__init(naoqi_bridge_msgs__msg__StatusChangeStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    naoqi_bridge_msgs__msg__StatusChangeStamped__fini(msg);
    return false;
  }
  // recharge_type
  // old_status
  if (!std_msgs__msg__String__init(&msg->old_status)) {
    naoqi_bridge_msgs__msg__StatusChangeStamped__fini(msg);
    return false;
  }
  // new_status
  if (!std_msgs__msg__String__init(&msg->new_status)) {
    naoqi_bridge_msgs__msg__StatusChangeStamped__fini(msg);
    return false;
  }
  return true;
}

void
naoqi_bridge_msgs__msg__StatusChangeStamped__fini(naoqi_bridge_msgs__msg__StatusChangeStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // recharge_type
  // old_status
  std_msgs__msg__String__fini(&msg->old_status);
  // new_status
  std_msgs__msg__String__fini(&msg->new_status);
}

bool
naoqi_bridge_msgs__msg__StatusChangeStamped__are_equal(const naoqi_bridge_msgs__msg__StatusChangeStamped * lhs, const naoqi_bridge_msgs__msg__StatusChangeStamped * rhs)
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
  // recharge_type
  if (lhs->recharge_type != rhs->recharge_type) {
    return false;
  }
  // old_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->old_status), &(rhs->old_status)))
  {
    return false;
  }
  // new_status
  if (!std_msgs__msg__String__are_equal(
      &(lhs->new_status), &(rhs->new_status)))
  {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__StatusChangeStamped__copy(
  const naoqi_bridge_msgs__msg__StatusChangeStamped * input,
  naoqi_bridge_msgs__msg__StatusChangeStamped * output)
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
  // recharge_type
  output->recharge_type = input->recharge_type;
  // old_status
  if (!std_msgs__msg__String__copy(
      &(input->old_status), &(output->old_status)))
  {
    return false;
  }
  // new_status
  if (!std_msgs__msg__String__copy(
      &(input->new_status), &(output->new_status)))
  {
    return false;
  }
  return true;
}

naoqi_bridge_msgs__msg__StatusChangeStamped *
naoqi_bridge_msgs__msg__StatusChangeStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__StatusChangeStamped * msg = (naoqi_bridge_msgs__msg__StatusChangeStamped *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__StatusChangeStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__msg__StatusChangeStamped));
  bool success = naoqi_bridge_msgs__msg__StatusChangeStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__msg__StatusChangeStamped__destroy(naoqi_bridge_msgs__msg__StatusChangeStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__msg__StatusChangeStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__init(naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__StatusChangeStamped * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__msg__StatusChangeStamped *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__msg__StatusChangeStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__msg__StatusChangeStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__msg__StatusChangeStamped__fini(&data[i - 1]);
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
naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__fini(naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * array)
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
      naoqi_bridge_msgs__msg__StatusChangeStamped__fini(&array->data[i]);
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

naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence *
naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * array = (naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__destroy(naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__are_equal(const naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * lhs, const naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__msg__StatusChangeStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence__copy(
  const naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * input,
  naoqi_bridge_msgs__msg__StatusChangeStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__msg__StatusChangeStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__msg__StatusChangeStamped * data =
      (naoqi_bridge_msgs__msg__StatusChangeStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__msg__StatusChangeStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__msg__StatusChangeStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__msg__StatusChangeStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
