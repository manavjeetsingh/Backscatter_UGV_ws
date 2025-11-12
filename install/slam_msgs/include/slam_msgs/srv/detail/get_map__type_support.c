// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from slam_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "slam_msgs/srv/detail/get_map__rosidl_typesupport_introspection_c.h"
#include "slam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "slam_msgs/srv/detail/get_map__functions.h"
#include "slam_msgs/srv/detail/get_map__struct.h"


// Include directives for member types
// Member `kf_id_for_landmarks`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_msgs__srv__GetMap_Request__init(message_memory);
}

void GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_fini_function(void * message_memory)
{
  slam_msgs__srv__GetMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_member_array[2] = {
  {
    "tracked_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__srv__GetMap_Request, tracked_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kf_id_for_landmarks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__srv__GetMap_Request, kf_id_for_landmarks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_members = {
  "slam_msgs__srv",  // message namespace
  "GetMap_Request",  // message name
  2,  // number of fields
  sizeof(slam_msgs__srv__GetMap_Request),
  GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_member_array,  // message members
  GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_type_support_handle = {
  0,
  &GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, srv, GetMap_Request)() {
  if (!GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_type_support_handle.typesupport_identifier) {
    GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetMap_Request__rosidl_typesupport_introspection_c__GetMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "slam_msgs/srv/detail/get_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "slam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "slam_msgs/srv/detail/get_map__functions.h"
// already included above
// #include "slam_msgs/srv/detail/get_map__struct.h"


// Include directives for member types
// Member `data`
#include "slam_msgs/msg/map_data.h"
// Member `data`
#include "slam_msgs/msg/detail/map_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  slam_msgs__srv__GetMap_Response__init(message_memory);
}

void GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_fini_function(void * message_memory)
{
  slam_msgs__srv__GetMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(slam_msgs__srv__GetMap_Response, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_members = {
  "slam_msgs__srv",  // message namespace
  "GetMap_Response",  // message name
  1,  // number of fields
  sizeof(slam_msgs__srv__GetMap_Response),
  GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_member_array,  // message members
  GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_type_support_handle = {
  0,
  &GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, srv, GetMap_Response)() {
  GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, msg, MapData)();
  if (!GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_type_support_handle.typesupport_identifier) {
    GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetMap_Response__rosidl_typesupport_introspection_c__GetMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "slam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "slam_msgs/srv/detail/get_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_service_members = {
  "slam_msgs__srv",  // service namespace
  "GetMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_Request_message_type_support_handle,
  NULL  // response message
  // slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_service_type_support_handle = {
  0,
  &slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, srv, GetMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, srv, GetMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_slam_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, srv, GetMap)() {
  if (!slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_service_type_support_handle.typesupport_identifier) {
    slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, srv, GetMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, slam_msgs, srv, GetMap_Response)()->data;
  }

  return &slam_msgs__srv__detail__get_map__rosidl_typesupport_introspection_c__GetMap_service_type_support_handle;
}
