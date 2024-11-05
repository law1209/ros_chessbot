// Generated by gencpp from file nasa_r2_common_msgs/ResetTableScene.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENE_H

#include <ros/service_traits.h>


#include <nasa_r2_common_msgs/ResetTableSceneRequest.h>
#include <nasa_r2_common_msgs/ResetTableSceneResponse.h>


namespace nasa_r2_common_msgs
{

struct ResetTableScene
{

typedef ResetTableSceneRequest Request;
typedef ResetTableSceneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ResetTableScene
} // namespace nasa_r2_common_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nasa_r2_common_msgs::ResetTableScene > {
  static const char* value()
  {
    return "c95f6c9db0edf7da4840d218c33352c7";
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableScene&) { return value(); }
};

template<>
struct DataType< ::nasa_r2_common_msgs::ResetTableScene > {
  static const char* value()
  {
    return "nasa_r2_common_msgs/ResetTableScene";
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableScene&) { return value(); }
};


// service_traits::MD5Sum< ::nasa_r2_common_msgs::ResetTableSceneRequest> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::ResetTableScene >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::ResetTableSceneRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::ResetTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::ResetTableSceneRequest> should match
// service_traits::DataType< ::nasa_r2_common_msgs::ResetTableScene >
template<>
struct DataType< ::nasa_r2_common_msgs::ResetTableSceneRequest>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::ResetTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nasa_r2_common_msgs::ResetTableSceneResponse> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::ResetTableScene >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::ResetTableSceneResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::ResetTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::ResetTableSceneResponse> should match
// service_traits::DataType< ::nasa_r2_common_msgs::ResetTableScene >
template<>
struct DataType< ::nasa_r2_common_msgs::ResetTableSceneResponse>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::ResetTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENE_H