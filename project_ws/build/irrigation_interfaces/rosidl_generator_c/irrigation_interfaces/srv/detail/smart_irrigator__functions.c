// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irrigation_interfaces:srv/SmartIrrigator.idl
// generated code does not contain a copyright notice
#include "irrigation_interfaces/srv/detail/smart_irrigator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
irrigation_interfaces__srv__SmartIrrigator_Request__init(irrigation_interfaces__srv__SmartIrrigator_Request * msg)
{
  if (!msg) {
    return false;
  }
  // temp
  // mc
  return true;
}

void
irrigation_interfaces__srv__SmartIrrigator_Request__fini(irrigation_interfaces__srv__SmartIrrigator_Request * msg)
{
  if (!msg) {
    return;
  }
  // temp
  // mc
}

bool
irrigation_interfaces__srv__SmartIrrigator_Request__are_equal(const irrigation_interfaces__srv__SmartIrrigator_Request * lhs, const irrigation_interfaces__srv__SmartIrrigator_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // mc
  if (lhs->mc != rhs->mc) {
    return false;
  }
  return true;
}

bool
irrigation_interfaces__srv__SmartIrrigator_Request__copy(
  const irrigation_interfaces__srv__SmartIrrigator_Request * input,
  irrigation_interfaces__srv__SmartIrrigator_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // temp
  output->temp = input->temp;
  // mc
  output->mc = input->mc;
  return true;
}

irrigation_interfaces__srv__SmartIrrigator_Request *
irrigation_interfaces__srv__SmartIrrigator_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Request * msg = (irrigation_interfaces__srv__SmartIrrigator_Request *)allocator.allocate(sizeof(irrigation_interfaces__srv__SmartIrrigator_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irrigation_interfaces__srv__SmartIrrigator_Request));
  bool success = irrigation_interfaces__srv__SmartIrrigator_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irrigation_interfaces__srv__SmartIrrigator_Request__destroy(irrigation_interfaces__srv__SmartIrrigator_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irrigation_interfaces__srv__SmartIrrigator_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__init(irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(irrigation_interfaces__srv__SmartIrrigator_Request)) {
      return false;
    }
    data = (irrigation_interfaces__srv__SmartIrrigator_Request *)allocator.zero_allocate(size, sizeof(irrigation_interfaces__srv__SmartIrrigator_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irrigation_interfaces__srv__SmartIrrigator_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irrigation_interfaces__srv__SmartIrrigator_Request__fini(&data[i - 1]);
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
irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__fini(irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * array)
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
      irrigation_interfaces__srv__SmartIrrigator_Request__fini(&array->data[i]);
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

irrigation_interfaces__srv__SmartIrrigator_Request__Sequence *
irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * array = (irrigation_interfaces__srv__SmartIrrigator_Request__Sequence *)allocator.allocate(sizeof(irrigation_interfaces__srv__SmartIrrigator_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__destroy(irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__are_equal(const irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * lhs, const irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irrigation_interfaces__srv__SmartIrrigator_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__copy(
  const irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * input,
  irrigation_interfaces__srv__SmartIrrigator_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(irrigation_interfaces__srv__SmartIrrigator_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(irrigation_interfaces__srv__SmartIrrigator_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irrigation_interfaces__srv__SmartIrrigator_Request * data =
      (irrigation_interfaces__srv__SmartIrrigator_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irrigation_interfaces__srv__SmartIrrigator_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irrigation_interfaces__srv__SmartIrrigator_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irrigation_interfaces__srv__SmartIrrigator_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
irrigation_interfaces__srv__SmartIrrigator_Response__init(irrigation_interfaces__srv__SmartIrrigator_Response * msg)
{
  if (!msg) {
    return false;
  }
  // irrigate
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    irrigation_interfaces__srv__SmartIrrigator_Response__fini(msg);
    return false;
  }
  return true;
}

void
irrigation_interfaces__srv__SmartIrrigator_Response__fini(irrigation_interfaces__srv__SmartIrrigator_Response * msg)
{
  if (!msg) {
    return;
  }
  // irrigate
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
irrigation_interfaces__srv__SmartIrrigator_Response__are_equal(const irrigation_interfaces__srv__SmartIrrigator_Response * lhs, const irrigation_interfaces__srv__SmartIrrigator_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // irrigate
  if (lhs->irrigate != rhs->irrigate) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
irrigation_interfaces__srv__SmartIrrigator_Response__copy(
  const irrigation_interfaces__srv__SmartIrrigator_Response * input,
  irrigation_interfaces__srv__SmartIrrigator_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // irrigate
  output->irrigate = input->irrigate;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

irrigation_interfaces__srv__SmartIrrigator_Response *
irrigation_interfaces__srv__SmartIrrigator_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Response * msg = (irrigation_interfaces__srv__SmartIrrigator_Response *)allocator.allocate(sizeof(irrigation_interfaces__srv__SmartIrrigator_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irrigation_interfaces__srv__SmartIrrigator_Response));
  bool success = irrigation_interfaces__srv__SmartIrrigator_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irrigation_interfaces__srv__SmartIrrigator_Response__destroy(irrigation_interfaces__srv__SmartIrrigator_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irrigation_interfaces__srv__SmartIrrigator_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__init(irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(irrigation_interfaces__srv__SmartIrrigator_Response)) {
      return false;
    }
    data = (irrigation_interfaces__srv__SmartIrrigator_Response *)allocator.zero_allocate(size, sizeof(irrigation_interfaces__srv__SmartIrrigator_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irrigation_interfaces__srv__SmartIrrigator_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irrigation_interfaces__srv__SmartIrrigator_Response__fini(&data[i - 1]);
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
irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__fini(irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * array)
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
      irrigation_interfaces__srv__SmartIrrigator_Response__fini(&array->data[i]);
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

irrigation_interfaces__srv__SmartIrrigator_Response__Sequence *
irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * array = (irrigation_interfaces__srv__SmartIrrigator_Response__Sequence *)allocator.allocate(sizeof(irrigation_interfaces__srv__SmartIrrigator_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__destroy(irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__are_equal(const irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * lhs, const irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irrigation_interfaces__srv__SmartIrrigator_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__copy(
  const irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * input,
  irrigation_interfaces__srv__SmartIrrigator_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(irrigation_interfaces__srv__SmartIrrigator_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(irrigation_interfaces__srv__SmartIrrigator_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irrigation_interfaces__srv__SmartIrrigator_Response * data =
      (irrigation_interfaces__srv__SmartIrrigator_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irrigation_interfaces__srv__SmartIrrigator_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irrigation_interfaces__srv__SmartIrrigator_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irrigation_interfaces__srv__SmartIrrigator_Response__copy(
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
// #include "irrigation_interfaces/srv/detail/smart_irrigator__functions.h"

bool
irrigation_interfaces__srv__SmartIrrigator_Event__init(irrigation_interfaces__srv__SmartIrrigator_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    irrigation_interfaces__srv__SmartIrrigator_Event__fini(msg);
    return false;
  }
  // request
  if (!irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__init(&msg->request, 0)) {
    irrigation_interfaces__srv__SmartIrrigator_Event__fini(msg);
    return false;
  }
  // response
  if (!irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__init(&msg->response, 0)) {
    irrigation_interfaces__srv__SmartIrrigator_Event__fini(msg);
    return false;
  }
  return true;
}

void
irrigation_interfaces__srv__SmartIrrigator_Event__fini(irrigation_interfaces__srv__SmartIrrigator_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__fini(&msg->request);
  // response
  irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__fini(&msg->response);
}

bool
irrigation_interfaces__srv__SmartIrrigator_Event__are_equal(const irrigation_interfaces__srv__SmartIrrigator_Event * lhs, const irrigation_interfaces__srv__SmartIrrigator_Event * rhs)
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
  if (!irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
irrigation_interfaces__srv__SmartIrrigator_Event__copy(
  const irrigation_interfaces__srv__SmartIrrigator_Event * input,
  irrigation_interfaces__srv__SmartIrrigator_Event * output)
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
  if (!irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

irrigation_interfaces__srv__SmartIrrigator_Event *
irrigation_interfaces__srv__SmartIrrigator_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Event * msg = (irrigation_interfaces__srv__SmartIrrigator_Event *)allocator.allocate(sizeof(irrigation_interfaces__srv__SmartIrrigator_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irrigation_interfaces__srv__SmartIrrigator_Event));
  bool success = irrigation_interfaces__srv__SmartIrrigator_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irrigation_interfaces__srv__SmartIrrigator_Event__destroy(irrigation_interfaces__srv__SmartIrrigator_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irrigation_interfaces__srv__SmartIrrigator_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__init(irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(irrigation_interfaces__srv__SmartIrrigator_Event)) {
      return false;
    }
    data = (irrigation_interfaces__srv__SmartIrrigator_Event *)allocator.zero_allocate(size, sizeof(irrigation_interfaces__srv__SmartIrrigator_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irrigation_interfaces__srv__SmartIrrigator_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irrigation_interfaces__srv__SmartIrrigator_Event__fini(&data[i - 1]);
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
irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__fini(irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * array)
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
      irrigation_interfaces__srv__SmartIrrigator_Event__fini(&array->data[i]);
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

irrigation_interfaces__srv__SmartIrrigator_Event__Sequence *
irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * array = (irrigation_interfaces__srv__SmartIrrigator_Event__Sequence *)allocator.allocate(sizeof(irrigation_interfaces__srv__SmartIrrigator_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__destroy(irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__are_equal(const irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * lhs, const irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irrigation_interfaces__srv__SmartIrrigator_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irrigation_interfaces__srv__SmartIrrigator_Event__Sequence__copy(
  const irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * input,
  irrigation_interfaces__srv__SmartIrrigator_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(irrigation_interfaces__srv__SmartIrrigator_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(irrigation_interfaces__srv__SmartIrrigator_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irrigation_interfaces__srv__SmartIrrigator_Event * data =
      (irrigation_interfaces__srv__SmartIrrigator_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irrigation_interfaces__srv__SmartIrrigator_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irrigation_interfaces__srv__SmartIrrigator_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irrigation_interfaces__srv__SmartIrrigator_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
