// Generated by gencpp from file nasa_r2_common_msgs/LabeledGripperPositionCommand.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_LABELEDGRIPPERPOSITIONCOMMAND_H
#define NASA_R2_COMMON_MSGS_MESSAGE_LABELEDGRIPPERPOSITIONCOMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct LabeledGripperPositionCommand_
{
  typedef LabeledGripperPositionCommand_<ContainerAllocator> Type;

  LabeledGripperPositionCommand_()
    : header()
    , originator()
    , name()
    , setpoint()
    , command()
    , force()
    , dutyCycle()  {
    }
  LabeledGripperPositionCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , originator(_alloc)
    , name(_alloc)
    , setpoint(_alloc)
    , command(_alloc)
    , force(_alloc)
    , dutyCycle(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _originator_type;
  _originator_type originator;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _name_type;
  _name_type name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _setpoint_type;
  _setpoint_type setpoint;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _command_type;
  _command_type command;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _force_type;
  _force_type force;

   typedef std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> _dutyCycle_type;
  _dutyCycle_type dutyCycle;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> const> ConstPtr;

}; // struct LabeledGripperPositionCommand_

typedef ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<std::allocator<void> > LabeledGripperPositionCommand;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledGripperPositionCommand > LabeledGripperPositionCommandPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::LabeledGripperPositionCommand const> LabeledGripperPositionCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.originator == rhs.originator &&
    lhs.name == rhs.name &&
    lhs.setpoint == rhs.setpoint &&
    lhs.command == rhs.command &&
    lhs.force == rhs.force &&
    lhs.dutyCycle == rhs.dutyCycle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cdc758be1e885c351a0d055826094942";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcdc758be1e885c35ULL;
  static const uint64_t static_value2 = 0x1a0d055826094942ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/LabeledGripperPositionCommand";
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string originator\n"
"string[] name\n"
"string[] setpoint\n"
"string[] command\n"
"float64[] force\n"
"uint16[] dutyCycle\n"
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
;
  }

  static const char* value(const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.originator);
      stream.next(m.name);
      stream.next(m.setpoint);
      stream.next(m.command);
      stream.next(m.force);
      stream.next(m.dutyCycle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LabeledGripperPositionCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::LabeledGripperPositionCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "originator: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.originator);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "setpoint[]" << std::endl;
    for (size_t i = 0; i < v.setpoint.size(); ++i)
    {
      s << indent << "  setpoint[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.setpoint[i]);
    }
    s << indent << "command[]" << std::endl;
    for (size_t i = 0; i < v.command.size(); ++i)
    {
      s << indent << "  command[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.command[i]);
    }
    s << indent << "force[]" << std::endl;
    for (size_t i = 0; i < v.force.size(); ++i)
    {
      s << indent << "  force[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.force[i]);
    }
    s << indent << "dutyCycle[]" << std::endl;
    for (size_t i = 0; i < v.dutyCycle.size(); ++i)
    {
      s << indent << "  dutyCycle[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.dutyCycle[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_LABELEDGRIPPERPOSITIONCOMMAND_H