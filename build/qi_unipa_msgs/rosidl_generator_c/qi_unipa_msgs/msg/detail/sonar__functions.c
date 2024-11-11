// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from qi_unipa_msgs:msg/Sonar.idl
// generated code does not contain a copyright notice
#include "qi_unipa_msgs/msg/detail/sonar__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
qi_unipa_msgs__msg__Sonar__init(qi_unipa_msgs__msg__Sonar * msg)
{
  if (!msg) {
    return false;
  }
  // front_sonar
  // back_sonar
  return true;
}

void
qi_unipa_msgs__msg__Sonar__fini(qi_unipa_msgs__msg__Sonar * msg)
{
  if (!msg) {
    return;
  }
  // front_sonar
  // back_sonar
}

bool
qi_unipa_msgs__msg__Sonar__are_equal(const qi_unipa_msgs__msg__Sonar * lhs, const qi_unipa_msgs__msg__Sonar * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_sonar
  if (lhs->front_sonar != rhs->front_sonar) {
    return false;
  }
  // back_sonar
  if (lhs->back_sonar != rhs->back_sonar) {
    return false;
  }
  return true;
}

bool
qi_unipa_msgs__msg__Sonar__copy(
  const qi_unipa_msgs__msg__Sonar * input,
  qi_unipa_msgs__msg__Sonar * output)
{
  if (!input || !output) {
    return false;
  }
  // front_sonar
  output->front_sonar = input->front_sonar;
  // back_sonar
  output->back_sonar = input->back_sonar;
  return true;
}

qi_unipa_msgs__msg__Sonar *
qi_unipa_msgs__msg__Sonar__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qi_unipa_msgs__msg__Sonar * msg = (qi_unipa_msgs__msg__Sonar *)allocator.allocate(sizeof(qi_unipa_msgs__msg__Sonar), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qi_unipa_msgs__msg__Sonar));
  bool success = qi_unipa_msgs__msg__Sonar__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qi_unipa_msgs__msg__Sonar__destroy(qi_unipa_msgs__msg__Sonar * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qi_unipa_msgs__msg__Sonar__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qi_unipa_msgs__msg__Sonar__Sequence__init(qi_unipa_msgs__msg__Sonar__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qi_unipa_msgs__msg__Sonar * data = NULL;

  if (size) {
    data = (qi_unipa_msgs__msg__Sonar *)allocator.zero_allocate(size, sizeof(qi_unipa_msgs__msg__Sonar), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qi_unipa_msgs__msg__Sonar__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qi_unipa_msgs__msg__Sonar__fini(&data[i - 1]);
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
qi_unipa_msgs__msg__Sonar__Sequence__fini(qi_unipa_msgs__msg__Sonar__Sequence * array)
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
      qi_unipa_msgs__msg__Sonar__fini(&array->data[i]);
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

qi_unipa_msgs__msg__Sonar__Sequence *
qi_unipa_msgs__msg__Sonar__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qi_unipa_msgs__msg__Sonar__Sequence * array = (qi_unipa_msgs__msg__Sonar__Sequence *)allocator.allocate(sizeof(qi_unipa_msgs__msg__Sonar__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qi_unipa_msgs__msg__Sonar__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qi_unipa_msgs__msg__Sonar__Sequence__destroy(qi_unipa_msgs__msg__Sonar__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qi_unipa_msgs__msg__Sonar__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qi_unipa_msgs__msg__Sonar__Sequence__are_equal(const qi_unipa_msgs__msg__Sonar__Sequence * lhs, const qi_unipa_msgs__msg__Sonar__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qi_unipa_msgs__msg__Sonar__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qi_unipa_msgs__msg__Sonar__Sequence__copy(
  const qi_unipa_msgs__msg__Sonar__Sequence * input,
  qi_unipa_msgs__msg__Sonar__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qi_unipa_msgs__msg__Sonar);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qi_unipa_msgs__msg__Sonar * data =
      (qi_unipa_msgs__msg__Sonar *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qi_unipa_msgs__msg__Sonar__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qi_unipa_msgs__msg__Sonar__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qi_unipa_msgs__msg__Sonar__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
