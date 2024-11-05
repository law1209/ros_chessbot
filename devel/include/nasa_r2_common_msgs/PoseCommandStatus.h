// Generated by gencpp from file nasa_r2_common_msgs/PoseCommandStatus.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMANDSTATUS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMANDSTATUS_H


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
struct PoseCommandStatus_
{
  typedef PoseCommandStatus_<ContainerAllocator> Type;

  PoseCommandStatus_()
    : stamp()
    , commandId()
    , status(0)
    , statusMessage()  {
    }
  PoseCommandStatus_(const ContainerAllocator& _alloc)
    : stamp()
    , commandId(_alloc)
    , status(0)
    , statusMessage(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _commandId_type;
  _commandId_type commandId;

   typedef uint8_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _statusMessage_type;
  _statusMessage_type statusMessage;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(PENDING)
  #undef PENDING
#endif
#if defined(_WIN32) && defined(ACTIVE)
  #undef ACTIVE
#endif
#if defined(_WIN32) && defined(REJECTED)
  #undef REJECTED
#endif
#if defined(_WIN32) && defined(SUCCEEDED)
  #undef SUCCEEDED
#endif
#if defined(_WIN32) && defined(FAILED)
  #undef FAILED
#endif

  enum {
    PENDING = 0u,
    ACTIVE = 1u,
    REJECTED = 2u,
    SUCCEEDED = 3u,
    FAILED = 4u,
  };


  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> const> ConstPtr;

}; // struct PoseCommandStatus_

typedef ::nasa_r2_common_msgs::PoseCommandStatus_<std::allocator<void> > PoseCommandStatus;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandStatus > PoseCommandStatusPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::PoseCommandStatus const> PoseCommandStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.commandId == rhs.commandId &&
    lhs.status == rhs.status &&
    lhs.statusMessage == rhs.statusMessage;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82493b7735e3fe414b93381d96bfd1ee";
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82493b7735e3fe41ULL;
  static const uint64_t static_value2 = 0x4b93381d96bfd1eeULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/PoseCommandStatus";
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n"
"string commandId\n"
"uint8 PENDING=0\n"
"uint8 ACTIVE=1\n"
"uint8 REJECTED=2\n"
"uint8 SUCCEEDED=3\n"
"uint8 FAILED=4\n"
"uint8 status\n"
"string statusMessage\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.commandId);
      stream.next(m.status);
      stream.next(m.statusMessage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseCommandStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::PoseCommandStatus_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "commandId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.commandId);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "statusMessage: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.statusMessage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_POSECOMMANDSTATUS_H
