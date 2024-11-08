// Generated by gencpp from file gazebo_taskboard/ManipulateRockerSwitchRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_TASKBOARD_MESSAGE_MANIPULATEROCKERSWITCHREQUEST_H
#define GAZEBO_TASKBOARD_MESSAGE_MANIPULATEROCKERSWITCHREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_taskboard
{
template <class ContainerAllocator>
struct ManipulateRockerSwitchRequest_
{
  typedef ManipulateRockerSwitchRequest_<ContainerAllocator> Type;

  ManipulateRockerSwitchRequest_()
    : torque(0.0)
    , duration(0.0)  {
    }
  ManipulateRockerSwitchRequest_(const ContainerAllocator& _alloc)
    : torque(0.0)
    , duration(0.0)  {
  (void)_alloc;
    }



   typedef double _torque_type;
  _torque_type torque;

   typedef double _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ManipulateRockerSwitchRequest_

typedef ::gazebo_taskboard::ManipulateRockerSwitchRequest_<std::allocator<void> > ManipulateRockerSwitchRequest;

typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateRockerSwitchRequest > ManipulateRockerSwitchRequestPtr;
typedef boost::shared_ptr< ::gazebo_taskboard::ManipulateRockerSwitchRequest const> ManipulateRockerSwitchRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator1> & lhs, const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator2> & rhs)
{
  return lhs.torque == rhs.torque &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator1> & lhs, const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_taskboard

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1050942bb5e56893a9ebd0315acc6861";
  }

  static const char* value(const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1050942bb5e56893ULL;
  static const uint64_t static_value2 = 0xa9ebd0315acc6861ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_taskboard/ManipulateRockerSwitchRequest";
  }

  static const char* value(const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 torque\n"
"float64 duration\n"
;
  }

  static const char* value(const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.torque);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ManipulateRockerSwitchRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_taskboard::ManipulateRockerSwitchRequest_<ContainerAllocator>& v)
  {
    s << indent << "torque: ";
    Printer<double>::stream(s, indent + "  ", v.torque);
    s << indent << "duration: ";
    Printer<double>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_TASKBOARD_MESSAGE_MANIPULATEROCKERSWITCHREQUEST_H
