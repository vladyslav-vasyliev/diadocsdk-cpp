// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Documents/UnilateralDocument.proto

#ifndef PROTOBUF_Documents_2fUnilateralDocument_2eproto__INCLUDED
#define PROTOBUF_Documents_2fUnilateralDocument_2eproto__INCLUDED

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
namespace UnilateralDocument {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Documents_2fUnilateralDocument_2eproto();
void protobuf_AssignDesc_Documents_2fUnilateralDocument_2eproto();
void protobuf_ShutdownFile_Documents_2fUnilateralDocument_2eproto();

class ProformaInvoiceMetadata;
class ServiceDetailsMetadata;

enum UnilateralDocumentStatus {
  UnknownUnilateralDocumentStatus = 0,
  Outbound = 1,
  OutboundWaitingForSenderSignature = 4,
  OutboundInvalidSenderSignature = 5,
  Inbound = 2,
  Internal = 3,
  InternalWaitingForSenderSignature = 6,
  InternalInvalidSenderSignature = 7
};
bool UnilateralDocumentStatus_IsValid(int value);
const UnilateralDocumentStatus UnilateralDocumentStatus_MIN = UnknownUnilateralDocumentStatus;
const UnilateralDocumentStatus UnilateralDocumentStatus_MAX = InternalInvalidSenderSignature;
const int UnilateralDocumentStatus_ARRAYSIZE = UnilateralDocumentStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* UnilateralDocumentStatus_descriptor();
inline const ::std::string& UnilateralDocumentStatus_Name(UnilateralDocumentStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    UnilateralDocumentStatus_descriptor(), value);
}
inline bool UnilateralDocumentStatus_Parse(
    const ::std::string& name, UnilateralDocumentStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<UnilateralDocumentStatus>(
    UnilateralDocumentStatus_descriptor(), name, value);
}
// ===================================================================

class ProformaInvoiceMetadata : public ::google::protobuf::Message {
 public:
  ProformaInvoiceMetadata();
  virtual ~ProformaInvoiceMetadata();
  
  ProformaInvoiceMetadata(const ProformaInvoiceMetadata& from);
  
  inline ProformaInvoiceMetadata& operator=(const ProformaInvoiceMetadata& from) {
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
  static const ProformaInvoiceMetadata& default_instance();
  
  void Swap(ProformaInvoiceMetadata* other);
  
  // implements Message ----------------------------------------------
  
  ProformaInvoiceMetadata* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProformaInvoiceMetadata& from);
  void MergeFrom(const ProformaInvoiceMetadata& from);
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
  
  // optional .Diadoc.Api.Proto.Documents.UnilateralDocument.UnilateralDocumentStatus DocumentStatus = 1 [default = UnknownUnilateralDocumentStatus];
  inline bool has_documentstatus() const;
  inline void clear_documentstatus();
  static const int kDocumentStatusFieldNumber = 1;
  inline Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus documentstatus() const;
  inline void set_documentstatus(Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus value);
  
  // required string Total = 2;
  inline bool has_total() const;
  inline void clear_total();
  static const int kTotalFieldNumber = 2;
  inline const ::std::string& total() const;
  inline void set_total(const ::std::string& value);
  inline void set_total(const char* value);
  inline void set_total(const char* value, size_t size);
  inline ::std::string* mutable_total();
  inline ::std::string* release_total();
  
  // optional string Vat = 3;
  inline bool has_vat() const;
  inline void clear_vat();
  static const int kVatFieldNumber = 3;
  inline const ::std::string& vat() const;
  inline void set_vat(const ::std::string& value);
  inline void set_vat(const char* value);
  inline void set_vat(const char* value, size_t size);
  inline ::std::string* mutable_vat();
  inline ::std::string* release_vat();
  
  // optional string Grounds = 4;
  inline bool has_grounds() const;
  inline void clear_grounds();
  static const int kGroundsFieldNumber = 4;
  inline const ::std::string& grounds() const;
  inline void set_grounds(const ::std::string& value);
  inline void set_grounds(const char* value);
  inline void set_grounds(const char* value, size_t size);
  inline ::std::string* mutable_grounds();
  inline ::std::string* release_grounds();
  
  // optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 5 [default = UnknownReceiptStatus];
  inline bool has_receiptstatus() const;
  inline void clear_receiptstatus();
  static const int kReceiptStatusFieldNumber = 5;
  inline Diadoc::Api::Proto::Documents::ReceiptStatus receiptstatus() const;
  inline void set_receiptstatus(Diadoc::Api::Proto::Documents::ReceiptStatus value);
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Documents.UnilateralDocument.ProformaInvoiceMetadata)
 private:
  inline void set_has_documentstatus();
  inline void clear_has_documentstatus();
  inline void set_has_total();
  inline void clear_has_total();
  inline void set_has_vat();
  inline void clear_has_vat();
  inline void set_has_grounds();
  inline void clear_has_grounds();
  inline void set_has_receiptstatus();
  inline void clear_has_receiptstatus();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* total_;
  ::std::string* vat_;
  int documentstatus_;
  int receiptstatus_;
  ::std::string* grounds_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_Documents_2fUnilateralDocument_2eproto();
  friend void protobuf_AssignDesc_Documents_2fUnilateralDocument_2eproto();
  friend void protobuf_ShutdownFile_Documents_2fUnilateralDocument_2eproto();
  
  void InitAsDefaultInstance();
  static ProformaInvoiceMetadata* default_instance_;
};
// -------------------------------------------------------------------

class ServiceDetailsMetadata : public ::google::protobuf::Message {
 public:
  ServiceDetailsMetadata();
  virtual ~ServiceDetailsMetadata();
  
  ServiceDetailsMetadata(const ServiceDetailsMetadata& from);
  
  inline ServiceDetailsMetadata& operator=(const ServiceDetailsMetadata& from) {
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
  static const ServiceDetailsMetadata& default_instance();
  
  void Swap(ServiceDetailsMetadata* other);
  
  // implements Message ----------------------------------------------
  
  ServiceDetailsMetadata* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServiceDetailsMetadata& from);
  void MergeFrom(const ServiceDetailsMetadata& from);
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
  
  // required .Diadoc.Api.Proto.Documents.UnilateralDocument.UnilateralDocumentStatus DocumentStatus = 1 [default = UnknownUnilateralDocumentStatus];
  inline bool has_documentstatus() const;
  inline void clear_documentstatus();
  static const int kDocumentStatusFieldNumber = 1;
  inline Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus documentstatus() const;
  inline void set_documentstatus(Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus value);
  
  // required .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
  inline bool has_receiptstatus() const;
  inline void clear_receiptstatus();
  static const int kReceiptStatusFieldNumber = 2;
  inline Diadoc::Api::Proto::Documents::ReceiptStatus receiptstatus() const;
  inline void set_receiptstatus(Diadoc::Api::Proto::Documents::ReceiptStatus value);
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Documents.UnilateralDocument.ServiceDetailsMetadata)
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
  
  friend void  protobuf_AddDesc_Documents_2fUnilateralDocument_2eproto();
  friend void protobuf_AssignDesc_Documents_2fUnilateralDocument_2eproto();
  friend void protobuf_ShutdownFile_Documents_2fUnilateralDocument_2eproto();
  
  void InitAsDefaultInstance();
  static ServiceDetailsMetadata* default_instance_;
};
// ===================================================================


// ===================================================================

// ProformaInvoiceMetadata

// optional .Diadoc.Api.Proto.Documents.UnilateralDocument.UnilateralDocumentStatus DocumentStatus = 1 [default = UnknownUnilateralDocumentStatus];
inline bool ProformaInvoiceMetadata::has_documentstatus() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProformaInvoiceMetadata::set_has_documentstatus() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProformaInvoiceMetadata::clear_has_documentstatus() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProformaInvoiceMetadata::clear_documentstatus() {
  documentstatus_ = 0;
  clear_has_documentstatus();
}
inline Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus ProformaInvoiceMetadata::documentstatus() const {
  return static_cast< Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus >(documentstatus_);
}
inline void ProformaInvoiceMetadata::set_documentstatus(Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus value) {
  GOOGLE_DCHECK(Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus_IsValid(value));
  set_has_documentstatus();
  documentstatus_ = value;
}

// required string Total = 2;
inline bool ProformaInvoiceMetadata::has_total() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProformaInvoiceMetadata::set_has_total() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProformaInvoiceMetadata::clear_has_total() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProformaInvoiceMetadata::clear_total() {
  if (total_ != &::google::protobuf::internal::kEmptyString) {
    total_->clear();
  }
  clear_has_total();
}
inline const ::std::string& ProformaInvoiceMetadata::total() const {
  return *total_;
}
inline void ProformaInvoiceMetadata::set_total(const ::std::string& value) {
  set_has_total();
  if (total_ == &::google::protobuf::internal::kEmptyString) {
    total_ = new ::std::string;
  }
  total_->assign(value);
}
inline void ProformaInvoiceMetadata::set_total(const char* value) {
  set_has_total();
  if (total_ == &::google::protobuf::internal::kEmptyString) {
    total_ = new ::std::string;
  }
  total_->assign(value);
}
inline void ProformaInvoiceMetadata::set_total(const char* value, size_t size) {
  set_has_total();
  if (total_ == &::google::protobuf::internal::kEmptyString) {
    total_ = new ::std::string;
  }
  total_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProformaInvoiceMetadata::mutable_total() {
  set_has_total();
  if (total_ == &::google::protobuf::internal::kEmptyString) {
    total_ = new ::std::string;
  }
  return total_;
}
inline ::std::string* ProformaInvoiceMetadata::release_total() {
  clear_has_total();
  if (total_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = total_;
    total_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string Vat = 3;
inline bool ProformaInvoiceMetadata::has_vat() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProformaInvoiceMetadata::set_has_vat() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProformaInvoiceMetadata::clear_has_vat() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProformaInvoiceMetadata::clear_vat() {
  if (vat_ != &::google::protobuf::internal::kEmptyString) {
    vat_->clear();
  }
  clear_has_vat();
}
inline const ::std::string& ProformaInvoiceMetadata::vat() const {
  return *vat_;
}
inline void ProformaInvoiceMetadata::set_vat(const ::std::string& value) {
  set_has_vat();
  if (vat_ == &::google::protobuf::internal::kEmptyString) {
    vat_ = new ::std::string;
  }
  vat_->assign(value);
}
inline void ProformaInvoiceMetadata::set_vat(const char* value) {
  set_has_vat();
  if (vat_ == &::google::protobuf::internal::kEmptyString) {
    vat_ = new ::std::string;
  }
  vat_->assign(value);
}
inline void ProformaInvoiceMetadata::set_vat(const char* value, size_t size) {
  set_has_vat();
  if (vat_ == &::google::protobuf::internal::kEmptyString) {
    vat_ = new ::std::string;
  }
  vat_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProformaInvoiceMetadata::mutable_vat() {
  set_has_vat();
  if (vat_ == &::google::protobuf::internal::kEmptyString) {
    vat_ = new ::std::string;
  }
  return vat_;
}
inline ::std::string* ProformaInvoiceMetadata::release_vat() {
  clear_has_vat();
  if (vat_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = vat_;
    vat_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string Grounds = 4;
inline bool ProformaInvoiceMetadata::has_grounds() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ProformaInvoiceMetadata::set_has_grounds() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ProformaInvoiceMetadata::clear_has_grounds() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ProformaInvoiceMetadata::clear_grounds() {
  if (grounds_ != &::google::protobuf::internal::kEmptyString) {
    grounds_->clear();
  }
  clear_has_grounds();
}
inline const ::std::string& ProformaInvoiceMetadata::grounds() const {
  return *grounds_;
}
inline void ProformaInvoiceMetadata::set_grounds(const ::std::string& value) {
  set_has_grounds();
  if (grounds_ == &::google::protobuf::internal::kEmptyString) {
    grounds_ = new ::std::string;
  }
  grounds_->assign(value);
}
inline void ProformaInvoiceMetadata::set_grounds(const char* value) {
  set_has_grounds();
  if (grounds_ == &::google::protobuf::internal::kEmptyString) {
    grounds_ = new ::std::string;
  }
  grounds_->assign(value);
}
inline void ProformaInvoiceMetadata::set_grounds(const char* value, size_t size) {
  set_has_grounds();
  if (grounds_ == &::google::protobuf::internal::kEmptyString) {
    grounds_ = new ::std::string;
  }
  grounds_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ProformaInvoiceMetadata::mutable_grounds() {
  set_has_grounds();
  if (grounds_ == &::google::protobuf::internal::kEmptyString) {
    grounds_ = new ::std::string;
  }
  return grounds_;
}
inline ::std::string* ProformaInvoiceMetadata::release_grounds() {
  clear_has_grounds();
  if (grounds_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = grounds_;
    grounds_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 5 [default = UnknownReceiptStatus];
inline bool ProformaInvoiceMetadata::has_receiptstatus() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ProformaInvoiceMetadata::set_has_receiptstatus() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ProformaInvoiceMetadata::clear_has_receiptstatus() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ProformaInvoiceMetadata::clear_receiptstatus() {
  receiptstatus_ = 0;
  clear_has_receiptstatus();
}
inline Diadoc::Api::Proto::Documents::ReceiptStatus ProformaInvoiceMetadata::receiptstatus() const {
  return static_cast< Diadoc::Api::Proto::Documents::ReceiptStatus >(receiptstatus_);
}
inline void ProformaInvoiceMetadata::set_receiptstatus(Diadoc::Api::Proto::Documents::ReceiptStatus value) {
  GOOGLE_DCHECK(Diadoc::Api::Proto::Documents::ReceiptStatus_IsValid(value));
  set_has_receiptstatus();
  receiptstatus_ = value;
}

// -------------------------------------------------------------------

// ServiceDetailsMetadata

// required .Diadoc.Api.Proto.Documents.UnilateralDocument.UnilateralDocumentStatus DocumentStatus = 1 [default = UnknownUnilateralDocumentStatus];
inline bool ServiceDetailsMetadata::has_documentstatus() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServiceDetailsMetadata::set_has_documentstatus() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServiceDetailsMetadata::clear_has_documentstatus() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServiceDetailsMetadata::clear_documentstatus() {
  documentstatus_ = 0;
  clear_has_documentstatus();
}
inline Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus ServiceDetailsMetadata::documentstatus() const {
  return static_cast< Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus >(documentstatus_);
}
inline void ServiceDetailsMetadata::set_documentstatus(Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus value) {
  GOOGLE_DCHECK(Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus_IsValid(value));
  set_has_documentstatus();
  documentstatus_ = value;
}

// required .Diadoc.Api.Proto.Documents.ReceiptStatus ReceiptStatus = 2 [default = UnknownReceiptStatus];
inline bool ServiceDetailsMetadata::has_receiptstatus() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServiceDetailsMetadata::set_has_receiptstatus() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServiceDetailsMetadata::clear_has_receiptstatus() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServiceDetailsMetadata::clear_receiptstatus() {
  receiptstatus_ = 0;
  clear_has_receiptstatus();
}
inline Diadoc::Api::Proto::Documents::ReceiptStatus ServiceDetailsMetadata::receiptstatus() const {
  return static_cast< Diadoc::Api::Proto::Documents::ReceiptStatus >(receiptstatus_);
}
inline void ServiceDetailsMetadata::set_receiptstatus(Diadoc::Api::Proto::Documents::ReceiptStatus value) {
  GOOGLE_DCHECK(Diadoc::Api::Proto::Documents::ReceiptStatus_IsValid(value));
  set_has_receiptstatus();
  receiptstatus_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace UnilateralDocument
}  // namespace Documents
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus>() {
  return Diadoc::Api::Proto::Documents::UnilateralDocument::UnilateralDocumentStatus_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Documents_2fUnilateralDocument_2eproto__INCLUDED
