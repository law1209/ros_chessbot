// Generated by gencpp from file nasa_r2_common_msgs/ParseTableScene.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_PARSETABLESCENE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_PARSETABLESCENE_H

#include <ros/service_traits.h>


#include <nasa_r2_common_msgs/ParseTableSceneRequest.h>
#include <nasa_r2_common_msgs/ParseTableSceneResponse.h>


namespace nasa_r2_common_msgs
{

struct ParseTableScene
{

typedef ParseTableSceneRequest Request;
typedef ParseTableSceneResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ParseTableScene
} // namespace nasa_r2_common_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nasa_r2_common_msgs::ParseTableScene > {
  static const char* value()
  {
    return "077c5efd1df70c6ee9e651d32d6b0351";
  }

  static const char* value(const ::nasa_r2_common_msgs::ParseTableScene&) { return value(); }
};

template<>
struct DataType< ::nasa_r2_common_msgs::ParseTableScene > {
  static const char* value()
  {
    return "nasa_r2_common_msgs/ParseTableScene";
  }

  static const char* value(const ::nasa_r2_common_msgs::ParseTableScene&) { return value(); }
};


// service_traits::MD5Sum< ::nasa_r2_common_msgs::ParseTableSceneRequest> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::ParseTableScene >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::ParseTableSceneRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::ParseTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ParseTableSceneRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::ParseTableSceneRequest> should match
// service_traits::DataType< ::nasa_r2_common_msgs::ParseTableScene >
template<>
struct DataType< ::nasa_r2_common_msgs::ParseTableSceneRequest>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::ParseTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ParseTableSceneRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nasa_r2_common_msgs::ParseTableSceneResponse> should match
// service_traits::MD5Sum< ::nasa_r2_common_msgs::ParseTableScene >
template<>
struct MD5Sum< ::nasa_r2_common_msgs::ParseTableSceneResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nasa_r2_common_msgs::ParseTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ParseTableSceneResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nasa_r2_common_msgs::ParseTableSceneResponse> should match
// service_traits::DataType< ::nasa_r2_common_msgs::ParseTableScene >
template<>
struct DataType< ::nasa_r2_common_msgs::ParseTableSceneResponse>
{
  static const char* value()
  {
    return DataType< ::nasa_r2_common_msgs::ParseTableScene >::value();
  }
  static const char* value(const ::nasa_r2_common_msgs::ParseTableSceneResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_PARSETABLESCENE_H
