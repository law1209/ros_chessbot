// Generated by gencpp from file gazebo_taskboard/ManipulatePowerSwitch.msg
// DO NOT EDIT!


#ifndef GAZEBO_TASKBOARD_MESSAGE_MANIPULATEPOWERSWITCH_H
#define GAZEBO_TASKBOARD_MESSAGE_MANIPULATEPOWERSWITCH_H

#include <ros/service_traits.h>


#include <gazebo_taskboard/ManipulatePowerSwitchRequest.h>
#include <gazebo_taskboard/ManipulatePowerSwitchResponse.h>


namespace gazebo_taskboard
{

struct ManipulatePowerSwitch
{

typedef ManipulatePowerSwitchRequest Request;
typedef ManipulatePowerSwitchResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ManipulatePowerSwitch
} // namespace gazebo_taskboard


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitch > {
  static const char* value()
  {
    return "f5cdf7033f402cd788e5611f14b40b32";
  }

  static const char* value(const ::gazebo_taskboard::ManipulatePowerSwitch&) { return value(); }
};

template<>
struct DataType< ::gazebo_taskboard::ManipulatePowerSwitch > {
  static const char* value()
  {
    return "gazebo_taskboard/ManipulatePowerSwitch";
  }

  static const char* value(const ::gazebo_taskboard::ManipulatePowerSwitch&) { return value(); }
};


// service_traits::MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitchRequest> should match
// service_traits::MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitch >
template<>
struct MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitchRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitch >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulatePowerSwitchRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_taskboard::ManipulatePowerSwitchRequest> should match
// service_traits::DataType< ::gazebo_taskboard::ManipulatePowerSwitch >
template<>
struct DataType< ::gazebo_taskboard::ManipulatePowerSwitchRequest>
{
  static const char* value()
  {
    return DataType< ::gazebo_taskboard::ManipulatePowerSwitch >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulatePowerSwitchRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitchResponse> should match
// service_traits::MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitch >
template<>
struct MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitchResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_taskboard::ManipulatePowerSwitch >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulatePowerSwitchResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_taskboard::ManipulatePowerSwitchResponse> should match
// service_traits::DataType< ::gazebo_taskboard::ManipulatePowerSwitch >
template<>
struct DataType< ::gazebo_taskboard::ManipulatePowerSwitchResponse>
{
  static const char* value()
  {
    return DataType< ::gazebo_taskboard::ManipulatePowerSwitch >::value();
  }
  static const char* value(const ::gazebo_taskboard::ManipulatePowerSwitchResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_TASKBOARD_MESSAGE_MANIPULATEPOWERSWITCH_H