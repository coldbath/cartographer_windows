// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/proto/submaps_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto__INCLUDED

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
#include "cartographer/mapping_2d/proto/range_data_inserter_options.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping_2d {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();

class SubmapsOptions;

// ===================================================================

class SubmapsOptions : public ::google::protobuf::Message {
 public:
  SubmapsOptions();
  virtual ~SubmapsOptions();

  SubmapsOptions(const SubmapsOptions& from);

  inline SubmapsOptions& operator=(const SubmapsOptions& from) {
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
  static const SubmapsOptions& default_instance();

  void Swap(SubmapsOptions* other);

  // implements Message ----------------------------------------------

  SubmapsOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SubmapsOptions& from);
  void MergeFrom(const SubmapsOptions& from);
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

  // optional double resolution = 1;
  inline bool has_resolution() const;
  inline void clear_resolution();
  static const int kResolutionFieldNumber = 1;
  inline double resolution() const;
  inline void set_resolution(double value);

  // optional double half_length = 2;
  inline bool has_half_length() const;
  inline void clear_half_length();
  static const int kHalfLengthFieldNumber = 2;
  inline double half_length() const;
  inline void set_half_length(double value);

  // optional int32 num_range_data = 3;
  inline bool has_num_range_data() const;
  inline void clear_num_range_data();
  static const int kNumRangeDataFieldNumber = 3;
  inline ::google::protobuf::int32 num_range_data() const;
  inline void set_num_range_data(::google::protobuf::int32 value);

  // optional bool output_debug_images = 4;
  inline bool has_output_debug_images() const;
  inline void clear_output_debug_images();
  static const int kOutputDebugImagesFieldNumber = 4;
  inline bool output_debug_images() const;
  inline void set_output_debug_images(bool value);

  // optional .cartographer.mapping_2d.proto.RangeDataInserterOptions range_data_inserter_options = 5;
  inline bool has_range_data_inserter_options() const;
  inline void clear_range_data_inserter_options();
  static const int kRangeDataInserterOptionsFieldNumber = 5;
  inline const ::cartographer::mapping_2d::proto::RangeDataInserterOptions& range_data_inserter_options() const;
  inline ::cartographer::mapping_2d::proto::RangeDataInserterOptions* mutable_range_data_inserter_options();
  inline ::cartographer::mapping_2d::proto::RangeDataInserterOptions* release_range_data_inserter_options();
  inline void set_allocated_range_data_inserter_options(::cartographer::mapping_2d::proto::RangeDataInserterOptions* range_data_inserter_options);

  // @@protoc_insertion_point(class_scope:cartographer.mapping_2d.proto.SubmapsOptions)
 private:
  inline void set_has_resolution();
  inline void clear_has_resolution();
  inline void set_has_half_length();
  inline void clear_has_half_length();
  inline void set_has_num_range_data();
  inline void clear_has_num_range_data();
  inline void set_has_output_debug_images();
  inline void clear_has_output_debug_images();
  inline void set_has_range_data_inserter_options();
  inline void clear_has_range_data_inserter_options();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double resolution_;
  double half_length_;
  ::google::protobuf::int32 num_range_data_;
  bool output_debug_images_;
  ::cartographer::mapping_2d::proto::RangeDataInserterOptions* range_data_inserter_options_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto();

  void InitAsDefaultInstance();
  static SubmapsOptions* default_instance_;
};
// ===================================================================


// ===================================================================

// SubmapsOptions

// optional double resolution = 1;
inline bool SubmapsOptions::has_resolution() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SubmapsOptions::set_has_resolution() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SubmapsOptions::clear_has_resolution() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SubmapsOptions::clear_resolution() {
  resolution_ = 0;
  clear_has_resolution();
}
inline double SubmapsOptions::resolution() const {
  return resolution_;
}
inline void SubmapsOptions::set_resolution(double value) {
  set_has_resolution();
  resolution_ = value;
}

// optional double half_length = 2;
inline bool SubmapsOptions::has_half_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SubmapsOptions::set_has_half_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SubmapsOptions::clear_has_half_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SubmapsOptions::clear_half_length() {
  half_length_ = 0;
  clear_has_half_length();
}
inline double SubmapsOptions::half_length() const {
  return half_length_;
}
inline void SubmapsOptions::set_half_length(double value) {
  set_has_half_length();
  half_length_ = value;
}

// optional int32 num_range_data = 3;
inline bool SubmapsOptions::has_num_range_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SubmapsOptions::set_has_num_range_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SubmapsOptions::clear_has_num_range_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SubmapsOptions::clear_num_range_data() {
  num_range_data_ = 0;
  clear_has_num_range_data();
}
inline ::google::protobuf::int32 SubmapsOptions::num_range_data() const {
  return num_range_data_;
}
inline void SubmapsOptions::set_num_range_data(::google::protobuf::int32 value) {
  set_has_num_range_data();
  num_range_data_ = value;
}

// optional bool output_debug_images = 4;
inline bool SubmapsOptions::has_output_debug_images() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SubmapsOptions::set_has_output_debug_images() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SubmapsOptions::clear_has_output_debug_images() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SubmapsOptions::clear_output_debug_images() {
  output_debug_images_ = false;
  clear_has_output_debug_images();
}
inline bool SubmapsOptions::output_debug_images() const {
  return output_debug_images_;
}
inline void SubmapsOptions::set_output_debug_images(bool value) {
  set_has_output_debug_images();
  output_debug_images_ = value;
}

// optional .cartographer.mapping_2d.proto.RangeDataInserterOptions range_data_inserter_options = 5;
inline bool SubmapsOptions::has_range_data_inserter_options() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SubmapsOptions::set_has_range_data_inserter_options() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SubmapsOptions::clear_has_range_data_inserter_options() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SubmapsOptions::clear_range_data_inserter_options() {
  if (range_data_inserter_options_ != NULL) range_data_inserter_options_->::cartographer::mapping_2d::proto::RangeDataInserterOptions::Clear();
  clear_has_range_data_inserter_options();
}
inline const ::cartographer::mapping_2d::proto::RangeDataInserterOptions& SubmapsOptions::range_data_inserter_options() const {
  return range_data_inserter_options_ != NULL ? *range_data_inserter_options_ : *default_instance_->range_data_inserter_options_;
}
inline ::cartographer::mapping_2d::proto::RangeDataInserterOptions* SubmapsOptions::mutable_range_data_inserter_options() {
  set_has_range_data_inserter_options();
  if (range_data_inserter_options_ == NULL) range_data_inserter_options_ = new ::cartographer::mapping_2d::proto::RangeDataInserterOptions;
  return range_data_inserter_options_;
}
inline ::cartographer::mapping_2d::proto::RangeDataInserterOptions* SubmapsOptions::release_range_data_inserter_options() {
  clear_has_range_data_inserter_options();
  ::cartographer::mapping_2d::proto::RangeDataInserterOptions* temp = range_data_inserter_options_;
  range_data_inserter_options_ = NULL;
  return temp;
}
inline void SubmapsOptions::set_allocated_range_data_inserter_options(::cartographer::mapping_2d::proto::RangeDataInserterOptions* range_data_inserter_options) {
  delete range_data_inserter_options_;
  range_data_inserter_options_ = range_data_inserter_options;
  if (range_data_inserter_options) {
    set_has_range_data_inserter_options();
  } else {
    clear_has_range_data_inserter_options();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_2d
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_5f2d_2fproto_2fsubmaps_5foptions_2eproto__INCLUDED