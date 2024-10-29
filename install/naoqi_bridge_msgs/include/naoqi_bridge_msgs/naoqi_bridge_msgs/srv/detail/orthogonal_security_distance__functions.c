// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from naoqi_bridge_msgs:srv/OrthogonalSecurityDistance.idl
// generated code does not contain a copyright notice
#include "naoqi_bridge_msgs/srv/detail/orthogonal_security_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `orthogonal_distance`
#include "std_msgs/msg/detail/float32__functions.h"

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__init(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // orthogonal_distance
  if (!std_msgs__msg__Float32__init(&msg->orthogonal_distance)) {
    naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__fini(msg);
    return false;
  }
  return true;
}

void
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__fini(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * msg)
{
  if (!msg) {
    return;
  }
  // orthogonal_distance
  std_msgs__msg__Float32__fini(&msg->orthogonal_distance);
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__are_equal(const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * lhs, const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // orthogonal_distance
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->orthogonal_distance), &(rhs->orthogonal_distance)))
  {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__copy(
  const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * input,
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // orthogonal_distance
  if (!std_msgs__msg__Float32__copy(
      &(input->orthogonal_distance), &(output->orthogonal_distance)))
  {
    return false;
  }
  return true;
}

naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request *
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * msg = (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request *)allocator.allocate(sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request));
  bool success = naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__destroy(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__init(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__fini(&data[i - 1]);
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
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__fini(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * array)
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
      naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__fini(&array->data[i]);
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

naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence *
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * array = (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__destroy(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__are_equal(const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * lhs, const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence__copy(
  const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * input,
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request * data =
      (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__init(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__fini(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__are_equal(const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * lhs, const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__copy(
  const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * input,
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response *
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * msg = (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response *)allocator.allocate(sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response));
  bool success = naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__destroy(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__init(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * data = NULL;

  if (size) {
    data = (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response *)allocator.zero_allocate(size, sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__fini(&data[i - 1]);
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
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__fini(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * array)
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
      naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__fini(&array->data[i]);
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

naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence *
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * array = (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence *)allocator.allocate(sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__destroy(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__are_equal(const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * lhs, const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence__copy(
  const naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * input,
  naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response * data =
      (naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!naoqi_bridge_msgs__srv__OrthogonalSecurityDistance_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
