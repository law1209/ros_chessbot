// Generated by gencpp from file nasa_r2_common_msgs/JointControlClearFaultMode.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLCLEARFAULTMODE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLCLEARFAULTMODE_H


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
struct JointControlClearFaultMode_
{
  typedef JointControlClearFaultMode_<ContainerAllocator> Type;

  JointControlClearFaultMode_()
    : state(0)  {
    }
  JointControlClearFaultMode_(const ContainerAllocator& _alloc)
    : state(0)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(IGNORE)
  #undef IGNORE
#endif
#if defined(_WIN32) && defined(DISABLE)
  #undef DISABLE
#endif
#if defined(_WIN32) && defined(ENABLE)
  #undef ENABLE
#endif

  enum {
    IGNORE = 0u,
    DISABLE = 1u,
    ENABLE = 2u,
  };


  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> const> ConstPtr;

}; // struct JointControlClearFaultMode_

typedef ::nasa_r2_common_msgs::JointControlClearFaultMode_<std::allocator<void> > JointControlClearFaultMode;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlClearFaultMode > JointControlClearFaultModePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointControlClearFaultMode const> JointControlClearFaultModeConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator2> & rhs)
{
  return lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbfa308698e6773f87af15b3be02775b";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbfa308698e6773fULL;
  static const uint64_t static_value2 = 0x87af15b3be02775bULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointControlClearFaultMode";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 state\n"
"uint8 IGNORE  = 0\n"
"uint8 DISABLE = 1\n"
"uint8 ENABLE  = 2\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControlClearFaultMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointControlClearFaultMode_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTCONTROLCLEARFAULTMODE_H
