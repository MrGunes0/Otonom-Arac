// Generated by gencpp from file ogretici_paket/GecenZamanRequest.msg
// DO NOT EDIT!


#ifndef OGRETICI_PAKET_MESSAGE_GECENZAMANREQUEST_H
#define OGRETICI_PAKET_MESSAGE_GECENZAMANREQUEST_H


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
struct GecenZamanRequest_
{
  typedef GecenZamanRequest_<ContainerAllocator> Type;

  GecenZamanRequest_()
    : hedef_konum(0.0)  {
    }
  GecenZamanRequest_(const ContainerAllocator& _alloc)
    : hedef_konum(0.0)  {
  (void)_alloc;
    }



   typedef double _hedef_konum_type;
  _hedef_konum_type hedef_konum;





  typedef boost::shared_ptr< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GecenZamanRequest_

typedef ::ogretici_paket::GecenZamanRequest_<std::allocator<void> > GecenZamanRequest;

typedef boost::shared_ptr< ::ogretici_paket::GecenZamanRequest > GecenZamanRequestPtr;
typedef boost::shared_ptr< ::ogretici_paket::GecenZamanRequest const> GecenZamanRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator1> & lhs, const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator2> & rhs)
{
  return lhs.hedef_konum == rhs.hedef_konum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator1> & lhs, const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ogretici_paket

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fcd2cdadb1abf087165cc2ac6740489f";
  }

  static const char* value(const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfcd2cdadb1abf087ULL;
  static const uint64_t static_value2 = 0x165cc2ac6740489fULL;
};

template<class ContainerAllocator>
struct DataType< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ogretici_paket/GecenZamanRequest";
  }

  static const char* value(const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 hedef_konum\n"
;
  }

  static const char* value(const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hedef_konum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GecenZamanRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ogretici_paket::GecenZamanRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ogretici_paket::GecenZamanRequest_<ContainerAllocator>& v)
  {
    s << indent << "hedef_konum: ";
    Printer<double>::stream(s, indent + "  ", v.hedef_konum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OGRETICI_PAKET_MESSAGE_GECENZAMANREQUEST_H
