// Generated by gencpp from file wheels/cmd_set_navigator_engineResponse.msg
// DO NOT EDIT!


#ifndef WHEELS_MESSAGE_CMD_SET_NAVIGATOR_ENGINERESPONSE_H
#define WHEELS_MESSAGE_CMD_SET_NAVIGATOR_ENGINERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace wheels
{
template <class ContainerAllocator>
struct cmd_set_navigator_engineResponse_
{
  typedef cmd_set_navigator_engineResponse_<ContainerAllocator> Type;

  cmd_set_navigator_engineResponse_()
    : nLastEngineID(0)
    , strLastEngineDescription()
    , nActiveEngineID(0)
    , strActiveEngineDescription()
    , nRetCode(0)  {
    }
  cmd_set_navigator_engineResponse_(const ContainerAllocator& _alloc)
    : nLastEngineID(0)
    , strLastEngineDescription(_alloc)
    , nActiveEngineID(0)
    , strActiveEngineDescription(_alloc)
    , nRetCode(0)  {
    }



   typedef uint32_t _nLastEngineID_type;
  _nLastEngineID_type nLastEngineID;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _strLastEngineDescription_type;
  _strLastEngineDescription_type strLastEngineDescription;

   typedef uint32_t _nActiveEngineID_type;
  _nActiveEngineID_type nActiveEngineID;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _strActiveEngineDescription_type;
  _strActiveEngineDescription_type strActiveEngineDescription;

   typedef int32_t _nRetCode_type;
  _nRetCode_type nRetCode;




  typedef boost::shared_ptr< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> const> ConstPtr;

}; // struct cmd_set_navigator_engineResponse_

typedef ::wheels::cmd_set_navigator_engineResponse_<std::allocator<void> > cmd_set_navigator_engineResponse;

typedef boost::shared_ptr< ::wheels::cmd_set_navigator_engineResponse > cmd_set_navigator_engineResponsePtr;
typedef boost::shared_ptr< ::wheels::cmd_set_navigator_engineResponse const> cmd_set_navigator_engineResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wheels

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'wheels': ['/home/alex/RaspberryPiProject/roscar/src/wheels/msg', '/home/alex/RaspberryPiProject/roscar/devel/share/wheels/msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/jade/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd53b364352e129ec17e824bc0dbe53f";
  }

  static const char* value(const ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd53b364352e129eULL;
  static const uint64_t static_value2 = 0xc17e824bc0dbe53fULL;
};

template<class ContainerAllocator>
struct DataType< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wheels/cmd_set_navigator_engineResponse";
  }

  static const char* value(const ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 nLastEngineID\n\
string strLastEngineDescription\n\
uint32 nActiveEngineID\n\
string strActiveEngineDescription\n\
int32 nRetCode\n\
\n\
";
  }

  static const char* value(const ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nLastEngineID);
      stream.next(m.strLastEngineDescription);
      stream.next(m.nActiveEngineID);
      stream.next(m.strActiveEngineDescription);
      stream.next(m.nRetCode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct cmd_set_navigator_engineResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wheels::cmd_set_navigator_engineResponse_<ContainerAllocator>& v)
  {
    s << indent << "nLastEngineID: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.nLastEngineID);
    s << indent << "strLastEngineDescription: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strLastEngineDescription);
    s << indent << "nActiveEngineID: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.nActiveEngineID);
    s << indent << "strActiveEngineDescription: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strActiveEngineDescription);
    s << indent << "nRetCode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nRetCode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHEELS_MESSAGE_CMD_SET_NAVIGATOR_ENGINERESPONSE_H
