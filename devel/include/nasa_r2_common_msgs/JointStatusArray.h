// Generated by gencpp from file nasa_r2_common_msgs/JointStatusArray.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_JOINTSTATUSARRAY_H
#define NASA_R2_COMMON_MSGS_MESSAGE_JOINTSTATUSARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nasa_r2_common_msgs/JointStatus.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct JointStatusArray_
{
  typedef JointStatusArray_<ContainerAllocator> Type;

  JointStatusArray_()
    : header()
    , status()  {
    }
  JointStatusArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >> _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> const> ConstPtr;

}; // struct JointStatusArray_

typedef ::nasa_r2_common_msgs::JointStatusArray_<std::allocator<void> > JointStatusArray;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatusArray > JointStatusArrayPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::JointStatusArray const> JointStatusArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "db132c4fff9528f41c0236d435100eda";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdb132c4fff9528f4ULL;
  static const uint64_t static_value2 = 0x1c0236d435100edaULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/JointStatusArray";
  }

  static const char* value(const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"JointStatus[] status\n"
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
"MSG: nasa_r2_common_msgs/JointStatus\n"
"string publisher\n"
"string joint\n"
"uint32 registerValue\n"
"bool coeffsLoaded\n"
"bool bridgeEnabled\n"
"bool motorEnabled\n"
"bool brakeReleased\n"
"bool motorPowerDetected\n"
"bool embeddedMotCom\n"
"bool jointFaulted\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointStatusArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::JointStatusArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status[]" << std::endl;
    for (size_t i = 0; i < v.status.size(); ++i)
    {
      s << indent << "  status[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nasa_r2_common_msgs::JointStatus_<ContainerAllocator> >::stream(s, indent + "    ", v.status[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_JOINTSTATUSARRAY_H
