// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice
#include "backscatter_movement_record_msgs_srvs/msg/detail/odom_with_expmt_flag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `odom`
#include "nav_msgs/msg/detail/odometry__functions.h"

bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * msg)
{
  if (!msg) {
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__init(&msg->odom)) {
    backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(msg);
    return false;
  }
  // expmt_flag
  return true;
}

void
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * msg)
{
  if (!msg) {
    return;
  }
  // odom
  nav_msgs__msg__Odometry__fini(&msg->odom);
  // expmt_flag
}

bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__are_equal(const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * lhs, const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__are_equal(
      &(lhs->odom), &(rhs->odom)))
  {
    return false;
  }
  // expmt_flag
  if (lhs->expmt_flag != rhs->expmt_flag) {
    return false;
  }
  return true;
}

bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__copy(
  const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * input,
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * output)
{
  if (!input || !output) {
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__copy(
      &(input->odom), &(output->odom)))
  {
    return false;
  }
  // expmt_flag
  output->expmt_flag = input->expmt_flag;
  return true;
}

backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag *
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * msg = (backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag *)allocator.allocate(sizeof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag));
  bool success = backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__destroy(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__init(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * data = NULL;

  if (size) {
    data = (backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag *)allocator.zero_allocate(size, sizeof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(&data[i - 1]);
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
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__fini(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * array)
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
      backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(&array->data[i]);
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

backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence *
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * array = (backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence *)allocator.allocate(sizeof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__destroy(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__are_equal(const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * lhs, const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence__copy(
  const backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * input,
  backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag);
    backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag * data =
      (backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
