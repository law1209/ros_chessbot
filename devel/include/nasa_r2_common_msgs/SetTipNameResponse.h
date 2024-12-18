// Generated by gencpp from file nasa_r2_common_msgs/SetTipNameResponse.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_SETTIPNAMERESPONSE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_SETTIPNAMERESPONSE_H


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
struct SetTipNameResponse_
{
  typedef SetTipNameResponse_<ContainerAllocator> Type;

  SetTipNameResponse_()
    : result(false)  {
    }
  SetTipNameResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetTipNameResponse_

typedef ::nasa_r2_common_msgs::SetTipNameResponse_<std::allocator<void> > SetTipNameResponse;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameResponse > SetTipNameResponsePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::SetTipNameResponse const> SetTipNameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/SetTipNameResponse";
  }

  static const char* value(const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTipNameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::SetTipNameResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_SETTIPNAMERESPONSE_H
