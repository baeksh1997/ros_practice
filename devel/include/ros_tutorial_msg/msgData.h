// Generated by gencpp from file ros_tutorial_msg/msgData.msg
// DO NOT EDIT!


#ifndef ROS_TUTORIAL_MSG_MESSAGE_MSGDATA_H
#define ROS_TUTORIAL_MSG_MESSAGE_MSGDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_tutorial_msg
{
template <class ContainerAllocator>
struct msgData_
{
  typedef msgData_<ContainerAllocator> Type;

  msgData_()
    : data(0)  {
    }
  msgData_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef uint32_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::ros_tutorial_msg::msgData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_tutorial_msg::msgData_<ContainerAllocator> const> ConstPtr;

}; // struct msgData_

typedef ::ros_tutorial_msg::msgData_<std::allocator<void> > msgData;

typedef boost::shared_ptr< ::ros_tutorial_msg::msgData > msgDataPtr;
typedef boost::shared_ptr< ::ros_tutorial_msg::msgData const> msgDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_tutorial_msg::msgData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_tutorial_msg::msgData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_tutorial_msg::msgData_<ContainerAllocator1> & lhs, const ::ros_tutorial_msg::msgData_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_tutorial_msg::msgData_<ContainerAllocator1> & lhs, const ::ros_tutorial_msg::msgData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_tutorial_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorial_msg::msgData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tutorial_msg::msgData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorial_msg::msgData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "304a39449588c7f8ce2df6e8001c5fce";
  }

  static const char* value(const ::ros_tutorial_msg::msgData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x304a39449588c7f8ULL;
  static const uint64_t static_value2 = 0xce2df6e8001c5fceULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_tutorial_msg/msgData";
  }

  static const char* value(const ::ros_tutorial_msg::msgData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 data\n"
;
  }

  static const char* value(const ::ros_tutorial_msg::msgData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct msgData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_tutorial_msg::msgData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_tutorial_msg::msgData_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_TUTORIAL_MSG_MESSAGE_MSGDATA_H
