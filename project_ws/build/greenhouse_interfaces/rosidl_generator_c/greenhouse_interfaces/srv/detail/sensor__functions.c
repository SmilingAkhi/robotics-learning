// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from greenhouse_interfaces:srv/Sensor.idl
// generated code does not contain a copyright notice
#include "greenhouse_interfaces/srv/detail/sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
greenhouse_interfaces__srv__Sensor_Request__init(greenhouse_interfaces__srv__Sensor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // humidity
  return true;
}

void
greenhouse_interfaces__srv__Sensor_Request__fini(greenhouse_interfaces__srv__Sensor_Request * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // humidity
}

bool
greenhouse_interfaces__srv__Sensor_Request__are_equal(const greenhouse_interfaces__srv__Sensor_Request * lhs, const greenhouse_interfaces__srv__Sensor_Request * rhs)
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
greenhouse_interfaces__srv__Sensor_Request__copy(
  const greenhouse_interfaces__srv__Sensor_Request * input,
  greenhouse_interfaces__srv__Sensor_Request * output)
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

greenhouse_interfaces__srv__Sensor_Request *
greenhouse_interfaces__srv__Sensor_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Request * msg = (greenhouse_interfaces__srv__Sensor_Request *)allocator.allocate(sizeof(greenhouse_interfaces__srv__Sensor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(greenhouse_interfaces__srv__Sensor_Request));
  bool success = greenhouse_interfaces__srv__Sensor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
greenhouse_interfaces__srv__Sensor_Request__destroy(greenhouse_interfaces__srv__Sensor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    greenhouse_interfaces__srv__Sensor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
greenhouse_interfaces__srv__Sensor_Request__Sequence__init(greenhouse_interfaces__srv__Sensor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(greenhouse_interfaces__srv__Sensor_Request)) {
      return false;
    }
    data = (greenhouse_interfaces__srv__Sensor_Request *)allocator.zero_allocate(size, sizeof(greenhouse_interfaces__srv__Sensor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = greenhouse_interfaces__srv__Sensor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        greenhouse_interfaces__srv__Sensor_Request__fini(&data[i - 1]);
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
greenhouse_interfaces__srv__Sensor_Request__Sequence__fini(greenhouse_interfaces__srv__Sensor_Request__Sequence * array)
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
      greenhouse_interfaces__srv__Sensor_Request__fini(&array->data[i]);
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

greenhouse_interfaces__srv__Sensor_Request__Sequence *
greenhouse_interfaces__srv__Sensor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Request__Sequence * array = (greenhouse_interfaces__srv__Sensor_Request__Sequence *)allocator.allocate(sizeof(greenhouse_interfaces__srv__Sensor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = greenhouse_interfaces__srv__Sensor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
greenhouse_interfaces__srv__Sensor_Request__Sequence__destroy(greenhouse_interfaces__srv__Sensor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    greenhouse_interfaces__srv__Sensor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
greenhouse_interfaces__srv__Sensor_Request__Sequence__are_equal(const greenhouse_interfaces__srv__Sensor_Request__Sequence * lhs, const greenhouse_interfaces__srv__Sensor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!greenhouse_interfaces__srv__Sensor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
greenhouse_interfaces__srv__Sensor_Request__Sequence__copy(
  const greenhouse_interfaces__srv__Sensor_Request__Sequence * input,
  greenhouse_interfaces__srv__Sensor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(greenhouse_interfaces__srv__Sensor_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(greenhouse_interfaces__srv__Sensor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    greenhouse_interfaces__srv__Sensor_Request * data =
      (greenhouse_interfaces__srv__Sensor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!greenhouse_interfaces__srv__Sensor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          greenhouse_interfaces__srv__Sensor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!greenhouse_interfaces__srv__Sensor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `recommendation`
#include "rosidl_runtime_c/string_functions.h"

bool
greenhouse_interfaces__srv__Sensor_Response__init(greenhouse_interfaces__srv__Sensor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // fan_on
  // irrigation_on
  // recommendation
  if (!rosidl_runtime_c__String__init(&msg->recommendation)) {
    greenhouse_interfaces__srv__Sensor_Response__fini(msg);
    return false;
  }
  return true;
}

void
greenhouse_interfaces__srv__Sensor_Response__fini(greenhouse_interfaces__srv__Sensor_Response * msg)
{
  if (!msg) {
    return;
  }
  // fan_on
  // irrigation_on
  // recommendation
  rosidl_runtime_c__String__fini(&msg->recommendation);
}

bool
greenhouse_interfaces__srv__Sensor_Response__are_equal(const greenhouse_interfaces__srv__Sensor_Response * lhs, const greenhouse_interfaces__srv__Sensor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fan_on
  if (lhs->fan_on != rhs->fan_on) {
    return false;
  }
  // irrigation_on
  if (lhs->irrigation_on != rhs->irrigation_on) {
    return false;
  }
  // recommendation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->recommendation), &(rhs->recommendation)))
  {
    return false;
  }
  return true;
}

bool
greenhouse_interfaces__srv__Sensor_Response__copy(
  const greenhouse_interfaces__srv__Sensor_Response * input,
  greenhouse_interfaces__srv__Sensor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // fan_on
  output->fan_on = input->fan_on;
  // irrigation_on
  output->irrigation_on = input->irrigation_on;
  // recommendation
  if (!rosidl_runtime_c__String__copy(
      &(input->recommendation), &(output->recommendation)))
  {
    return false;
  }
  return true;
}

greenhouse_interfaces__srv__Sensor_Response *
greenhouse_interfaces__srv__Sensor_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Response * msg = (greenhouse_interfaces__srv__Sensor_Response *)allocator.allocate(sizeof(greenhouse_interfaces__srv__Sensor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(greenhouse_interfaces__srv__Sensor_Response));
  bool success = greenhouse_interfaces__srv__Sensor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
greenhouse_interfaces__srv__Sensor_Response__destroy(greenhouse_interfaces__srv__Sensor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    greenhouse_interfaces__srv__Sensor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
greenhouse_interfaces__srv__Sensor_Response__Sequence__init(greenhouse_interfaces__srv__Sensor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(greenhouse_interfaces__srv__Sensor_Response)) {
      return false;
    }
    data = (greenhouse_interfaces__srv__Sensor_Response *)allocator.zero_allocate(size, sizeof(greenhouse_interfaces__srv__Sensor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = greenhouse_interfaces__srv__Sensor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        greenhouse_interfaces__srv__Sensor_Response__fini(&data[i - 1]);
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
greenhouse_interfaces__srv__Sensor_Response__Sequence__fini(greenhouse_interfaces__srv__Sensor_Response__Sequence * array)
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
      greenhouse_interfaces__srv__Sensor_Response__fini(&array->data[i]);
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

greenhouse_interfaces__srv__Sensor_Response__Sequence *
greenhouse_interfaces__srv__Sensor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Response__Sequence * array = (greenhouse_interfaces__srv__Sensor_Response__Sequence *)allocator.allocate(sizeof(greenhouse_interfaces__srv__Sensor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = greenhouse_interfaces__srv__Sensor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
greenhouse_interfaces__srv__Sensor_Response__Sequence__destroy(greenhouse_interfaces__srv__Sensor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    greenhouse_interfaces__srv__Sensor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
greenhouse_interfaces__srv__Sensor_Response__Sequence__are_equal(const greenhouse_interfaces__srv__Sensor_Response__Sequence * lhs, const greenhouse_interfaces__srv__Sensor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!greenhouse_interfaces__srv__Sensor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
greenhouse_interfaces__srv__Sensor_Response__Sequence__copy(
  const greenhouse_interfaces__srv__Sensor_Response__Sequence * input,
  greenhouse_interfaces__srv__Sensor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(greenhouse_interfaces__srv__Sensor_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(greenhouse_interfaces__srv__Sensor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    greenhouse_interfaces__srv__Sensor_Response * data =
      (greenhouse_interfaces__srv__Sensor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!greenhouse_interfaces__srv__Sensor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          greenhouse_interfaces__srv__Sensor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!greenhouse_interfaces__srv__Sensor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "greenhouse_interfaces/srv/detail/sensor__functions.h"

bool
greenhouse_interfaces__srv__Sensor_Event__init(greenhouse_interfaces__srv__Sensor_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    greenhouse_interfaces__srv__Sensor_Event__fini(msg);
    return false;
  }
  // request
  if (!greenhouse_interfaces__srv__Sensor_Request__Sequence__init(&msg->request, 0)) {
    greenhouse_interfaces__srv__Sensor_Event__fini(msg);
    return false;
  }
  // response
  if (!greenhouse_interfaces__srv__Sensor_Response__Sequence__init(&msg->response, 0)) {
    greenhouse_interfaces__srv__Sensor_Event__fini(msg);
    return false;
  }
  return true;
}

void
greenhouse_interfaces__srv__Sensor_Event__fini(greenhouse_interfaces__srv__Sensor_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  greenhouse_interfaces__srv__Sensor_Request__Sequence__fini(&msg->request);
  // response
  greenhouse_interfaces__srv__Sensor_Response__Sequence__fini(&msg->response);
}

bool
greenhouse_interfaces__srv__Sensor_Event__are_equal(const greenhouse_interfaces__srv__Sensor_Event * lhs, const greenhouse_interfaces__srv__Sensor_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!greenhouse_interfaces__srv__Sensor_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!greenhouse_interfaces__srv__Sensor_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
greenhouse_interfaces__srv__Sensor_Event__copy(
  const greenhouse_interfaces__srv__Sensor_Event * input,
  greenhouse_interfaces__srv__Sensor_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!greenhouse_interfaces__srv__Sensor_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!greenhouse_interfaces__srv__Sensor_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

greenhouse_interfaces__srv__Sensor_Event *
greenhouse_interfaces__srv__Sensor_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Event * msg = (greenhouse_interfaces__srv__Sensor_Event *)allocator.allocate(sizeof(greenhouse_interfaces__srv__Sensor_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(greenhouse_interfaces__srv__Sensor_Event));
  bool success = greenhouse_interfaces__srv__Sensor_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
greenhouse_interfaces__srv__Sensor_Event__destroy(greenhouse_interfaces__srv__Sensor_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    greenhouse_interfaces__srv__Sensor_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
greenhouse_interfaces__srv__Sensor_Event__Sequence__init(greenhouse_interfaces__srv__Sensor_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(greenhouse_interfaces__srv__Sensor_Event)) {
      return false;
    }
    data = (greenhouse_interfaces__srv__Sensor_Event *)allocator.zero_allocate(size, sizeof(greenhouse_interfaces__srv__Sensor_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = greenhouse_interfaces__srv__Sensor_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        greenhouse_interfaces__srv__Sensor_Event__fini(&data[i - 1]);
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
greenhouse_interfaces__srv__Sensor_Event__Sequence__fini(greenhouse_interfaces__srv__Sensor_Event__Sequence * array)
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
      greenhouse_interfaces__srv__Sensor_Event__fini(&array->data[i]);
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

greenhouse_interfaces__srv__Sensor_Event__Sequence *
greenhouse_interfaces__srv__Sensor_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  greenhouse_interfaces__srv__Sensor_Event__Sequence * array = (greenhouse_interfaces__srv__Sensor_Event__Sequence *)allocator.allocate(sizeof(greenhouse_interfaces__srv__Sensor_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = greenhouse_interfaces__srv__Sensor_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
greenhouse_interfaces__srv__Sensor_Event__Sequence__destroy(greenhouse_interfaces__srv__Sensor_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    greenhouse_interfaces__srv__Sensor_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
greenhouse_interfaces__srv__Sensor_Event__Sequence__are_equal(const greenhouse_interfaces__srv__Sensor_Event__Sequence * lhs, const greenhouse_interfaces__srv__Sensor_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!greenhouse_interfaces__srv__Sensor_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
greenhouse_interfaces__srv__Sensor_Event__Sequence__copy(
  const greenhouse_interfaces__srv__Sensor_Event__Sequence * input,
  greenhouse_interfaces__srv__Sensor_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(greenhouse_interfaces__srv__Sensor_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(greenhouse_interfaces__srv__Sensor_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    greenhouse_interfaces__srv__Sensor_Event * data =
      (greenhouse_interfaces__srv__Sensor_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!greenhouse_interfaces__srv__Sensor_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          greenhouse_interfaces__srv__Sensor_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!greenhouse_interfaces__srv__Sensor_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
