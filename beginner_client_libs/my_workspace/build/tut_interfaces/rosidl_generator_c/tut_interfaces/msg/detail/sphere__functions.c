// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tut_interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice
#include "tut_interfaces/msg/detail/sphere__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
tut_interfaces__msg__Sphere__init(tut_interfaces__msg__Sphere * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    tut_interfaces__msg__Sphere__fini(msg);
    return false;
  }
  // radius
  return true;
}

void
tut_interfaces__msg__Sphere__fini(tut_interfaces__msg__Sphere * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // radius
}

bool
tut_interfaces__msg__Sphere__are_equal(const tut_interfaces__msg__Sphere * lhs, const tut_interfaces__msg__Sphere * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
tut_interfaces__msg__Sphere__copy(
  const tut_interfaces__msg__Sphere * input,
  tut_interfaces__msg__Sphere * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

tut_interfaces__msg__Sphere *
tut_interfaces__msg__Sphere__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__msg__Sphere * msg = (tut_interfaces__msg__Sphere *)allocator.allocate(sizeof(tut_interfaces__msg__Sphere), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tut_interfaces__msg__Sphere));
  bool success = tut_interfaces__msg__Sphere__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tut_interfaces__msg__Sphere__destroy(tut_interfaces__msg__Sphere * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tut_interfaces__msg__Sphere__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tut_interfaces__msg__Sphere__Sequence__init(tut_interfaces__msg__Sphere__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__msg__Sphere * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(tut_interfaces__msg__Sphere)) {
      return false;
    }
    data = (tut_interfaces__msg__Sphere *)allocator.zero_allocate(size, sizeof(tut_interfaces__msg__Sphere), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tut_interfaces__msg__Sphere__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tut_interfaces__msg__Sphere__fini(&data[i - 1]);
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
tut_interfaces__msg__Sphere__Sequence__fini(tut_interfaces__msg__Sphere__Sequence * array)
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
      tut_interfaces__msg__Sphere__fini(&array->data[i]);
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

tut_interfaces__msg__Sphere__Sequence *
tut_interfaces__msg__Sphere__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tut_interfaces__msg__Sphere__Sequence * array = (tut_interfaces__msg__Sphere__Sequence *)allocator.allocate(sizeof(tut_interfaces__msg__Sphere__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tut_interfaces__msg__Sphere__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tut_interfaces__msg__Sphere__Sequence__destroy(tut_interfaces__msg__Sphere__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tut_interfaces__msg__Sphere__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tut_interfaces__msg__Sphere__Sequence__are_equal(const tut_interfaces__msg__Sphere__Sequence * lhs, const tut_interfaces__msg__Sphere__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tut_interfaces__msg__Sphere__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tut_interfaces__msg__Sphere__Sequence__copy(
  const tut_interfaces__msg__Sphere__Sequence * input,
  tut_interfaces__msg__Sphere__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(tut_interfaces__msg__Sphere)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(tut_interfaces__msg__Sphere);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tut_interfaces__msg__Sphere * data =
      (tut_interfaces__msg__Sphere *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tut_interfaces__msg__Sphere__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tut_interfaces__msg__Sphere__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tut_interfaces__msg__Sphere__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
