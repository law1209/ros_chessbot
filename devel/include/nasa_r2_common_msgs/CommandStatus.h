// Generated by gencpp from file nasa_r2_common_msgs/CommandStatus.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_COMMANDSTATUS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_COMMANDSTATUS_H


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
struct CommandStatus_
{
  typedef CommandStatus_<ContainerAllocator> Type;

  CommandStatus_()
    : success(false)
    , status()  {
    }
  CommandStatus_(const ContainerAllocator& _alloc)
    : success(false)
    , status(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> const> ConstPtr;

}; // struct CommandStatus_

typedef ::nasa_r2_common_msgs::CommandStatus_<std::allocator<void> > CommandStatus;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::CommandStatus > CommandStatusPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::CommandStatus const> CommandStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38b8954d32a849f31d78416b12bff5d1";
  }

  static const char* value(const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38b8954d32a849f3ULL;
  static const uint64_t static_value2 = 0x1d78416b12bff5d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/CommandStatus";
  }

  static const char* value(const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string status\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::CommandStatus_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_COMMANDSTATUS_H
