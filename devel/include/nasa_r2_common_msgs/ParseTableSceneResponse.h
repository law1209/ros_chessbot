// Generated by gencpp from file nasa_r2_common_msgs/ParseTableSceneResponse.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_PARSETABLESCENERESPONSE_H
#define NASA_R2_COMMON_MSGS_MESSAGE_PARSETABLESCENERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <visualization_msgs/MarkerArray.h>

namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct ParseTableSceneResponse_
{
  typedef ParseTableSceneResponse_<ContainerAllocator> Type;

  ParseTableSceneResponse_()
    : table_found(false)
    , markers()  {
    }
  ParseTableSceneResponse_(const ContainerAllocator& _alloc)
    : table_found(false)
    , markers(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _table_found_type;
  _table_found_type table_found;

   typedef  ::visualization_msgs::MarkerArray_<ContainerAllocator>  _markers_type;
  _markers_type markers;





  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ParseTableSceneResponse_

typedef ::nasa_r2_common_msgs::ParseTableSceneResponse_<std::allocator<void> > ParseTableSceneResponse;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::ParseTableSceneResponse > ParseTableSceneResponsePtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::ParseTableSceneResponse const> ParseTableSceneResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator2> & rhs)
{
  return lhs.table_found == rhs.table_found &&
    lhs.markers == rhs.markers;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator1> & lhs, const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f98d3a69101817a05996e1d8e70bebcc";
  }

  static const char* value(const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf98d3a69101817a0ULL;
  static const uint64_t static_value2 = 0x5996e1d8e70bebccULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/ParseTableSceneResponse";
  }

  static const char* value(const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool table_found\n"
"visualization_msgs/MarkerArray markers\n"
"\n"
"\n"
"================================================================================\n"
"MSG: visualization_msgs/MarkerArray\n"
"Marker[] markers\n"
"\n"
"================================================================================\n"
"MSG: visualization_msgs/Marker\n"
"# See http://www.ros.org/wiki/rviz/DisplayTypes/Marker and http://www.ros.org/wiki/rviz/Tutorials/Markers%3A%20Basic%20Shapes for more information on using this message with rviz\n"
"\n"
"uint8 ARROW=0\n"
"uint8 CUBE=1\n"
"uint8 SPHERE=2\n"
"uint8 CYLINDER=3\n"
"uint8 LINE_STRIP=4\n"
"uint8 LINE_LIST=5\n"
"uint8 CUBE_LIST=6\n"
"uint8 SPHERE_LIST=7\n"
"uint8 POINTS=8\n"
"uint8 TEXT_VIEW_FACING=9\n"
"uint8 MESH_RESOURCE=10\n"
"uint8 TRIANGLE_LIST=11\n"
"\n"
"uint8 ADD=0\n"
"uint8 MODIFY=0\n"
"uint8 DELETE=2\n"
"uint8 DELETEALL=3\n"
"\n"
"Header header                        # header for time/frame information\n"
"string ns                            # Namespace to place this object in... used in conjunction with id to create a unique name for the object\n"
"int32 id 		                         # object ID useful in conjunction with the namespace for manipulating and deleting the object later\n"
"int32 type 		                       # Type of object\n"
"int32 action 	                       # 0 add/modify an object, 1 (deprecated), 2 deletes an object, 3 deletes all objects\n"
"geometry_msgs/Pose pose                 # Pose of the object\n"
"geometry_msgs/Vector3 scale             # Scale of the object 1,1,1 means default (usually 1 meter square)\n"
"std_msgs/ColorRGBA color             # Color [0.0-1.0]\n"
"duration lifetime                    # How long the object should last before being automatically deleted.  0 means forever\n"
"bool frame_locked                    # If this marker should be frame-locked, i.e. retransformed into its frame every timestep\n"
"\n"
"#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n"
"geometry_msgs/Point[] points\n"
"#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n"
"#number of colors must either be 0 or equal to the number of points\n"
"#NOTE: alpha is not yet used\n"
"std_msgs/ColorRGBA[] colors\n"
"\n"
"# NOTE: only used for text markers\n"
"string text\n"
"\n"
"# NOTE: only used for MESH_RESOURCE markers\n"
"string mesh_resource\n"
"bool mesh_use_embedded_materials\n"
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
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
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
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.table_found);
      stream.next(m.markers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParseTableSceneResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::ParseTableSceneResponse_<ContainerAllocator>& v)
  {
    s << indent << "table_found: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.table_found);
    s << indent << "markers: ";
    s << std::endl;
    Printer< ::visualization_msgs::MarkerArray_<ContainerAllocator> >::stream(s, indent + "  ", v.markers);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_PARSETABLESCENERESPONSE_H
