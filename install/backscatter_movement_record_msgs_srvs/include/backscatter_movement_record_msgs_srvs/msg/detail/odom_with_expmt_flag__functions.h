// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__FUNCTIONS_H_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "backscatter_movement_record_msgs_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__struct.h"

/// Initialize msg/OdomWithExpmtFlag message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag
 * )) before or use
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * msg);

/// Finalize msg/OdomWithExpmtFlag message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
void
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * msg);

/// Create msg/OdomWithExpmtFlag message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag *
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__create();

/// Destroy msg/OdomWithExpmtFlag message.
/**
 * It calls
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
void
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__destroy(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * msg);

/// Check for msg/OdomWithExpmtFlag message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__are_equal(const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * lhs, const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * rhs);

/// Copy a msg/OdomWithExpmtFlag message.
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
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__copy(
  const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * input,
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * output);

/// Initialize array of msg/OdomWithExpmtFlag messages.
/**
 * It allocates the memory for the number of elements and calls
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__init(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * array, size_t size);

/// Finalize array of msg/OdomWithExpmtFlag messages.
/**
 * It calls
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
void
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__fini(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * array);

/// Create array of msg/OdomWithExpmtFlag messages.
/**
 * It allocates the memory for the array and calls
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence *
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__create(size_t size);

/// Destroy array of msg/OdomWithExpmtFlag messages.
/**
 * It calls
 * backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
void
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__destroy(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * array);

/// Check for msg/OdomWithExpmtFlag message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__are_equal(const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * lhs, const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * rhs);

/// Copy an array of msg/OdomWithExpmtFlag messages.
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
ROSIDL_GENERATOR_C_PUBLIC_backscatter_movement_record_msgs_srvs
bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__copy(
  const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * input,
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__FUNCTIONS_H_
