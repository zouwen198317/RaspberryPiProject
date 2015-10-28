// Generated by gencpp from file wheels/cmd_set_car_direction_speedResponse.msg
// DO NOT EDIT!


#ifndef WHEELS_MESSAGE_CMD_SET_CAR_DIRECTION_SPEEDRESPONSE_H
#define WHEELS_MESSAGE_CMD_SET_CAR_DIRECTION_SPEEDRESPONSE_H


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
struct cmd_set_car_direction_speedResponse_
{
  typedef cmd_set_car_direction_speedResponse_<ContainerAllocator> Type;

  cmd_set_car_direction_speedResponse_()
    : nLastDirection(0)
    , nLastSpeed(0)
    , nRetCode(0)  {
    }
  cmd_set_car_direction_speedResponse_(const ContainerAllocator& _alloc)
    : nLastDirection(0)
    , nLastSpeed(0)
    , nRetCode(0)  {
    }



   typedef uint32_t _nLastDirection_type;
  _nLastDirection_type nLastDirection;

   typedef uint32_t _nLastSpeed_type;
  _nLastSpeed_type nLastSpeed;

   typedef int32_t _nRetCode_type;
  _nRetCode_type nRetCode;




  typedef boost::shared_ptr< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> const> ConstPtr;

}; // struct cmd_set_car_direction_speedResponse_

typedef ::wheels::cmd_set_car_direction_speedResponse_<std::allocator<void> > cmd_set_car_direction_speedResponse;

typedef boost::shared_ptr< ::wheels::cmd_set_car_direction_speedResponse > cmd_set_car_direction_speedResponsePtr;
typedef boost::shared_ptr< ::wheels::cmd_set_car_direction_speedResponse const> cmd_set_car_direction_speedResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wheels

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'wheels': ['/home/alex/RaspberryPiProject/roscar/src/wheels/msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f36ed6452d589afbd1b78ebd54bcb2a7";
  }

  static const char* value(const ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf36ed6452d589afbULL;
  static const uint64_t static_value2 = 0xd1b78ebd54bcb2a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wheels/cmd_set_car_direction_speedResponse";
  }

  static const char* value(const ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 nLastDirection\n\
uint32 nLastSpeed\n\
int32 nRetCode\n\
\n\
";
  }

  static const char* value(const ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nLastDirection);
      stream.next(m.nLastSpeed);
      stream.next(m.nRetCode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct cmd_set_car_direction_speedResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wheels::cmd_set_car_direction_speedResponse_<ContainerAllocator>& v)
  {
    s << indent << "nLastDirection: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.nLastDirection);
    s << indent << "nLastSpeed: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.nLastSpeed);
    s << indent << "nRetCode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.nRetCode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHEELS_MESSAGE_CMD_SET_CAR_DIRECTION_SPEEDRESPONSE_H