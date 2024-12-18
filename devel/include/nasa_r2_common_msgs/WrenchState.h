// Generated by gencpp from file nasa_r2_common_msgs/WrenchState.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_WRENCHSTATE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_WRENCHSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Wrench.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct WrenchState_
{
  typedef WrenchState_<ContainerAllocator> Type;

  WrenchState_()
    : header()
    , name()
    , wrench()  {
    }
  WrenchState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , wrench(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _name_type;
  _name_type name;

   typedef std::vector< ::geometry_msgs::Wrench_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Wrench_<ContainerAllocator> >> _wrench_type;
  _wrench_type wrench;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> const> ConstPtr;

}; // struct WrenchState_

typedef ::nasa_r2_common_msgs::WrenchState_<std::allocator<void> > WrenchState;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::WrenchState > WrenchStatePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::WrenchState const> WrenchStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.name == rhs.name &&
    lhs.wrench == rhs.wrench;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ca65dd41fc9f0daae4d837bdbf522e55";
  }

  static const char* value(const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xca65dd41fc9f0daaULL;
  static const uint64_t static_value2 = 0xe4d837bdbf522e55ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/WrenchState";
  }

  static const char* value(const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string[] name\n"
"geometry_msgs/Wrench[] wrench\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.wrench);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WrenchState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::WrenchState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "wrench[]" << std::endl;
    for (size_t i = 0; i < v.wrench.size(); ++i)
    {
      s << indent << "  wrench[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "    ", v.wrench[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_WRENCHSTATE_H
