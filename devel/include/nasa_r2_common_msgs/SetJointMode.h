// Generated by gencpp from file nasa_r2_common_msgs/SetJointMode.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_SETJOINTMODE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_SETJOINTMODE_H

#include <ros/service_traits.h>


#include <nasa_r2_common_msgs/SetJointModeRequest.h>
#include <nasa_r2_common_msgs/SetJointModeResponse.h>


namespace nasa_r2_common_msgs
{

struct SetJointMode
{

typedef SetJointModeRequest Request;
typedef SetJointModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetJointMode
} // namespace nasa_r2_common_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nasa_r2_common_msgs::SetJointMode > {
  static const char* value()
  {
    return "37abae7c450f69bbef7c815fd538b275";
  }

  static const char* value(const ::nasa_r2_common_msgs::SetJointMode&) { return value(); }
};

template<>
struct DataType< ::nasa_r2_common_msgs::SetJointMode > {
  static const char* value()
  {
    return "nasa_r2_common_msgs/SetJointMode";
  }

  static const char* value(const ::nasa_r2_common_msgs::SetJointMode&) { return value(); }
};


// service_traits::MD5Sum< ::nasa_r2_common_msgs::SetJointModeRequest> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::SetJointMode >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::SetJointModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::SetJointMode >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::SetJointModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::SetJointModeRequest> should match
// service_traits::DataType< ::nasa_r2_common_msgs::SetJointMode >
template<>
struct DataType< ::nasa_r2_common_msgs::SetJointModeRequest>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::SetJointMode >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::SetJointModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nasa_r2_common_msgs::SetJointModeResponse> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::SetJointMode >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::SetJointModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::SetJointMode >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::SetJointModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::SetJointModeResponse> should match
// service_traits::DataType< ::nasa_r2_common_msgs::SetJointMode >
template<>
struct DataType< ::nasa_r2_common_msgs::SetJointModeResponse>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::SetJointMode >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::SetJointModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_SETJOINTMODE_H
