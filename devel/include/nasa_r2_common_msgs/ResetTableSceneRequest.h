// Generated by gencpp from file nasa_r2_common_msgs/ResetTableSceneRequest.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENEREQUEST_H
#define NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct ResetTableSceneRequest_
{
  typedef ResetTableSceneRequest_<ContainerAllocator> Type;

  ResetTableSceneRequest_()
    : reset(false)  {
    }
  ResetTableSceneRequest_(const ContainerAllocator& _alloc)
    : reset(false)  {
  (void)_alloc;
    }



   typedef uint8_t _reset_type;
  _reset_type reset;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ResetTableSceneRequest_

typedef ::nasa_r2_common_msgs::ResetTableSceneRequest_<std::allocator<void> > ResetTableSceneRequest;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneRequest > ResetTableSceneRequestPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::ResetTableSceneRequest const> ResetTableSceneRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator2> & rhs)
{
  return lhs.reset == rhs.reset;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ba4b0b221fb425ac5eaf73f71ae34971";
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xba4b0b221fb425acULL;
  static const uint64_t static_value2 = 0x5eaf73f71ae34971ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/ResetTableSceneRequest";
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool reset\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reset);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetTableSceneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::ResetTableSceneRequest_<ContainerAllocator>& v)
  {
    s << indent << "reset: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_RESETTABLESCENEREQUEST_H