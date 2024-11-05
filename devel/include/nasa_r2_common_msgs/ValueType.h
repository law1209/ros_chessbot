// Generated by gencpp from file nasa_r2_common_msgs/ValueType.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_VALUETYPE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_VALUETYPE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nasa_r2_common_msgs/MappedType.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct ValueType_
{
  typedef ValueType_<ContainerAllocator> Type;

  ValueType_()
    : key()
    , type()
    , index(0)  {
    }
  ValueType_(const ContainerAllocator& _alloc)
    : key(_alloc)
    , type(_alloc)
    , index(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _key_type;
  _key_type key;

   typedef  ::nasa_r2_common_msgs::MappedType_<ContainerAllocator>  _type_type;
  _type_type type;

   typedef uint32_t _index_type;
  _index_type index;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> const> ConstPtr;

}; // struct ValueType_

typedef ::nasa_r2_common_msgs::ValueType_<std::allocator<void> > ValueType;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::ValueType > ValueTypePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::ValueType const> ValueTypeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator2> & rhs)
{
  return lhs.key == rhs.key &&
    lhs.type == rhs.type &&
    lhs.index == rhs.index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "77bd6714cc0b98aab863f096be2d2adc";
  }

  static const char* value(const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x77bd6714cc0b98aaULL;
  static const uint64_t static_value2 = 0xb863f096be2d2adcULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/ValueType";
  }

  static const char* value(const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string     key\n"
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

  static const char* value(const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.type);
      stream.next(m.index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ValueType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::ValueType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::ValueType_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.key);
    s << indent << "type: ";
    s << std::endl;
    Printer< ::nasa_r2_common_msgs::MappedType_<ContainerAllocator> >::stream(s, indent + "  ", v.type);
    s << indent << "index: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_VALUETYPE_H
