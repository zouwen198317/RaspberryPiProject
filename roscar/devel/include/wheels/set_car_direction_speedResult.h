// Generated by gencpp from file wheels/set_car_direction_speedResult.msg
// DO NOT EDIT!


#ifndef WHEELS_MESSAGE_SET_CAR_DIRECTION_SPEEDRESULT_H
#define WHEELS_MESSAGE_SET_CAR_DIRECTION_SPEEDRESULT_H


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
struct set_car_direction_speedResult_
{
  typedef set_car_direction_speedResult_<ContainerAllocator> Type;

  set_car_direction_speedResult_()
    : nLastDirection(0)
    , nLastSpeed(0)
    , nRetCode(0)  {
    }
  set_car_direction_speedResult_(const ContainerAllocator& _alloc)
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




  typedef boost::shared_ptr< ::wheels::set_car_direction_speedResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wheels::set_car_direction_speedResult_<ContainerAllocator> const> ConstPtr;

}; // struct set_car_direction_speedResult_

typedef ::wheels::set_car_direction_speedResult_<std::allocator<void> > set_car_direction_speedResult;

typedef boost::shared_ptr< ::wheels::set_car_direction_speedResult > set_car_direction_speedResultPtr;
typedef boost::shared_ptr< ::wheels::set_car_direction_speedResult const> set_car_direction_speedResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wheels::set_car_direction_speedResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wheels

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'wheels': ['/home/alex/RaspberryPiProject/roscar/src/wheels/msg', '/home/alex/RaspberryPiProject/roscar/devel/share/wheels/msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/jade/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wheels::set_car_direction_speedResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheels::set_car_direction_speedResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheels::set_car_direction_speedResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f36ed6452d589afbd1b78ebd54bcb2a7";
  }

  static const char* value(const ::wheels::set_car_direction_speedResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf36ed6452d589afbULL;
  static const uint64_t static_value2 = 0xd1b78ebd54bcb2a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wheels/set_car_direction_speedResult";
  }

  static const char* value(const ::wheels::set_car_direction_speedResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#define the result\n\
uint32 nLastDirection\n\
uint32 nLastSpeed\n\
int32 nRetCode\n\
";
  }

  static const char* value(const ::wheels::set_car_direction_speedResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nLastDirection);
      stream.next(m.nLastSpeed);
      stream.next(m.nRetCode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct set_car_direction_speedResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wheels::set_car_direction_speedResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wheels::set_car_direction_speedResult_<ContainerAllocator>& v)
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

#endif // WHEELS_MESSAGE_SET_CAR_DIRECTION_SPEEDRESULT_H