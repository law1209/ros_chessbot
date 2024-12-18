// Generated by gencpp from file nasa_r2_common_msgs/PoseCommandParams.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMANDPARAMS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMANDPARAMS_H


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
struct PoseCommandParams_
{
  typedef PoseCommandParams_<ContainerAllocator> Type;

  PoseCommandParams_()
    : maxLinVel(0.0)
    , maxRotVel(0.0)  {
    }
  PoseCommandParams_(const ContainerAllocator& _alloc)
    : maxLinVel(0.0)
    , maxRotVel(0.0)  {
  (void)_alloc;
    }



   typedef float _maxLinVel_type;
  _maxLinVel_type maxLinVel;

   typedef float _maxRotVel_type;
  _maxRotVel_type maxRotVel;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> const> ConstPtr;

}; // struct PoseCommandParams_

typedef ::nasa_r2_common_msgs::PoseCommandParams_<std::allocator<void> > PoseCommandParams;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandParams > PoseCommandParamsPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandParams const> PoseCommandParamsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator2> & rhs)
{
  return lhs.maxLinVel == rhs.maxLinVel &&
    lhs.maxRotVel == rhs.maxRotVel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a159026142e288942cb08238d17789db";
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa159026142e28894ULL;
  static const uint64_t static_value2 = 0x2cb08238d17789dbULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/PoseCommandParams";
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 maxLinVel\n"
"float32 maxRotVel\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.maxLinVel);
      stream.next(m.maxRotVel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseCommandParams_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::PoseCommandParams_<ContainerAllocator>& v)
  {
    s << indent << "maxLinVel: ";
    Printer<float>::stream(s, indent + "  ", v.maxLinVel);
    s << indent << "maxRotVel: ";
    Printer<float>::stream(s, indent + "  ", v.maxRotVel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMANDPARAMS_H
