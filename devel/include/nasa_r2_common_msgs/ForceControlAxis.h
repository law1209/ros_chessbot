// Generated by gencpp from file nasa_r2_common_msgs/ForceControlAxis.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_FORCECONTROLAXIS_H
#define NASA_R2_COMMON_MSGS_MESSAGE_FORCECONTROLAXIS_H


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
struct ForceControlAxis_
{
  typedef ForceControlAxis_<ContainerAllocator> Type;

  ForceControlAxis_()
    : axis()
    , magnitude()  {
    }
  ForceControlAxis_(const ContainerAllocator& _alloc)
    : axis(_alloc)
    , magnitude(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _axis_type;
  _axis_type axis;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _magnitude_type;
  _magnitude_type magnitude;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(X)
  #undef X
#endif
#if defined(_WIN32) && defined(Y)
  #undef Y
#endif
#if defined(_WIN32) && defined(Z)
  #undef Z
#endif
#if defined(_WIN32) && defined(ROLL)
  #undef ROLL
#endif
#if defined(_WIN32) && defined(PITCH)
  #undef PITCH
#endif
#if defined(_WIN32) && defined(YAW)
  #undef YAW
#endif

  enum {
    X = 0u,
    Y = 1u,
    Z = 2u,
    ROLL = 3u,
    PITCH = 4u,
    YAW = 5u,
  };


  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> const> ConstPtr;

}; // struct ForceControlAxis_

typedef ::nasa_r2_common_msgs::ForceControlAxis_<std::allocator<void> > ForceControlAxis;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::ForceControlAxis > ForceControlAxisPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::ForceControlAxis const> ForceControlAxisConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator2> & rhs)
{
  return lhs.axis == rhs.axis &&
    lhs.magnitude == rhs.magnitude;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8efe484fba93bec26ea428bb18a05f9";
  }

  static const char* value(const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8efe484fba93becULL;
  static const uint64_t static_value2 = 0x26ea428bb18a05f9ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/ForceControlAxis";
  }

  static const char* value(const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[] axis\n"
"float32[] magnitude\n"
"\n"
"uint8 X       = 0\n"
"uint8 Y       = 1\n"
"uint8 Z       = 2\n"
"uint8 ROLL    = 3\n"
"uint8 PITCH   = 4\n"
"uint8 YAW     = 5\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.axis);
      stream.next(m.magnitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ForceControlAxis_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::ForceControlAxis_<ContainerAllocator>& v)
  {
    s << indent << "axis[]" << std::endl;
    for (size_t i = 0; i < v.axis.size(); ++i)
    {
      s << indent << "  axis[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.axis[i]);
    }
    s << indent << "magnitude[]" << std::endl;
    for (size_t i = 0; i < v.magnitude.size(); ++i)
    {
      s << indent << "  magnitude[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.magnitude[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_FORCECONTROLAXIS_H