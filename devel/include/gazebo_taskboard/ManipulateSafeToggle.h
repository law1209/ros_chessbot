// Generated by gencpp from file gazebo_taskboard/ManipulateSafeToggle.msg
// DO NOT EDIT!


#ifndef GAZEBO_TASKBOARD_MESSAGE_MANIPULATESAFETOGGLE_H
#define GAZEBO_TASKBOARD_MESSAGE_MANIPULATESAFETOGGLE_H

#include <ros/service_traits.h>


#include <gazebo_taskboard/ManipulateSafeToggleRequest.h>
#include <gazebo_taskboard/ManipulateSafeToggleResponse.h>


namespace gazebo_taskboard
{

struct ManipulateSafeToggle
{

typedef ManipulateSafeToggleRequest Request;
typedef ManipulateSafeToggleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ManipulateSafeToggle
} // namespace gazebo_taskboard


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gazebo_taskboard::ManipulateSafeToggle > {
  static const char* value()
  {
    return "ae7b68166c28d08616913839674635ad";
  }

  static const char* value(const ::gazebo_taskboard::ManipulateSafeToggle&) { return value(); }
};

template<>
struct DataType< ::gazebo_taskboard::ManipulateSafeToggle > {
  static const char* value()
  {
    return "gazebo_taskboard/ManipulateSafeToggle";
  }

  static const char* value(const ::gazebo_taskboard::ManipulateSafeToggle&) { return value(); }
};


// service_traits::MD5Sum< ::gazebo_taskboard::ManipulateSafeToggleRequest> should match
// service_traits::MD5Sum< ::gazebo_taskboard::ManipulateSafeToggle >
template<>
struct MD5Sum< ::gazebo_taskboard::ManipulateSafeToggleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_taskboard::ManipulateSafeToggle >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulateSafeToggleRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_taskboard::ManipulateSafeToggleRequest> should match
// service_traits::DataType< ::gazebo_taskboard::ManipulateSafeToggle >
template<>
struct DataType< ::gazebo_taskboard::ManipulateSafeToggleRequest>
{
  static const char* value()
  {
    return DataType< ::gazebo_taskboard::ManipulateSafeToggle >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulateSafeToggleRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gazebo_taskboard::ManipulateSafeToggleResponse> should match
// service_traits::MD5Sum< ::gazebo_taskboard::ManipulateSafeToggle >
template<>
struct MD5Sum< ::gazebo_taskboard::ManipulateSafeToggleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_taskboard::ManipulateSafeToggle >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulateSafeToggleResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_taskboard::ManipulateSafeToggleResponse> should match
// service_traits::DataType< ::gazebo_taskboard::ManipulateSafeToggle >
template<>
struct DataType< ::gazebo_taskboard::ManipulateSafeToggleResponse>
{
  static const char* value()
  {
    return DataType< ::gazebo_taskboard::ManipulateSafeToggle >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulateSafeToggleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_TASKBOARD_MESSAGE_MANIPULATESAFETOGGLE_H
