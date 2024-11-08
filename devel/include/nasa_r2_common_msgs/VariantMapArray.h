// Generated by gencpp from file nasa_r2_common_msgs/VariantMapArray.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_VARIANTMAPARRAY_H
#define NASA_R2_COMMON_MSGS_MESSAGE_VARIANTMAPARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nasa_r2_common_msgs/VariantMap.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct VariantMapArray_
{
  typedef VariantMapArray_<ContainerAllocator> Type;

  VariantMapArray_()
    : header()
    , map()  {
    }
  VariantMapArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , map(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >> _map_type;
  _map_type map;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> const> ConstPtr;

}; // struct VariantMapArray_

typedef ::nasa_r2_common_msgs::VariantMapArray_<std::allocator<void> > VariantMapArray;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMapArray > VariantMapArrayPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::VariantMapArray const> VariantMapArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.map == rhs.map;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "81c5b31cbd0a1ce333af5ea67766c271";
  }

  static const char* value(const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x81c5b31cbd0a1ce3ULL;
  static const uint64_t static_value2 = 0x33af5ea67766c271ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/VariantMapArray";
  }

  static const char* value(const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header       header\n"
"VariantMap[] map\n"
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
"MSG: nasa_r2_common_msgs/VariantMap\n"
"string      name\n"
"string      message\n"
"ValueType[] value\n"
"string[]    stringMap\n"
"uint16[]    uint16Map\n"
"int16[]     int16Map\n"
"uint32[]    uint32Map\n"
"int32[]     int32Map\n"
"float32[]   float32Map\n"
"bool[]      boolMap\n"
"\n"
"================================================================================\n"
"MSG: nasa_r2_common_msgs/ValueType\n"
"string     key\n"
"MappedType type\n"
"uint32     index\n"
"\n"
"================================================================================\n"
"MSG: nasa_r2_common_msgs/MappedType\n"
"uint8 STRING  = 0\n"
"uint8 UINT16  = 1\n"
"uint8 INT16   = 2\n"
"uint8 UINT32  = 3\n"
"uint8 INT32   = 4\n"
"uint8 FLOAT32 = 5\n"
"uint8 BOOL    = 6\n"
"\n"
"uint8 type\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.map);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VariantMapArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::VariantMapArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "map[]" << std::endl;
    for (size_t i = 0; i < v.map.size(); ++i)
    {
      s << indent << "  map[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nasa_r2_common_msgs::VariantMap_<ContainerAllocator> >::stream(s, indent + "    ", v.map[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_VARIANTMAPARRAY_H
