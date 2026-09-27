// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from greenhouse_interfaces:srv/Sensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "greenhouse_interfaces/srv/sensor.h"


#ifndef GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__FUNCTIONS_H_
#define GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "greenhouse_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "greenhouse_interfaces/srv/detail/sensor__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_type_hash_t *
greenhouse_interfaces__srv__Sensor__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
greenhouse_interfaces__srv__Sensor__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource *
greenhouse_interfaces__srv__Sensor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
greenhouse_interfaces__srv__Sensor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/Sensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * greenhouse_interfaces__srv__Sensor_Request
 * )) before or use
 * greenhouse_interfaces__srv__Sensor_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Request__init(greenhouse_interfaces__srv__Sensor_Request * msg);

/// Finalize srv/Sensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Request__fini(greenhouse_interfaces__srv__Sensor_Request * msg);

/// Create srv/Sensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * greenhouse_interfaces__srv__Sensor_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
greenhouse_interfaces__srv__Sensor_Request *
greenhouse_interfaces__srv__Sensor_Request__create(void);

/// Destroy srv/Sensor message.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Request__destroy(greenhouse_interfaces__srv__Sensor_Request * msg);

/// Check for srv/Sensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Request__are_equal(const greenhouse_interfaces__srv__Sensor_Request * lhs, const greenhouse_interfaces__srv__Sensor_Request * rhs);

/// Copy a srv/Sensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Request__copy(
  const greenhouse_interfaces__srv__Sensor_Request * input,
  greenhouse_interfaces__srv__Sensor_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_type_hash_t *
greenhouse_interfaces__srv__Sensor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
greenhouse_interfaces__srv__Sensor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource *
greenhouse_interfaces__srv__Sensor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
greenhouse_interfaces__srv__Sensor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/Sensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * greenhouse_interfaces__srv__Sensor_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Request__Sequence__init(greenhouse_interfaces__srv__Sensor_Request__Sequence * array, size_t size);

/// Finalize array of srv/Sensor messages.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Request__Sequence__fini(greenhouse_interfaces__srv__Sensor_Request__Sequence * array);

/// Create array of srv/Sensor messages.
/**
 * It allocates the memory for the array and calls
 * greenhouse_interfaces__srv__Sensor_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
greenhouse_interfaces__srv__Sensor_Request__Sequence *
greenhouse_interfaces__srv__Sensor_Request__Sequence__create(size_t size);

/// Destroy array of srv/Sensor messages.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Request__Sequence__destroy(greenhouse_interfaces__srv__Sensor_Request__Sequence * array);

/// Check for srv/Sensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Request__Sequence__are_equal(const greenhouse_interfaces__srv__Sensor_Request__Sequence * lhs, const greenhouse_interfaces__srv__Sensor_Request__Sequence * rhs);

/// Copy an array of srv/Sensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Request__Sequence__copy(
  const greenhouse_interfaces__srv__Sensor_Request__Sequence * input,
  greenhouse_interfaces__srv__Sensor_Request__Sequence * output);

/// Initialize srv/Sensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * greenhouse_interfaces__srv__Sensor_Response
 * )) before or use
 * greenhouse_interfaces__srv__Sensor_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Response__init(greenhouse_interfaces__srv__Sensor_Response * msg);

/// Finalize srv/Sensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Response__fini(greenhouse_interfaces__srv__Sensor_Response * msg);

/// Create srv/Sensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * greenhouse_interfaces__srv__Sensor_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
greenhouse_interfaces__srv__Sensor_Response *
greenhouse_interfaces__srv__Sensor_Response__create(void);

/// Destroy srv/Sensor message.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Response__destroy(greenhouse_interfaces__srv__Sensor_Response * msg);

/// Check for srv/Sensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Response__are_equal(const greenhouse_interfaces__srv__Sensor_Response * lhs, const greenhouse_interfaces__srv__Sensor_Response * rhs);

/// Copy a srv/Sensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Response__copy(
  const greenhouse_interfaces__srv__Sensor_Response * input,
  greenhouse_interfaces__srv__Sensor_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_type_hash_t *
greenhouse_interfaces__srv__Sensor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
greenhouse_interfaces__srv__Sensor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource *
greenhouse_interfaces__srv__Sensor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
greenhouse_interfaces__srv__Sensor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/Sensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * greenhouse_interfaces__srv__Sensor_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Response__Sequence__init(greenhouse_interfaces__srv__Sensor_Response__Sequence * array, size_t size);

/// Finalize array of srv/Sensor messages.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Response__Sequence__fini(greenhouse_interfaces__srv__Sensor_Response__Sequence * array);

/// Create array of srv/Sensor messages.
/**
 * It allocates the memory for the array and calls
 * greenhouse_interfaces__srv__Sensor_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
greenhouse_interfaces__srv__Sensor_Response__Sequence *
greenhouse_interfaces__srv__Sensor_Response__Sequence__create(size_t size);

/// Destroy array of srv/Sensor messages.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Response__Sequence__destroy(greenhouse_interfaces__srv__Sensor_Response__Sequence * array);

/// Check for srv/Sensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Response__Sequence__are_equal(const greenhouse_interfaces__srv__Sensor_Response__Sequence * lhs, const greenhouse_interfaces__srv__Sensor_Response__Sequence * rhs);

/// Copy an array of srv/Sensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Response__Sequence__copy(
  const greenhouse_interfaces__srv__Sensor_Response__Sequence * input,
  greenhouse_interfaces__srv__Sensor_Response__Sequence * output);

/// Initialize srv/Sensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * greenhouse_interfaces__srv__Sensor_Event
 * )) before or use
 * greenhouse_interfaces__srv__Sensor_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Event__init(greenhouse_interfaces__srv__Sensor_Event * msg);

/// Finalize srv/Sensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Event__fini(greenhouse_interfaces__srv__Sensor_Event * msg);

/// Create srv/Sensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * greenhouse_interfaces__srv__Sensor_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
greenhouse_interfaces__srv__Sensor_Event *
greenhouse_interfaces__srv__Sensor_Event__create(void);

/// Destroy srv/Sensor message.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Event__destroy(greenhouse_interfaces__srv__Sensor_Event * msg);

/// Check for srv/Sensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Event__are_equal(const greenhouse_interfaces__srv__Sensor_Event * lhs, const greenhouse_interfaces__srv__Sensor_Event * rhs);

/// Copy a srv/Sensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Event__copy(
  const greenhouse_interfaces__srv__Sensor_Event * input,
  greenhouse_interfaces__srv__Sensor_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_type_hash_t *
greenhouse_interfaces__srv__Sensor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
greenhouse_interfaces__srv__Sensor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource *
greenhouse_interfaces__srv__Sensor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
greenhouse_interfaces__srv__Sensor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/Sensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * greenhouse_interfaces__srv__Sensor_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Event__Sequence__init(greenhouse_interfaces__srv__Sensor_Event__Sequence * array, size_t size);

/// Finalize array of srv/Sensor messages.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Event__Sequence__fini(greenhouse_interfaces__srv__Sensor_Event__Sequence * array);

/// Create array of srv/Sensor messages.
/**
 * It allocates the memory for the array and calls
 * greenhouse_interfaces__srv__Sensor_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
greenhouse_interfaces__srv__Sensor_Event__Sequence *
greenhouse_interfaces__srv__Sensor_Event__Sequence__create(size_t size);

/// Destroy array of srv/Sensor messages.
/**
 * It calls
 * greenhouse_interfaces__srv__Sensor_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
void
greenhouse_interfaces__srv__Sensor_Event__Sequence__destroy(greenhouse_interfaces__srv__Sensor_Event__Sequence * array);

/// Check for srv/Sensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Event__Sequence__are_equal(const greenhouse_interfaces__srv__Sensor_Event__Sequence * lhs, const greenhouse_interfaces__srv__Sensor_Event__Sequence * rhs);

/// Copy an array of srv/Sensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_greenhouse_interfaces
bool
greenhouse_interfaces__srv__Sensor_Event__Sequence__copy(
  const greenhouse_interfaces__srv__Sensor_Event__Sequence * input,
  greenhouse_interfaces__srv__Sensor_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // GREENHOUSE_INTERFACES__SRV__DETAIL__SENSOR__FUNCTIONS_H_
