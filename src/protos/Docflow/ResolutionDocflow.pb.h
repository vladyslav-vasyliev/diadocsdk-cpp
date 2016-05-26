// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/ResolutionDocflow.proto

#ifndef PROTOBUF_Docflow_2fResolutionDocflow_2eproto__INCLUDED
#define PROTOBUF_Docflow_2fResolutionDocflow_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "Timestamp.pb.h"
#include "ResolutionTarget.pb.h"
#include "Docflow/Attachment.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Docflow {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Docflow_2fResolutionDocflow_2eproto();
void protobuf_AssignDesc_Docflow_2fResolutionDocflow_2eproto();
void protobuf_ShutdownFile_Docflow_2fResolutionDocflow_2eproto();

class ResolutionDocflow;

// ===================================================================

class ResolutionDocflow : public ::google::protobuf::Message {
 public:
  ResolutionDocflow();
  virtual ~ResolutionDocflow();
  
  ResolutionDocflow(const ResolutionDocflow& from);
  
  inline ResolutionDocflow& operator=(const ResolutionDocflow& from) {
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
  static const ResolutionDocflow& default_instance();
  
  void Swap(ResolutionDocflow* other);
  
  // implements Message ----------------------------------------------
  
  ResolutionDocflow* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResolutionDocflow& from);
  void MergeFrom(const ResolutionDocflow& from);
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
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.ResolutionDocflow)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_Docflow_2fResolutionDocflow_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fResolutionDocflow_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fResolutionDocflow_2eproto();
  
  void InitAsDefaultInstance();
  static ResolutionDocflow* default_instance_;
};
// ===================================================================


// ===================================================================

// ResolutionDocflow


// @@protoc_insertion_point(namespace_scope)

}  // namespace Docflow
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Docflow_2fResolutionDocflow_2eproto__INCLUDED
