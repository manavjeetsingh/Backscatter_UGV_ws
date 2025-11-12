// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from backscatter_movement_record_msgs_srvs:msg/OdomWithExpmtFlag.idl
// generated code does not contain a copyright notice

#ifndef BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__STRUCT_HPP_
#define BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag __attribute__((deprecated))
#else
# define DEPRECATED__backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag __declspec(deprecated)
#endif

namespace backscatter_movement_record_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OdomWithExpmtFlag_
{
  using Type = OdomWithExpmtFlag_<ContainerAllocator>;

  explicit OdomWithExpmtFlag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : odom(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expmt_flag = false;
    }
  }

  explicit OdomWithExpmtFlag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : odom(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expmt_flag = false;
    }
  }

  // field types and members
  using _odom_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _odom_type odom;
  using _expmt_flag_type =
    bool;
  _expmt_flag_type expmt_flag;

  // setters for named parameter idiom
  Type & set__odom(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->odom = _arg;
    return *this;
  }
  Type & set__expmt_flag(
    const bool & _arg)
  {
    this->expmt_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator> *;
  using ConstRawPtr =
    const backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag
    std::shared_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__backscatter_movement_record_msgs_srvs__msg__OdomWithExpmtFlag
    std::shared_ptr<backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OdomWithExpmtFlag_ & other) const
  {
    if (this->odom != other.odom) {
      return false;
    }
    if (this->expmt_flag != other.expmt_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const OdomWithExpmtFlag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OdomWithExpmtFlag_

// alias to use template instance with default allocator
using OdomWithExpmtFlag =
  backscatter_movement_record_msgs_srvs::msg::OdomWithExpmtFlag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace backscatter_movement_record_msgs_srvs

#endif  // BACKSCATTER_MOVEMENT_RECORD_MSGS_SRVS__MSG__DETAIL__ODOM_WITH_EXPMT_FLAG__STRUCT_HPP_
