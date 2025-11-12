// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from backscatter_movement_record_msgs_srvs:srv/OdomRecord.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__STRUCT_HPP_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request __attribute__((deprecated))
#else
# define DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request __declspec(deprecated)
#endif

namespace backscatter_movement_record_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OdomRecord_Request_
{
  using Type = OdomRecord_Request_<ContainerAllocator>;

  explicit OdomRecord_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = false;
      this->expmt_name = "";
      this->backscatter_expmt_flag = false;
    }
  }

  explicit OdomRecord_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : expmt_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = false;
      this->expmt_name = "";
      this->backscatter_expmt_flag = false;
    }
  }

  // field types and members
  using _req_type =
    bool;
  _req_type req;
  using _expmt_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _expmt_name_type expmt_name;
  using _backscatter_expmt_flag_type =
    bool;
  _backscatter_expmt_flag_type backscatter_expmt_flag;

  // setters for named parameter idiom
  Type & set__req(
    const bool & _arg)
  {
    this->req = _arg;
    return *this;
  }
  Type & set__expmt_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->expmt_name = _arg;
    return *this;
  }
  Type & set__backscatter_expmt_flag(
    const bool & _arg)
  {
    this->backscatter_expmt_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Request
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OdomRecord_Request_ & other) const
  {
    if (this->req != other.req) {
      return false;
    }
    if (this->expmt_name != other.expmt_name) {
      return false;
    }
    if (this->backscatter_expmt_flag != other.backscatter_expmt_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const OdomRecord_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OdomRecord_Request_

// alias to use template instance with default allocator
using OdomRecord_Request =
  backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace backscatter_movement_record_msgs_srvs


#ifndef _WIN32
# define DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response __attribute__((deprecated))
#else
# define DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response __declspec(deprecated)
#endif

namespace backscatter_movement_record_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OdomRecord_Response_
{
  using Type = OdomRecord_Response_<ContainerAllocator>;

  explicit OdomRecord_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = false;
    }
  }

  explicit OdomRecord_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resp = false;
    }
  }

  // field types and members
  using _resp_type =
    bool;
  _resp_type resp;

  // setters for named parameter idiom
  Type & set__resp(
    const bool & _arg)
  {
    this->resp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__backscatter_movement_record_msgs_srvs__srv__OdomRecord_Response
    std::shared_ptr<backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OdomRecord_Response_ & other) const
  {
    if (this->resp != other.resp) {
      return false;
    }
    return true;
  }
  bool operator!=(const OdomRecord_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OdomRecord_Response_

// alias to use template instance with default allocator
using OdomRecord_Response =
  backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace backscatter_movement_record_msgs_srvs

namespace backscatter_movement_record_msgs_srvs
{

namespace srv
{

struct OdomRecord
{
  using Request = backscatter_movement_record_msgs_srvs::srv::OdomRecord_Request;
  using Response = backscatter_movement_record_msgs_srvs::srv::OdomRecord_Response;
};

}  // namespace srv

}  // namespace backscatter_movement_record_msgs_srvs

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__SRV__DETAIL__ODOM_RECORD__STRUCT_HPP_
