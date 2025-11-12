// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__rosidl_typesupport_introspection_c.h"
#include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__functions.h"
#include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.h"


// Include directives for member types
// Member `expmt_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__init(message_memory);
}

void OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_fini_function(void * message_memory)
{
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_member_array[3] = {
  {
    "req",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request, req),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expmt_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request, expmt_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "backscatter_expmt_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request, backscatter_expmt_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_members = {
  "backscatter_movement_record_msgs_srvs__srv",  // message namespace
  "OdomRecord_Request",  // message name
  3,  // number of fields
  sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request),
  OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_member_array,  // message members
  OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_type_support_handle = {
  0,
  &OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_backscatter_movement_record_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Request)() {
  if (!OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_type_support_handle.typesupport_identifier) {
    OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OdomRecord_Request__rosidl_typesupport_introspection_c__OdomRecord_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__rosidl_typesupport_introspection_c.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__functions.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__init(message_memory);
}

void OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_fini_function(void * message_memory)
{
  backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_member_array[1] = {
  {
    "resp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response, resp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_members = {
  "backscatter_movement_record_msgs_srvs__srv",  // message namespace
  "OdomRecord_Response",  // message name
  1,  // number of fields
  sizeof(backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response),
  OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_member_array,  // message members
  OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_type_support_handle = {
  0,
  &OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_backscatter_movement_record_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Response)() {
  if (!OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_type_support_handle.typesupport_identifier) {
    OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OdomRecord_Response__rosidl_typesupport_introspection_c__OdomRecord_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "backscatter_movement_record_msgs_srvs/srv/detail/odom_record__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_service_members = {
  "backscatter_movement_record_msgs_srvs__srv",  // service namespace
  "OdomRecord",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_Request_message_type_support_handle,
  NULL  // response message
  // backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_Response_message_type_support_handle
};

static rosidl_service_type_support_t backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_service_type_support_handle = {
  0,
  &backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_backscatter_movement_record_msgs_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord)() {
  if (!backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_service_type_support_handle.typesupport_identifier) {
    backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, backscatter_movement_record_msgs_srvs, srv, OdomRecord_Response)()->data;
  }

  return &backscatter_movement_record_msgs_srvs__srv__detail__odom_record__rosidl_typesupport_introspection_c__OdomRecord_service_type_support_handle;
}
