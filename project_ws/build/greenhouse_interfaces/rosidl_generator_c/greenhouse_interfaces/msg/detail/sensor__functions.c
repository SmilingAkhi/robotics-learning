// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from greenhouse_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice
#include "greenhouse_interfaces/msg/detail/sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
greenhouse_interfaces__msg__Sensor__init(greenhouse_interfaces__msg__Sensor * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // humidity
  return true;
}

void
greenhouse_interfaces__msg__Sensor__fini(greenhouse_interfaces__msg__Sensor * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // humidity
}

bool
greenhouse_interfaces__msg__Sensor__are_equal(const greenhouse_interfaces__msg__Sensor * lhs, const greenhouse_interfaces__msg__Sensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // humidity
  if (lhs->humidity != rhs->humidity) {
    return false;
  }
  return true;
}

bool
greenhouse_interfaces__msg__Sensor__copy(
  const greenhouse_interfaces__msg__Sensor * input,
  greenhouse_interfaces__msg__Sensor * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // humidity
  output->humidity = input->humidity;
  return true;
}

greenhouse_interfaces__msg__Sensor *
greenhouse_interfaces__msg__Sensor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__msg__Sensor * msg = (greenhouse_interfaces__msg__Sensor *)allocator.allocate(sizeof(greenhouse_interfaces__msg__Sensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(greenhouse_interfaces__msg__Sensor));
  bool success = greenhouse_interfaces__msg__Sensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
greenhouse_interfaces__msg__Sensor__destroy(greenhouse_interfaces__msg__Sensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    greenhouse_interfaces__msg__Sensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
greenhouse_interfaces__msg__Sensor__Sequence__init(greenhouse_interfaces__msg__Sensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__msg__Sensor * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(greenhouse_interfaces__msg__Sensor)) {
      return false;
    }
    data = (greenhouse_interfaces__msg__Sensor *)allocator.zero_allocate(size, sizeof(greenhouse_interfaces__msg__Sensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = greenhouse_interfaces__msg__Sensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        greenhouse_interfaces__msg__Sensor__fini(&data[i - 1]);
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
greenhouse_interfaces__msg__Sensor__Sequence__fini(greenhouse_interfaces__msg__Sensor__Sequence * array)
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
      greenhouse_interfaces__msg__Sensor__fini(&array->data[i]);
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

greenhouse_interfaces__msg__Sensor__Sequence *
greenhouse_interfaces__msg__Sensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__msg__Sensor__Sequence * array = (greenhouse_interfaces__msg__Sensor__Sequence *)allocator.allocate(sizeof(greenhouse_interfaces__msg__Sensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = greenhouse_interfaces__msg__Sensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
greenhouse_interfaces__msg__Sensor__Sequence__destroy(greenhouse_interfaces__msg__Sensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    greenhouse_interfaces__msg__Sensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
greenhouse_interfaces__msg__Sensor__Sequence__are_equal(const greenhouse_interfaces__msg__Sensor__Sequence * lhs, const greenhouse_interfaces__msg__Sensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!greenhouse_interfaces__msg__Sensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
greenhouse_interfaces__msg__Sensor__Sequence__copy(
  const greenhouse_interfaces__msg__Sensor__Sequence * input,
  greenhouse_interfaces__msg__Sensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(greenhouse_interfaces__msg__Sensor)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(greenhouse_interfaces__msg__Sensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    greenhouse_interfaces__msg__Sensor * data =
      (greenhouse_interfaces__msg__Sensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!greenhouse_interfaces__msg__Sensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          greenhouse_interfaces__msg__Sensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!greenhouse_interfaces__msg__Sensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
