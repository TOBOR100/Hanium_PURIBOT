// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hanium_interface:msg/GetDht.idl
// generated code does not contain a copyright notice

#ifndef HANIUM_INTERFACE__MSG__DETAIL__GET_DHT__FUNCTIONS_H_
#define HANIUM_INTERFACE__MSG__DETAIL__GET_DHT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hanium_interface/msg/rosidl_generator_c__visibility_control.h"

#include "hanium_interface/msg/detail/get_dht__struct.h"

/// Initialize msg/GetDht message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hanium_interface__msg__GetDht
 * )) before or use
 * hanium_interface__msg__GetDht__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
bool
hanium_interface__msg__GetDht__init(hanium_interface__msg__GetDht * msg);

/// Finalize msg/GetDht message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
void
hanium_interface__msg__GetDht__fini(hanium_interface__msg__GetDht * msg);

/// Create msg/GetDht message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hanium_interface__msg__GetDht__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
hanium_interface__msg__GetDht *
hanium_interface__msg__GetDht__create();

/// Destroy msg/GetDht message.
/**
 * It calls
 * hanium_interface__msg__GetDht__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
void
hanium_interface__msg__GetDht__destroy(hanium_interface__msg__GetDht * msg);

/// Check for msg/GetDht message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
bool
hanium_interface__msg__GetDht__are_equal(const hanium_interface__msg__GetDht * lhs, const hanium_interface__msg__GetDht * rhs);

/// Copy a msg/GetDht message.
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
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
bool
hanium_interface__msg__GetDht__copy(
  const hanium_interface__msg__GetDht * input,
  hanium_interface__msg__GetDht * output);

/// Initialize array of msg/GetDht messages.
/**
 * It allocates the memory for the number of elements and calls
 * hanium_interface__msg__GetDht__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
bool
hanium_interface__msg__GetDht__Sequence__init(hanium_interface__msg__GetDht__Sequence * array, size_t size);

/// Finalize array of msg/GetDht messages.
/**
 * It calls
 * hanium_interface__msg__GetDht__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
void
hanium_interface__msg__GetDht__Sequence__fini(hanium_interface__msg__GetDht__Sequence * array);

/// Create array of msg/GetDht messages.
/**
 * It allocates the memory for the array and calls
 * hanium_interface__msg__GetDht__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
hanium_interface__msg__GetDht__Sequence *
hanium_interface__msg__GetDht__Sequence__create(size_t size);

/// Destroy array of msg/GetDht messages.
/**
 * It calls
 * hanium_interface__msg__GetDht__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
void
hanium_interface__msg__GetDht__Sequence__destroy(hanium_interface__msg__GetDht__Sequence * array);

/// Check for msg/GetDht message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
bool
hanium_interface__msg__GetDht__Sequence__are_equal(const hanium_interface__msg__GetDht__Sequence * lhs, const hanium_interface__msg__GetDht__Sequence * rhs);

/// Copy an array of msg/GetDht messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hanium_interface
bool
hanium_interface__msg__GetDht__Sequence__copy(
  const hanium_interface__msg__GetDht__Sequence * input,
  hanium_interface__msg__GetDht__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HANIUM_INTERFACE__MSG__DETAIL__GET_DHT__FUNCTIONS_H_
