// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Forwarding/ForwardedDocument.proto

#ifndef PROTOBUF_Forwarding_2fForwardedDocument_2eproto__INCLUDED
#define PROTOBUF_Forwarding_2fForwardedDocument_2eproto__INCLUDED

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
#include "DocumentId.pb.h"
#include "Docflow/DocumentWithDocflow.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Forwarding {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Forwarding_2fForwardedDocument_2eproto();
void protobuf_AssignDesc_Forwarding_2fForwardedDocument_2eproto();
void protobuf_ShutdownFile_Forwarding_2fForwardedDocument_2eproto();

class ForwardedDocumentId;
class ForwardedDocument;

// ===================================================================

class ForwardedDocumentId : public ::google::protobuf::Message {
 public:
  ForwardedDocumentId();
  virtual ~ForwardedDocumentId();
  
  ForwardedDocumentId(const ForwardedDocumentId& from);
  
  inline ForwardedDocumentId& operator=(const ForwardedDocumentId& from) {
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
  static const ForwardedDocumentId& default_instance();
  
  void Swap(ForwardedDocumentId* other);
  
  // implements Message ----------------------------------------------
  
  ForwardedDocumentId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ForwardedDocumentId& from);
  void MergeFrom(const ForwardedDocumentId& from);
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
  
  // optional string FromBoxId = 1;
  inline bool has_fromboxid() const;
  inline void clear_fromboxid();
  static const int kFromBoxIdFieldNumber = 1;
  inline const ::std::string& fromboxid() const;
  inline void set_fromboxid(const ::std::string& value);
  inline void set_fromboxid(const char* value);
  inline void set_fromboxid(const char* value, size_t size);
  inline ::std::string* mutable_fromboxid();
  inline ::std::string* release_fromboxid();
  
  // optional .Diadoc.Api.Proto.DocumentId DocumentId = 2;
  inline bool has_documentid() const;
  inline void clear_documentid();
  static const int kDocumentIdFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::DocumentId& documentid() const;
  inline ::Diadoc::Api::Proto::DocumentId* mutable_documentid();
  inline ::Diadoc::Api::Proto::DocumentId* release_documentid();
  
  // optional string ForwardEventId = 3;
  inline bool has_forwardeventid() const;
  inline void clear_forwardeventid();
  static const int kForwardEventIdFieldNumber = 3;
  inline const ::std::string& forwardeventid() const;
  inline void set_forwardeventid(const ::std::string& value);
  inline void set_forwardeventid(const char* value);
  inline void set_forwardeventid(const char* value, size_t size);
  inline ::std::string* mutable_forwardeventid();
  inline ::std::string* release_forwardeventid();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Forwarding.ForwardedDocumentId)
 private:
  inline void set_has_fromboxid();
  inline void clear_has_fromboxid();
  inline void set_has_documentid();
  inline void clear_has_documentid();
  inline void set_has_forwardeventid();
  inline void clear_has_forwardeventid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* fromboxid_;
  ::Diadoc::Api::Proto::DocumentId* documentid_;
  ::std::string* forwardeventid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Forwarding_2fForwardedDocument_2eproto();
  friend void protobuf_AssignDesc_Forwarding_2fForwardedDocument_2eproto();
  friend void protobuf_ShutdownFile_Forwarding_2fForwardedDocument_2eproto();
  
  void InitAsDefaultInstance();
  static ForwardedDocumentId* default_instance_;
};
// -------------------------------------------------------------------

class ForwardedDocument : public ::google::protobuf::Message {
 public:
  ForwardedDocument();
  virtual ~ForwardedDocument();
  
  ForwardedDocument(const ForwardedDocument& from);
  
  inline ForwardedDocument& operator=(const ForwardedDocument& from) {
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
  static const ForwardedDocument& default_instance();
  
  void Swap(ForwardedDocument* other);
  
  // implements Message ----------------------------------------------
  
  ForwardedDocument* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ForwardedDocument& from);
  void MergeFrom(const ForwardedDocument& from);
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
  
  // optional .Diadoc.Api.Proto.Timestamp ForwardTimestamp = 1;
  inline bool has_forwardtimestamp() const;
  inline void clear_forwardtimestamp();
  static const int kForwardTimestampFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::Timestamp& forwardtimestamp() const;
  inline ::Diadoc::Api::Proto::Timestamp* mutable_forwardtimestamp();
  inline ::Diadoc::Api::Proto::Timestamp* release_forwardtimestamp();
  
  // optional .Diadoc.Api.Proto.Forwarding.ForwardedDocumentId ForwardedDocumentId = 2;
  inline bool has_forwardeddocumentid() const;
  inline void clear_forwardeddocumentid();
  static const int kForwardedDocumentIdFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId& forwardeddocumentid() const;
  inline ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId* mutable_forwardeddocumentid();
  inline ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId* release_forwardeddocumentid();
  
  // optional .Diadoc.Api.Proto.Docflow.DocumentWithDocflow DocumentWithDocflow = 3;
  inline bool has_documentwithdocflow() const;
  inline void clear_documentwithdocflow();
  static const int kDocumentWithDocflowFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow& documentwithdocflow() const;
  inline ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow* mutable_documentwithdocflow();
  inline ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow* release_documentwithdocflow();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Forwarding.ForwardedDocument)
 private:
  inline void set_has_forwardtimestamp();
  inline void clear_has_forwardtimestamp();
  inline void set_has_forwardeddocumentid();
  inline void clear_has_forwardeddocumentid();
  inline void set_has_documentwithdocflow();
  inline void clear_has_documentwithdocflow();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::Diadoc::Api::Proto::Timestamp* forwardtimestamp_;
  ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId* forwardeddocumentid_;
  ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow* documentwithdocflow_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Forwarding_2fForwardedDocument_2eproto();
  friend void protobuf_AssignDesc_Forwarding_2fForwardedDocument_2eproto();
  friend void protobuf_ShutdownFile_Forwarding_2fForwardedDocument_2eproto();
  
  void InitAsDefaultInstance();
  static ForwardedDocument* default_instance_;
};
// ===================================================================


// ===================================================================

// ForwardedDocumentId

// optional string FromBoxId = 1;
inline bool ForwardedDocumentId::has_fromboxid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ForwardedDocumentId::set_has_fromboxid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ForwardedDocumentId::clear_has_fromboxid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ForwardedDocumentId::clear_fromboxid() {
  if (fromboxid_ != &::google::protobuf::internal::kEmptyString) {
    fromboxid_->clear();
  }
  clear_has_fromboxid();
}
inline const ::std::string& ForwardedDocumentId::fromboxid() const {
  return *fromboxid_;
}
inline void ForwardedDocumentId::set_fromboxid(const ::std::string& value) {
  set_has_fromboxid();
  if (fromboxid_ == &::google::protobuf::internal::kEmptyString) {
    fromboxid_ = new ::std::string;
  }
  fromboxid_->assign(value);
}
inline void ForwardedDocumentId::set_fromboxid(const char* value) {
  set_has_fromboxid();
  if (fromboxid_ == &::google::protobuf::internal::kEmptyString) {
    fromboxid_ = new ::std::string;
  }
  fromboxid_->assign(value);
}
inline void ForwardedDocumentId::set_fromboxid(const char* value, size_t size) {
  set_has_fromboxid();
  if (fromboxid_ == &::google::protobuf::internal::kEmptyString) {
    fromboxid_ = new ::std::string;
  }
  fromboxid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ForwardedDocumentId::mutable_fromboxid() {
  set_has_fromboxid();
  if (fromboxid_ == &::google::protobuf::internal::kEmptyString) {
    fromboxid_ = new ::std::string;
  }
  return fromboxid_;
}
inline ::std::string* ForwardedDocumentId::release_fromboxid() {
  clear_has_fromboxid();
  if (fromboxid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = fromboxid_;
    fromboxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .Diadoc.Api.Proto.DocumentId DocumentId = 2;
inline bool ForwardedDocumentId::has_documentid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ForwardedDocumentId::set_has_documentid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ForwardedDocumentId::clear_has_documentid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ForwardedDocumentId::clear_documentid() {
  if (documentid_ != NULL) documentid_->::Diadoc::Api::Proto::DocumentId::Clear();
  clear_has_documentid();
}
inline const ::Diadoc::Api::Proto::DocumentId& ForwardedDocumentId::documentid() const {
  return documentid_ != NULL ? *documentid_ : *default_instance_->documentid_;
}
inline ::Diadoc::Api::Proto::DocumentId* ForwardedDocumentId::mutable_documentid() {
  set_has_documentid();
  if (documentid_ == NULL) documentid_ = new ::Diadoc::Api::Proto::DocumentId;
  return documentid_;
}
inline ::Diadoc::Api::Proto::DocumentId* ForwardedDocumentId::release_documentid() {
  clear_has_documentid();
  ::Diadoc::Api::Proto::DocumentId* temp = documentid_;
  documentid_ = NULL;
  return temp;
}

// optional string ForwardEventId = 3;
inline bool ForwardedDocumentId::has_forwardeventid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ForwardedDocumentId::set_has_forwardeventid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ForwardedDocumentId::clear_has_forwardeventid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ForwardedDocumentId::clear_forwardeventid() {
  if (forwardeventid_ != &::google::protobuf::internal::kEmptyString) {
    forwardeventid_->clear();
  }
  clear_has_forwardeventid();
}
inline const ::std::string& ForwardedDocumentId::forwardeventid() const {
  return *forwardeventid_;
}
inline void ForwardedDocumentId::set_forwardeventid(const ::std::string& value) {
  set_has_forwardeventid();
  if (forwardeventid_ == &::google::protobuf::internal::kEmptyString) {
    forwardeventid_ = new ::std::string;
  }
  forwardeventid_->assign(value);
}
inline void ForwardedDocumentId::set_forwardeventid(const char* value) {
  set_has_forwardeventid();
  if (forwardeventid_ == &::google::protobuf::internal::kEmptyString) {
    forwardeventid_ = new ::std::string;
  }
  forwardeventid_->assign(value);
}
inline void ForwardedDocumentId::set_forwardeventid(const char* value, size_t size) {
  set_has_forwardeventid();
  if (forwardeventid_ == &::google::protobuf::internal::kEmptyString) {
    forwardeventid_ = new ::std::string;
  }
  forwardeventid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ForwardedDocumentId::mutable_forwardeventid() {
  set_has_forwardeventid();
  if (forwardeventid_ == &::google::protobuf::internal::kEmptyString) {
    forwardeventid_ = new ::std::string;
  }
  return forwardeventid_;
}
inline ::std::string* ForwardedDocumentId::release_forwardeventid() {
  clear_has_forwardeventid();
  if (forwardeventid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = forwardeventid_;
    forwardeventid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// ForwardedDocument

// optional .Diadoc.Api.Proto.Timestamp ForwardTimestamp = 1;
inline bool ForwardedDocument::has_forwardtimestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ForwardedDocument::set_has_forwardtimestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ForwardedDocument::clear_has_forwardtimestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ForwardedDocument::clear_forwardtimestamp() {
  if (forwardtimestamp_ != NULL) forwardtimestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
  clear_has_forwardtimestamp();
}
inline const ::Diadoc::Api::Proto::Timestamp& ForwardedDocument::forwardtimestamp() const {
  return forwardtimestamp_ != NULL ? *forwardtimestamp_ : *default_instance_->forwardtimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* ForwardedDocument::mutable_forwardtimestamp() {
  set_has_forwardtimestamp();
  if (forwardtimestamp_ == NULL) forwardtimestamp_ = new ::Diadoc::Api::Proto::Timestamp;
  return forwardtimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* ForwardedDocument::release_forwardtimestamp() {
  clear_has_forwardtimestamp();
  ::Diadoc::Api::Proto::Timestamp* temp = forwardtimestamp_;
  forwardtimestamp_ = NULL;
  return temp;
}

// optional .Diadoc.Api.Proto.Forwarding.ForwardedDocumentId ForwardedDocumentId = 2;
inline bool ForwardedDocument::has_forwardeddocumentid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ForwardedDocument::set_has_forwardeddocumentid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ForwardedDocument::clear_has_forwardeddocumentid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ForwardedDocument::clear_forwardeddocumentid() {
  if (forwardeddocumentid_ != NULL) forwardeddocumentid_->::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId::Clear();
  clear_has_forwardeddocumentid();
}
inline const ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId& ForwardedDocument::forwardeddocumentid() const {
  return forwardeddocumentid_ != NULL ? *forwardeddocumentid_ : *default_instance_->forwardeddocumentid_;
}
inline ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId* ForwardedDocument::mutable_forwardeddocumentid() {
  set_has_forwardeddocumentid();
  if (forwardeddocumentid_ == NULL) forwardeddocumentid_ = new ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId;
  return forwardeddocumentid_;
}
inline ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId* ForwardedDocument::release_forwardeddocumentid() {
  clear_has_forwardeddocumentid();
  ::Diadoc::Api::Proto::Forwarding::ForwardedDocumentId* temp = forwardeddocumentid_;
  forwardeddocumentid_ = NULL;
  return temp;
}

// optional .Diadoc.Api.Proto.Docflow.DocumentWithDocflow DocumentWithDocflow = 3;
inline bool ForwardedDocument::has_documentwithdocflow() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ForwardedDocument::set_has_documentwithdocflow() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ForwardedDocument::clear_has_documentwithdocflow() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ForwardedDocument::clear_documentwithdocflow() {
  if (documentwithdocflow_ != NULL) documentwithdocflow_->::Diadoc::Api::Proto::Docflow::DocumentWithDocflow::Clear();
  clear_has_documentwithdocflow();
}
inline const ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow& ForwardedDocument::documentwithdocflow() const {
  return documentwithdocflow_ != NULL ? *documentwithdocflow_ : *default_instance_->documentwithdocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow* ForwardedDocument::mutable_documentwithdocflow() {
  set_has_documentwithdocflow();
  if (documentwithdocflow_ == NULL) documentwithdocflow_ = new ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow;
  return documentwithdocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow* ForwardedDocument::release_documentwithdocflow() {
  clear_has_documentwithdocflow();
  ::Diadoc::Api::Proto::Docflow::DocumentWithDocflow* temp = documentwithdocflow_;
  documentwithdocflow_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Forwarding
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

#endif  // PROTOBUF_Forwarding_2fForwardedDocument_2eproto__INCLUDED
