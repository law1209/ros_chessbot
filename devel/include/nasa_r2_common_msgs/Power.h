// Generated by gencpp from file nasa_r2_common_msgs/Power.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_POWER_H
#define NASA_R2_COMMON_MSGS_MESSAGE_POWER_H

#include <ros/service_traits.h>


#include <nasa_r2_common_msgs/PowerRequest.h>
#include <nasa_r2_common_msgs/PowerResponse.h>


namespace nasa_r2_common_msgs
{

struct Power
{

typedef PowerRequest Request;
typedef PowerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Power
} // namespace nasa_r2_common_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nasa_r2_common_msgs::Power > {
  static const char* value()
  {
    return "8ab79e1aeae0eefc42684aa6a50ac610";
  }

  static const char* value(const ::nasa_r2_common_msgs::Power&) { return value(); }
};

template<>
struct DataType< ::nasa_r2_common_msgs::Power > {
  static const char* value()
  {
    return "nasa_r2_common_msgs/Power";
  }

  static const char* value(const ::nasa_r2_common_msgs::Power&) { return value(); }
};


// service_traits::MD5Sum< ::nasa_r2_common_msgs::PowerRequest> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::Power >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::PowerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::Power >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::PowerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::PowerRequest> should match
// service_traits::DataType< ::nasa_r2_common_msgs::Power >
template<>
struct DataType< ::nasa_r2_common_msgs::PowerRequest>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::Power >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::PowerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nasa_r2_common_msgs::PowerResponse> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::Power >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::PowerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::Power >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::PowerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::PowerResponse> should match
// service_traits::DataType< ::nasa_r2_common_msgs::Power >
template<>
struct DataType< ::nasa_r2_common_msgs::PowerResponse>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::Power >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::PowerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_POWER_H
