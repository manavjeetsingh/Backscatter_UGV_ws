// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
// generated code does not contain a copyright notice
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `expmt_name`
#include "rosidl_runtime_c/string_functions.h"

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__init(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * msg)
{
  if (!msg) {
    return false;
  }
  // req
  // expmt_name
  if (!rosidl_runtime_c__String__init(&msg->expmt_name)) {
    backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__fini(msg);
    return false;
  }
  // backscatter_expmt_flag
  return true;
}

void
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__fini(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * msg)
{
  if (!msg) {
    return;
  }
  // req
  // expmt_name
  rosidl_runtime_c__String__fini(&msg->expmt_name);
  // backscatter_expmt_flag
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__are_equal(const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * lhs, const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // req
  if (lhs->req != rhs->req) {
    return false;
  }
  // expmt_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->expmt_name), &(rhs->expmt_name)))
  {
    return false;
  }
  // backscatter_expmt_flag
  if (lhs->backscatter_expmt_flag != rhs->backscatter_expmt_flag) {
    return false;
  }
  return true;
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__copy(
  const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * input,
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // req
  output->req = input->req;
  // expmt_name
  if (!rosidl_runtime_c__String__copy(
      &(input->expmt_name), &(output->expmt_name)))
  {
    return false;
  }
  // backscatter_expmt_flag
  output->backscatter_expmt_flag = input->backscatter_expmt_flag;
  return true;
}

backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request *
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * msg = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request *)allocator.allocate(sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request));
  bool success = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__destroy(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__init(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * data = NULL;

  if (size) {
    data = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request *)allocator.zero_allocate(size, sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__fini(&data[i - 1]);
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
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__fini(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * array)
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
      backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__fini(&array->data[i]);
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

backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence *
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * array = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence *)allocator.allocate(sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__destroy(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__are_equal(const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * lhs, const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence__copy(
  const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * input,
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request);
    backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request * data =
      (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__fini(&data[i]);
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
    if (!backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__init(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * msg)
{
  if (!msg) {
    return false;
  }
  // resp
  return true;
}

void
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__fini(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * msg)
{
  if (!msg) {
    return;
  }
  // resp
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__are_equal(const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * lhs, const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resp
  if (lhs->resp != rhs->resp) {
    return false;
  }
  return true;
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__copy(
  const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * input,
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // resp
  output->resp = input->resp;
  return true;
}

backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response *
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * msg = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response *)allocator.allocate(sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response));
  bool success = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__destroy(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__init(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * data = NULL;

  if (size) {
    data = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response *)allocator.zero_allocate(size, sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__fini(&data[i - 1]);
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
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__fini(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * array)
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
      backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__fini(&array->data[i]);
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

backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence *
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * array = (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence *)allocator.allocate(sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__destroy(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__are_equal(const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * lhs, const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence__copy(
  const backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * input,
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response);
    backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response * data =
      (backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__fini(&data[i]);
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
    if (!backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
