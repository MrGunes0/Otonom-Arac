// Generated by gencpp from file ogretici_paket/GorevDurumResult.msg
// DO NOT EDIT!


#ifndef OGRETICI_PAKET_MESSAGE_GOREVDURUMRESULT_H
#define OGRETICI_PAKET_MESSAGE_GOREVDURUMRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ogretici_paket
{
template <class ContainerAllocator>
struct GorevDurumResult_
{
  typedef GorevDurumResult_<ContainerAllocator> Type;

  GorevDurumResult_()
    : sonuc()  {
    }
  GorevDurumResult_(const ContainerAllocator& _alloc)
    : sonuc(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sonuc_type;
  _sonuc_type sonuc;





  typedef boost::shared_ptr< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> const> ConstPtr;

}; // struct GorevDurumResult_

typedef ::ogretici_paket::GorevDurumResult_<std::allocator<void> > GorevDurumResult;

typedef boost::shared_ptr< ::ogretici_paket::GorevDurumResult > GorevDurumResultPtr;
typedef boost::shared_ptr< ::ogretici_paket::GorevDurumResult const> GorevDurumResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ogretici_paket::GorevDurumResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ogretici_paket::GorevDurumResult_<ContainerAllocator1> & lhs, const ::ogretici_paket::GorevDurumResult_<ContainerAllocator2> & rhs)
{
  return lhs.sonuc == rhs.sonuc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ogretici_paket::GorevDurumResult_<ContainerAllocator1> & lhs, const ::ogretici_paket::GorevDurumResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ogretici_paket

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4b7dca703b626d43925cc803ca5a123c";
  }

  static const char* value(const ::ogretici_paket::GorevDurumResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4b7dca703b626d43ULL;
  static const uint64_t static_value2 = 0x925cc803ca5a123cULL;
};

template<class ContainerAllocator>
struct DataType< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ogretici_paket/GorevDurumResult";
  }

  static const char* value(const ::ogretici_paket::GorevDurumResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"string sonuc\n"
;
  }

  static const char* value(const ::ogretici_paket::GorevDurumResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sonuc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GorevDurumResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ogretici_paket::GorevDurumResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ogretici_paket::GorevDurumResult_<ContainerAllocator>& v)
  {
    s << indent << "sonuc: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sonuc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OGRETICI_PAKET_MESSAGE_GOREVDURUMRESULT_H
