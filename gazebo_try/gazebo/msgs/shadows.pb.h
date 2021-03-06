// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shadows.proto

#ifndef PROTOBUF_shadows_2eproto__INCLUDED
#define PROTOBUF_shadows_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "color.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_shadows_2eproto();
void protobuf_AssignDesc_shadows_2eproto();
void protobuf_ShutdownFile_shadows_2eproto();

class Shadows;

enum Shadows_ShadowType {
  Shadows_ShadowType_STENCIL_ADDITIVE = 1,
  Shadows_ShadowType_STENCIL_MODULATIVE = 2,
  Shadows_ShadowType_TEXTURE_ADDITIVE = 3,
  Shadows_ShadowType_TEXTURE_MODULATIVE = 4
};
GZ_MSGS_VISIBLE bool Shadows_ShadowType_IsValid(int value);
const Shadows_ShadowType Shadows_ShadowType_ShadowType_MIN = Shadows_ShadowType_STENCIL_ADDITIVE;
const Shadows_ShadowType Shadows_ShadowType_ShadowType_MAX = Shadows_ShadowType_TEXTURE_MODULATIVE;
const int Shadows_ShadowType_ShadowType_ARRAYSIZE = Shadows_ShadowType_ShadowType_MAX + 1;

GZ_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Shadows_ShadowType_descriptor();
inline const ::std::string& Shadows_ShadowType_Name(Shadows_ShadowType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Shadows_ShadowType_descriptor(), value);
}
inline bool Shadows_ShadowType_Parse(
    const ::std::string& name, Shadows_ShadowType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Shadows_ShadowType>(
    Shadows_ShadowType_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE Shadows : public ::google::protobuf::Message {
 public:
  Shadows();
  virtual ~Shadows();

  Shadows(const Shadows& from);

  inline Shadows& operator=(const Shadows& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Shadows& default_instance();

  void Swap(Shadows* other);

  // implements Message ----------------------------------------------

  Shadows* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Shadows& from);
  void MergeFrom(const Shadows& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Shadows_ShadowType ShadowType;
  static const ShadowType STENCIL_ADDITIVE = Shadows_ShadowType_STENCIL_ADDITIVE;
  static const ShadowType STENCIL_MODULATIVE = Shadows_ShadowType_STENCIL_MODULATIVE;
  static const ShadowType TEXTURE_ADDITIVE = Shadows_ShadowType_TEXTURE_ADDITIVE;
  static const ShadowType TEXTURE_MODULATIVE = Shadows_ShadowType_TEXTURE_MODULATIVE;
  static inline bool ShadowType_IsValid(int value) {
    return Shadows_ShadowType_IsValid(value);
  }
  static const ShadowType ShadowType_MIN =
    Shadows_ShadowType_ShadowType_MIN;
  static const ShadowType ShadowType_MAX =
    Shadows_ShadowType_ShadowType_MAX;
  static const int ShadowType_ARRAYSIZE =
    Shadows_ShadowType_ShadowType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ShadowType_descriptor() {
    return Shadows_ShadowType_descriptor();
  }
  static inline const ::std::string& ShadowType_Name(ShadowType value) {
    return Shadows_ShadowType_Name(value);
  }
  static inline bool ShadowType_Parse(const ::std::string& name,
      ShadowType* value) {
    return Shadows_ShadowType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .gazebo.msgs.Shadows.ShadowType type = 5;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 5;
  inline ::gazebo::msgs::Shadows_ShadowType type() const;
  inline void set_type(::gazebo::msgs::Shadows_ShadowType value);

  // optional .gazebo.msgs.Color color = 6;
  inline bool has_color() const;
  inline void clear_color();
  static const int kColorFieldNumber = 6;
  inline const ::gazebo::msgs::Color& color() const;
  inline ::gazebo::msgs::Color* mutable_color();
  inline ::gazebo::msgs::Color* release_color();
  inline void set_allocated_color(::gazebo::msgs::Color* color);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Shadows)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_color();
  inline void clear_has_color();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::gazebo::msgs::Color* color_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_shadows_2eproto();
  friend void protobuf_AssignDesc_shadows_2eproto();
  friend void protobuf_ShutdownFile_shadows_2eproto();

  void InitAsDefaultInstance();
  static Shadows* default_instance_;
};
// ===================================================================


// ===================================================================

// Shadows

// optional .gazebo.msgs.Shadows.ShadowType type = 5;
inline bool Shadows::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Shadows::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Shadows::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Shadows::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::gazebo::msgs::Shadows_ShadowType Shadows::type() const {
  return static_cast< ::gazebo::msgs::Shadows_ShadowType >(type_);
}
inline void Shadows::set_type(::gazebo::msgs::Shadows_ShadowType value) {
  assert(::gazebo::msgs::Shadows_ShadowType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .gazebo.msgs.Color color = 6;
inline bool Shadows::has_color() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Shadows::set_has_color() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Shadows::clear_has_color() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Shadows::clear_color() {
  if (color_ != NULL) color_->::gazebo::msgs::Color::Clear();
  clear_has_color();
}
inline const ::gazebo::msgs::Color& Shadows::color() const {
  return color_ != NULL ? *color_ : *default_instance_->color_;
}
inline ::gazebo::msgs::Color* Shadows::mutable_color() {
  set_has_color();
  if (color_ == NULL) color_ = new ::gazebo::msgs::Color;
  return color_;
}
inline ::gazebo::msgs::Color* Shadows::release_color() {
  clear_has_color();
  ::gazebo::msgs::Color* temp = color_;
  color_ = NULL;
  return temp;
}
inline void Shadows::set_allocated_color(::gazebo::msgs::Color* color) {
  delete color_;
  color_ = color;
  if (color) {
    set_has_color();
  } else {
    clear_has_color();
  }
}


typedef boost::shared_ptr<gazebo::msgs::Shadows> ShadowsPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::Shadows_ShadowType>() {
  return ::gazebo::msgs::Shadows_ShadowType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Shadows const> ConstShadowsPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_shadows_2eproto__INCLUDED
