// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: publish.proto

#ifndef PROTOBUF_publish_2eproto__INCLUDED
#define PROTOBUF_publish_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_publish_2eproto();
void protobuf_AssignDesc_publish_2eproto();
void protobuf_ShutdownFile_publish_2eproto();

class Publish;

// ===================================================================

class GZ_MSGS_VISIBLE Publish : public ::google::protobuf::Message {
 public:
  Publish();
  virtual ~Publish();

  Publish(const Publish& from);

  inline Publish& operator=(const Publish& from) {
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
  static const Publish& default_instance();

  void Swap(Publish* other);

  // implements Message ----------------------------------------------

  Publish* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Publish& from);
  void MergeFrom(const Publish& from);
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

  // accessors -------------------------------------------------------

  // required string topic = 1;
  inline bool has_topic() const;
  inline void clear_topic();
  static const int kTopicFieldNumber = 1;
  inline const ::std::string& topic() const;
  inline void set_topic(const ::std::string& value);
  inline void set_topic(const char* value);
  inline void set_topic(const char* value, size_t size);
  inline ::std::string* mutable_topic();
  inline ::std::string* release_topic();
  inline void set_allocated_topic(::std::string* topic);

  // required string msg_type = 2;
  inline bool has_msg_type() const;
  inline void clear_msg_type();
  static const int kMsgTypeFieldNumber = 2;
  inline const ::std::string& msg_type() const;
  inline void set_msg_type(const ::std::string& value);
  inline void set_msg_type(const char* value);
  inline void set_msg_type(const char* value, size_t size);
  inline ::std::string* mutable_msg_type();
  inline ::std::string* release_msg_type();
  inline void set_allocated_msg_type(::std::string* msg_type);

  // required string host = 3;
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 3;
  inline const ::std::string& host() const;
  inline void set_host(const ::std::string& value);
  inline void set_host(const char* value);
  inline void set_host(const char* value, size_t size);
  inline ::std::string* mutable_host();
  inline ::std::string* release_host();
  inline void set_allocated_host(::std::string* host);

  // required uint32 port = 4;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 4;
  inline ::google::protobuf::uint32 port() const;
  inline void set_port(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Publish)
 private:
  inline void set_has_topic();
  inline void clear_has_topic();
  inline void set_has_msg_type();
  inline void clear_has_msg_type();
  inline void set_has_host();
  inline void clear_has_host();
  inline void set_has_port();
  inline void clear_has_port();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* topic_;
  ::std::string* msg_type_;
  ::std::string* host_;
  ::google::protobuf::uint32 port_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_publish_2eproto();
  friend void protobuf_AssignDesc_publish_2eproto();
  friend void protobuf_ShutdownFile_publish_2eproto();

  void InitAsDefaultInstance();
  static Publish* default_instance_;
};
// ===================================================================


// ===================================================================

// Publish

// required string topic = 1;
inline bool Publish::has_topic() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Publish::set_has_topic() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Publish::clear_has_topic() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Publish::clear_topic() {
  if (topic_ != &::google::protobuf::internal::kEmptyString) {
    topic_->clear();
  }
  clear_has_topic();
}
inline const ::std::string& Publish::topic() const {
  return *topic_;
}
inline void Publish::set_topic(const ::std::string& value) {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  topic_->assign(value);
}
inline void Publish::set_topic(const char* value) {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  topic_->assign(value);
}
inline void Publish::set_topic(const char* value, size_t size) {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  topic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Publish::mutable_topic() {
  set_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    topic_ = new ::std::string;
  }
  return topic_;
}
inline ::std::string* Publish::release_topic() {
  clear_has_topic();
  if (topic_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = topic_;
    topic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Publish::set_allocated_topic(::std::string* topic) {
  if (topic_ != &::google::protobuf::internal::kEmptyString) {
    delete topic_;
  }
  if (topic) {
    set_has_topic();
    topic_ = topic;
  } else {
    clear_has_topic();
    topic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string msg_type = 2;
inline bool Publish::has_msg_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Publish::set_has_msg_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Publish::clear_has_msg_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Publish::clear_msg_type() {
  if (msg_type_ != &::google::protobuf::internal::kEmptyString) {
    msg_type_->clear();
  }
  clear_has_msg_type();
}
inline const ::std::string& Publish::msg_type() const {
  return *msg_type_;
}
inline void Publish::set_msg_type(const ::std::string& value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void Publish::set_msg_type(const char* value) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(value);
}
inline void Publish::set_msg_type(const char* value, size_t size) {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  msg_type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Publish::mutable_msg_type() {
  set_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    msg_type_ = new ::std::string;
  }
  return msg_type_;
}
inline ::std::string* Publish::release_msg_type() {
  clear_has_msg_type();
  if (msg_type_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_type_;
    msg_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Publish::set_allocated_msg_type(::std::string* msg_type) {
  if (msg_type_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_type_;
  }
  if (msg_type) {
    set_has_msg_type();
    msg_type_ = msg_type;
  } else {
    clear_has_msg_type();
    msg_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string host = 3;
inline bool Publish::has_host() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Publish::set_has_host() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Publish::clear_has_host() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Publish::clear_host() {
  if (host_ != &::google::protobuf::internal::kEmptyString) {
    host_->clear();
  }
  clear_has_host();
}
inline const ::std::string& Publish::host() const {
  return *host_;
}
inline void Publish::set_host(const ::std::string& value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void Publish::set_host(const char* value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void Publish::set_host(const char* value, size_t size) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Publish::mutable_host() {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  return host_;
}
inline ::std::string* Publish::release_host() {
  clear_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = host_;
    host_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Publish::set_allocated_host(::std::string* host) {
  if (host_ != &::google::protobuf::internal::kEmptyString) {
    delete host_;
  }
  if (host) {
    set_has_host();
    host_ = host;
  } else {
    clear_has_host();
    host_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 port = 4;
inline bool Publish::has_port() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Publish::set_has_port() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Publish::clear_has_port() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Publish::clear_port() {
  port_ = 0u;
  clear_has_port();
}
inline ::google::protobuf::uint32 Publish::port() const {
  return port_;
}
inline void Publish::set_port(::google::protobuf::uint32 value) {
  set_has_port();
  port_ = value;
}


typedef boost::shared_ptr<gazebo::msgs::Publish> PublishPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Publish const> ConstPublishPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_publish_2eproto__INCLUDED
