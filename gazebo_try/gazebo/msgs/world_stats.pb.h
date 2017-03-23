// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_stats.proto

#ifndef PROTOBUF_world_5fstats_2eproto__INCLUDED
#define PROTOBUF_world_5fstats_2eproto__INCLUDED

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
#include "log_playback_stats.pb.h"
#include "time.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_world_5fstats_2eproto();
void protobuf_AssignDesc_world_5fstats_2eproto();
void protobuf_ShutdownFile_world_5fstats_2eproto();

class WorldStatistics;

// ===================================================================

class GZ_MSGS_VISIBLE WorldStatistics : public ::google::protobuf::Message {
 public:
  WorldStatistics();
  virtual ~WorldStatistics();

  WorldStatistics(const WorldStatistics& from);

  inline WorldStatistics& operator=(const WorldStatistics& from) {
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
  static const WorldStatistics& default_instance();

  void Swap(WorldStatistics* other);

  // implements Message ----------------------------------------------

  WorldStatistics* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WorldStatistics& from);
  void MergeFrom(const WorldStatistics& from);
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

  // required .gazebo.msgs.Time sim_time = 2;
  inline bool has_sim_time() const;
  inline void clear_sim_time();
  static const int kSimTimeFieldNumber = 2;
  inline const ::gazebo::msgs::Time& sim_time() const;
  inline ::gazebo::msgs::Time* mutable_sim_time();
  inline ::gazebo::msgs::Time* release_sim_time();
  inline void set_allocated_sim_time(::gazebo::msgs::Time* sim_time);

  // required .gazebo.msgs.Time pause_time = 3;
  inline bool has_pause_time() const;
  inline void clear_pause_time();
  static const int kPauseTimeFieldNumber = 3;
  inline const ::gazebo::msgs::Time& pause_time() const;
  inline ::gazebo::msgs::Time* mutable_pause_time();
  inline ::gazebo::msgs::Time* release_pause_time();
  inline void set_allocated_pause_time(::gazebo::msgs::Time* pause_time);

  // required .gazebo.msgs.Time real_time = 4;
  inline bool has_real_time() const;
  inline void clear_real_time();
  static const int kRealTimeFieldNumber = 4;
  inline const ::gazebo::msgs::Time& real_time() const;
  inline ::gazebo::msgs::Time* mutable_real_time();
  inline ::gazebo::msgs::Time* release_real_time();
  inline void set_allocated_real_time(::gazebo::msgs::Time* real_time);

  // required bool paused = 5;
  inline bool has_paused() const;
  inline void clear_paused();
  static const int kPausedFieldNumber = 5;
  inline bool paused() const;
  inline void set_paused(bool value);

  // required uint64 iterations = 6;
  inline bool has_iterations() const;
  inline void clear_iterations();
  static const int kIterationsFieldNumber = 6;
  inline ::google::protobuf::uint64 iterations() const;
  inline void set_iterations(::google::protobuf::uint64 value);

  // optional int32 model_count = 7;
  inline bool has_model_count() const;
  inline void clear_model_count();
  static const int kModelCountFieldNumber = 7;
  inline ::google::protobuf::int32 model_count() const;
  inline void set_model_count(::google::protobuf::int32 value);

  // optional .gazebo.msgs.LogPlaybackStatistics log_playback_stats = 8;
  inline bool has_log_playback_stats() const;
  inline void clear_log_playback_stats();
  static const int kLogPlaybackStatsFieldNumber = 8;
  inline const ::gazebo::msgs::LogPlaybackStatistics& log_playback_stats() const;
  inline ::gazebo::msgs::LogPlaybackStatistics* mutable_log_playback_stats();
  inline ::gazebo::msgs::LogPlaybackStatistics* release_log_playback_stats();
  inline void set_allocated_log_playback_stats(::gazebo::msgs::LogPlaybackStatistics* log_playback_stats);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.WorldStatistics)
 private:
  inline void set_has_sim_time();
  inline void clear_has_sim_time();
  inline void set_has_pause_time();
  inline void clear_has_pause_time();
  inline void set_has_real_time();
  inline void clear_has_real_time();
  inline void set_has_paused();
  inline void clear_has_paused();
  inline void set_has_iterations();
  inline void clear_has_iterations();
  inline void set_has_model_count();
  inline void clear_has_model_count();
  inline void set_has_log_playback_stats();
  inline void clear_has_log_playback_stats();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::gazebo::msgs::Time* sim_time_;
  ::gazebo::msgs::Time* pause_time_;
  ::gazebo::msgs::Time* real_time_;
  ::google::protobuf::uint64 iterations_;
  bool paused_;
  ::google::protobuf::int32 model_count_;
  ::gazebo::msgs::LogPlaybackStatistics* log_playback_stats_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_world_5fstats_2eproto();
  friend void protobuf_AssignDesc_world_5fstats_2eproto();
  friend void protobuf_ShutdownFile_world_5fstats_2eproto();

  void InitAsDefaultInstance();
  static WorldStatistics* default_instance_;
};
// ===================================================================


// ===================================================================

// WorldStatistics

// required .gazebo.msgs.Time sim_time = 2;
inline bool WorldStatistics::has_sim_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldStatistics::set_has_sim_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldStatistics::clear_has_sim_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldStatistics::clear_sim_time() {
  if (sim_time_ != NULL) sim_time_->::gazebo::msgs::Time::Clear();
  clear_has_sim_time();
}
inline const ::gazebo::msgs::Time& WorldStatistics::sim_time() const {
  return sim_time_ != NULL ? *sim_time_ : *default_instance_->sim_time_;
}
inline ::gazebo::msgs::Time* WorldStatistics::mutable_sim_time() {
  set_has_sim_time();
  if (sim_time_ == NULL) sim_time_ = new ::gazebo::msgs::Time;
  return sim_time_;
}
inline ::gazebo::msgs::Time* WorldStatistics::release_sim_time() {
  clear_has_sim_time();
  ::gazebo::msgs::Time* temp = sim_time_;
  sim_time_ = NULL;
  return temp;
}
inline void WorldStatistics::set_allocated_sim_time(::gazebo::msgs::Time* sim_time) {
  delete sim_time_;
  sim_time_ = sim_time;
  if (sim_time) {
    set_has_sim_time();
  } else {
    clear_has_sim_time();
  }
}

// required .gazebo.msgs.Time pause_time = 3;
inline bool WorldStatistics::has_pause_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldStatistics::set_has_pause_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldStatistics::clear_has_pause_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldStatistics::clear_pause_time() {
  if (pause_time_ != NULL) pause_time_->::gazebo::msgs::Time::Clear();
  clear_has_pause_time();
}
inline const ::gazebo::msgs::Time& WorldStatistics::pause_time() const {
  return pause_time_ != NULL ? *pause_time_ : *default_instance_->pause_time_;
}
inline ::gazebo::msgs::Time* WorldStatistics::mutable_pause_time() {
  set_has_pause_time();
  if (pause_time_ == NULL) pause_time_ = new ::gazebo::msgs::Time;
  return pause_time_;
}
inline ::gazebo::msgs::Time* WorldStatistics::release_pause_time() {
  clear_has_pause_time();
  ::gazebo::msgs::Time* temp = pause_time_;
  pause_time_ = NULL;
  return temp;
}
inline void WorldStatistics::set_allocated_pause_time(::gazebo::msgs::Time* pause_time) {
  delete pause_time_;
  pause_time_ = pause_time;
  if (pause_time) {
    set_has_pause_time();
  } else {
    clear_has_pause_time();
  }
}

// required .gazebo.msgs.Time real_time = 4;
inline bool WorldStatistics::has_real_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldStatistics::set_has_real_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldStatistics::clear_has_real_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldStatistics::clear_real_time() {
  if (real_time_ != NULL) real_time_->::gazebo::msgs::Time::Clear();
  clear_has_real_time();
}
inline const ::gazebo::msgs::Time& WorldStatistics::real_time() const {
  return real_time_ != NULL ? *real_time_ : *default_instance_->real_time_;
}
inline ::gazebo::msgs::Time* WorldStatistics::mutable_real_time() {
  set_has_real_time();
  if (real_time_ == NULL) real_time_ = new ::gazebo::msgs::Time;
  return real_time_;
}
inline ::gazebo::msgs::Time* WorldStatistics::release_real_time() {
  clear_has_real_time();
  ::gazebo::msgs::Time* temp = real_time_;
  real_time_ = NULL;
  return temp;
}
inline void WorldStatistics::set_allocated_real_time(::gazebo::msgs::Time* real_time) {
  delete real_time_;
  real_time_ = real_time;
  if (real_time) {
    set_has_real_time();
  } else {
    clear_has_real_time();
  }
}

// required bool paused = 5;
inline bool WorldStatistics::has_paused() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WorldStatistics::set_has_paused() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WorldStatistics::clear_has_paused() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WorldStatistics::clear_paused() {
  paused_ = false;
  clear_has_paused();
}
inline bool WorldStatistics::paused() const {
  return paused_;
}
inline void WorldStatistics::set_paused(bool value) {
  set_has_paused();
  paused_ = value;
}

// required uint64 iterations = 6;
inline bool WorldStatistics::has_iterations() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WorldStatistics::set_has_iterations() {
  _has_bits_[0] |= 0x00000010u;
}
inline void WorldStatistics::clear_has_iterations() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void WorldStatistics::clear_iterations() {
  iterations_ = GOOGLE_ULONGLONG(0);
  clear_has_iterations();
}
inline ::google::protobuf::uint64 WorldStatistics::iterations() const {
  return iterations_;
}
inline void WorldStatistics::set_iterations(::google::protobuf::uint64 value) {
  set_has_iterations();
  iterations_ = value;
}

// optional int32 model_count = 7;
inline bool WorldStatistics::has_model_count() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void WorldStatistics::set_has_model_count() {
  _has_bits_[0] |= 0x00000020u;
}
inline void WorldStatistics::clear_has_model_count() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void WorldStatistics::clear_model_count() {
  model_count_ = 0;
  clear_has_model_count();
}
inline ::google::protobuf::int32 WorldStatistics::model_count() const {
  return model_count_;
}
inline void WorldStatistics::set_model_count(::google::protobuf::int32 value) {
  set_has_model_count();
  model_count_ = value;
}

// optional .gazebo.msgs.LogPlaybackStatistics log_playback_stats = 8;
inline bool WorldStatistics::has_log_playback_stats() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void WorldStatistics::set_has_log_playback_stats() {
  _has_bits_[0] |= 0x00000040u;
}
inline void WorldStatistics::clear_has_log_playback_stats() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void WorldStatistics::clear_log_playback_stats() {
  if (log_playback_stats_ != NULL) log_playback_stats_->::gazebo::msgs::LogPlaybackStatistics::Clear();
  clear_has_log_playback_stats();
}
inline const ::gazebo::msgs::LogPlaybackStatistics& WorldStatistics::log_playback_stats() const {
  return log_playback_stats_ != NULL ? *log_playback_stats_ : *default_instance_->log_playback_stats_;
}
inline ::gazebo::msgs::LogPlaybackStatistics* WorldStatistics::mutable_log_playback_stats() {
  set_has_log_playback_stats();
  if (log_playback_stats_ == NULL) log_playback_stats_ = new ::gazebo::msgs::LogPlaybackStatistics;
  return log_playback_stats_;
}
inline ::gazebo::msgs::LogPlaybackStatistics* WorldStatistics::release_log_playback_stats() {
  clear_has_log_playback_stats();
  ::gazebo::msgs::LogPlaybackStatistics* temp = log_playback_stats_;
  log_playback_stats_ = NULL;
  return temp;
}
inline void WorldStatistics::set_allocated_log_playback_stats(::gazebo::msgs::LogPlaybackStatistics* log_playback_stats) {
  delete log_playback_stats_;
  log_playback_stats_ = log_playback_stats;
  if (log_playback_stats) {
    set_has_log_playback_stats();
  } else {
    clear_has_log_playback_stats();
  }
}


typedef boost::shared_ptr<gazebo::msgs::WorldStatistics> WorldStatisticsPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::WorldStatistics const> ConstWorldStatisticsPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_world_5fstats_2eproto__INCLUDED