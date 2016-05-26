// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Documents/NonformalizedDocument.proto

#ifndef PROTOBUF_Documents_2fNonformalizedDocument_2eproto__INCLUDED
#define PROTOBUF_Documents_2fNonformalizedDocument_2eproto__INCLUDED

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
#include "Documents/ReceiptStatus.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Documents {
namespace NonformalizedDocument {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Documents_2fNonformalizedDocument_2eproto();
void protobuf_AssignDesc_Documents_2fNonformalizedDocument_2eproto();
void protobuf_ShutdownFile_Documents_2fNonformalizedDocument_2eproto();

class NonformalizedDocumentMetadata;

enum NonformalizedDocumentStatus {
  UnknownNonformalizedDocumentStatus = 0,
  OutboundNoRecipientSignatureRequest = 1,
  OutboundWaitingForRecipientSignature = 2,
  OutboundWithRecipientSignature = 3,
  OutboundRecipientSignatureRequestRejected = 4,
  OutboundWaitingForSenderSignature = 13,
  OutboundInvalidSenderSignature = 14,
  InboundNoRecipientSignatureRequest = 5,
  InboundWaitingForRecipientSignature = 6,
  InboundWithRecipientSignature = 7,
  InboundRecipientSignatureRequestRejected = 8,
  InboundInvalidRecipientSignature = 15,
  InternalNoRecipientSignatureRequest = 9,
  InternalWaitingForRecipientSignature = 10,
  InternalWithRecipientSignature = 11,
  InternalRecipientSignatureRequestRejected = 12,
  InternalWaitingForSenderSignature = 16,
  InternalInvalidSenderSignature = 17,
  InternalInvalidRecipientSignature = 18
};
bool NonformalizedDocumentStatus_IsValid(int value);
const NonformalizedDocumentStatus NonformalizedDocumentStatus_MIN = UnknownNonformalizedDocumentStatus;
const NonformalizedDocumentStatus NonformalizedDocumentStatus_MAX = InternalInvalidRecipientSignature;
const int NonformalizedDocumentStatus_ARRAYSIZE = NonformalizedDocumentStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* NonformalizedDocumentStatus_descriptor();
inline const ::std::string& NonformalizedDocumentStatus_Name(NonformalizedDocumentStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    NonformalizedDocumentStatus_descriptor(), value);
}
inline bool NonformalizedDocumentStatus_Parse(
    const ::std::string& name, NonformalizedDocumentStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NonformalizedDocumentStatus>(
    NonformalizedDocumentStatus_descriptor(), name, value);
}
// ===================================================================

class NonformalizedDocumentMetadata : public ::google::protobuf::Message {
 public:
  NonformalizedDocumentMetadata();
  virtual ~NonformalizedDocumentMetadata();
  
  NonformalizedDocumentMetadata(const NonformalizedDocumentMetadata& from);
  
  inline NonformalizedDocumentMetadata& operator=(const NonformalizedDocumentMetadata& from) {
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
  static const NonformalizedDocumentMetadata& default_instance();
  
  void Swap(NonformalizedDocumentMetadata* other);
  
  // implements Message ----------------------------------------------
  
  NonformalizedDocumentMetadata* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NonformalizedDocumentMetadata& from);
  void MergeFrom(const NonformalizedDocumentMetadata& from);
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
  
  // optional .Diadoc.Api.Proto.Documents.NonformalizedDocument.NonformalizedDocumentStatus DocumentStatus = 1 [default = UnknownNonformalizedDocumentStatus];
  inline bool has_documentstatus() const;
  inline void clear_documentstatus();
  static const int kDocumentStatusFieldNumber = 1;
  inline Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus documentstatus() const;
  inline void set_documentstatus(Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus value);
  
  // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
  inline bool has_receiptstatus() const;
  inline void clear_receiptstatus();
  static const int kReceiptStatusFieldNumber = 2;
  inline Diadoc::Api::Proto::Documents::ReceiptStatus receiptstatus() const;
  inline void set_receiptstatus(Diadoc::Api::Proto::Documents::ReceiptStatus value);
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Documents.NonformalizedDocument.NonformalizedDocumentMetadata)
 private:
  inline void set_has_documentstatus();
  inline void clear_has_documentstatus();
  inline void set_has_receiptstatus();
  inline void clear_has_receiptstatus();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int documentstatus_;
  int receiptstatus_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Documents_2fNonformalizedDocument_2eproto();
  friend void protobuf_AssignDesc_Documents_2fNonformalizedDocument_2eproto();
  friend void protobuf_ShutdownFile_Documents_2fNonformalizedDocument_2eproto();
  
  void InitAsDefaultInstance();
  static NonformalizedDocumentMetadata* default_instance_;
};
// ===================================================================


// ===================================================================

// NonformalizedDocumentMetadata

// optional .Diadoc.Api.Proto.Documents.NonformalizedDocument.NonformalizedDocumentStatus DocumentStatus = 1 [default = UnknownNonformalizedDocumentStatus];
inline bool NonformalizedDocumentMetadata::has_documentstatus() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NonformalizedDocumentMetadata::set_has_documentstatus() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NonformalizedDocumentMetadata::clear_has_documentstatus() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NonformalizedDocumentMetadata::clear_documentstatus() {
  documentstatus_ = 0;
  clear_has_documentstatus();
}
inline Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus NonformalizedDocumentMetadata::documentstatus() const {
  return static_cast< Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus >(documentstatus_);
}
inline void NonformalizedDocumentMetadata::set_documentstatus(Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus value) {
  GOOGLE_DCHECK(Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus_IsValid(value));
  set_has_documentstatus();
  documentstatus_ = value;
}

// optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
inline bool NonformalizedDocumentMetadata::has_receiptstatus() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NonformalizedDocumentMetadata::set_has_receiptstatus() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NonformalizedDocumentMetadata::clear_has_receiptstatus() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NonformalizedDocumentMetadata::clear_receiptstatus() {
  receiptstatus_ = 0;
  clear_has_receiptstatus();
}
inline Diadoc::Api::Proto::Documents::ReceiptStatus NonformalizedDocumentMetadata::receiptstatus() const {
  return static_cast< Diadoc::Api::Proto::Documents::ReceiptStatus >(receiptstatus_);
}
inline void NonformalizedDocumentMetadata::set_receiptstatus(Diadoc::Api::Proto::Documents::ReceiptStatus value) {
  GOOGLE_DCHECK(Diadoc::Api::Proto::Documents::ReceiptStatus_IsValid(value));
  set_has_receiptstatus();
  receiptstatus_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NonformalizedDocument
}  // namespace Documents
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus>() {
  return Diadoc::Api::Proto::Documents::NonformalizedDocument::NonformalizedDocumentStatus_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Documents_2fNonformalizedDocument_2eproto__INCLUDED
