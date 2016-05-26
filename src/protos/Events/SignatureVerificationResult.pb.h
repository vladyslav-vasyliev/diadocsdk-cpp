// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Events/SignatureVerificationResult.proto

#ifndef PROTOBUF_Events_2fSignatureVerificationResult_2eproto__INCLUDED
#define PROTOBUF_Events_2fSignatureVerificationResult_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Events {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Events_2fSignatureVerificationResult_2eproto();
void protobuf_AssignDesc_Events_2fSignatureVerificationResult_2eproto();
void protobuf_ShutdownFile_Events_2fSignatureVerificationResult_2eproto();

class SignatureVerificationResult;
class CertificateVerificationResult;
class CertificateChainElement;

// ===================================================================

class SignatureVerificationResult : public ::google::protobuf::Message {
 public:
  SignatureVerificationResult();
  virtual ~SignatureVerificationResult();
  
  SignatureVerificationResult(const SignatureVerificationResult& from);
  
  inline SignatureVerificationResult& operator=(const SignatureVerificationResult& from) {
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
  static const SignatureVerificationResult& default_instance();
  
  void Swap(SignatureVerificationResult* other);
  
  // implements Message ----------------------------------------------
  
  SignatureVerificationResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SignatureVerificationResult& from);
  void MergeFrom(const SignatureVerificationResult& from);
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
  
  // required bool SignatureStatus = 1;
  inline bool has_signaturestatus() const;
  inline void clear_signaturestatus();
  static const int kSignatureStatusFieldNumber = 1;
  inline bool signaturestatus() const;
  inline void set_signaturestatus(bool value);
  
  // optional .Diadoc.Api.Proto.Events.CertificateVerificationResult CertificateStatus = 2;
  inline bool has_certificatestatus() const;
  inline void clear_certificatestatus();
  static const int kCertificateStatusFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Events::CertificateVerificationResult& certificatestatus() const;
  inline ::Diadoc::Api::Proto::Events::CertificateVerificationResult* mutable_certificatestatus();
  inline ::Diadoc::Api::Proto::Events::CertificateVerificationResult* release_certificatestatus();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Events.SignatureVerificationResult)
 private:
  inline void set_has_signaturestatus();
  inline void clear_has_signaturestatus();
  inline void set_has_certificatestatus();
  inline void clear_has_certificatestatus();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::Diadoc::Api::Proto::Events::CertificateVerificationResult* certificatestatus_;
  bool signaturestatus_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Events_2fSignatureVerificationResult_2eproto();
  friend void protobuf_AssignDesc_Events_2fSignatureVerificationResult_2eproto();
  friend void protobuf_ShutdownFile_Events_2fSignatureVerificationResult_2eproto();
  
  void InitAsDefaultInstance();
  static SignatureVerificationResult* default_instance_;
};
// -------------------------------------------------------------------

class CertificateVerificationResult : public ::google::protobuf::Message {
 public:
  CertificateVerificationResult();
  virtual ~CertificateVerificationResult();
  
  CertificateVerificationResult(const CertificateVerificationResult& from);
  
  inline CertificateVerificationResult& operator=(const CertificateVerificationResult& from) {
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
  static const CertificateVerificationResult& default_instance();
  
  void Swap(CertificateVerificationResult* other);
  
  // implements Message ----------------------------------------------
  
  CertificateVerificationResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CertificateVerificationResult& from);
  void MergeFrom(const CertificateVerificationResult& from);
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
  
  // required sfixed64 VerificationTimeTicks = 1;
  inline bool has_verificationtimeticks() const;
  inline void clear_verificationtimeticks();
  static const int kVerificationTimeTicksFieldNumber = 1;
  inline ::google::protobuf::int64 verificationtimeticks() const;
  inline void set_verificationtimeticks(::google::protobuf::int64 value);
  
  // required bool IsValid = 2;
  inline bool has_isvalid() const;
  inline void clear_isvalid();
  static const int kIsValidFieldNumber = 2;
  inline bool isvalid() const;
  inline void set_isvalid(bool value);
  
  // repeated .Diadoc.Api.Proto.Events.CertificateChainElement CertificateChain = 3;
  inline int certificatechain_size() const;
  inline void clear_certificatechain();
  static const int kCertificateChainFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Events::CertificateChainElement& certificatechain(int index) const;
  inline ::Diadoc::Api::Proto::Events::CertificateChainElement* mutable_certificatechain(int index);
  inline ::Diadoc::Api::Proto::Events::CertificateChainElement* add_certificatechain();
  inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Events::CertificateChainElement >&
      certificatechain() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Events::CertificateChainElement >*
      mutable_certificatechain();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Events.CertificateVerificationResult)
 private:
  inline void set_has_verificationtimeticks();
  inline void clear_has_verificationtimeticks();
  inline void set_has_isvalid();
  inline void clear_has_isvalid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 verificationtimeticks_;
  ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Events::CertificateChainElement > certificatechain_;
  bool isvalid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Events_2fSignatureVerificationResult_2eproto();
  friend void protobuf_AssignDesc_Events_2fSignatureVerificationResult_2eproto();
  friend void protobuf_ShutdownFile_Events_2fSignatureVerificationResult_2eproto();
  
  void InitAsDefaultInstance();
  static CertificateVerificationResult* default_instance_;
};
// -------------------------------------------------------------------

class CertificateChainElement : public ::google::protobuf::Message {
 public:
  CertificateChainElement();
  virtual ~CertificateChainElement();
  
  CertificateChainElement(const CertificateChainElement& from);
  
  inline CertificateChainElement& operator=(const CertificateChainElement& from) {
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
  static const CertificateChainElement& default_instance();
  
  void Swap(CertificateChainElement* other);
  
  // implements Message ----------------------------------------------
  
  CertificateChainElement* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CertificateChainElement& from);
  void MergeFrom(const CertificateChainElement& from);
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
  
  // required int32 CertificateChainStatusFlags = 1;
  inline bool has_certificatechainstatusflags() const;
  inline void clear_certificatechainstatusflags();
  static const int kCertificateChainStatusFlagsFieldNumber = 1;
  inline ::google::protobuf::int32 certificatechainstatusflags() const;
  inline void set_certificatechainstatusflags(::google::protobuf::int32 value);
  
  // required bytes DerCertificate = 2;
  inline bool has_dercertificate() const;
  inline void clear_dercertificate();
  static const int kDerCertificateFieldNumber = 2;
  inline const ::std::string& dercertificate() const;
  inline void set_dercertificate(const ::std::string& value);
  inline void set_dercertificate(const char* value);
  inline void set_dercertificate(const void* value, size_t size);
  inline ::std::string* mutable_dercertificate();
  inline ::std::string* release_dercertificate();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Events.CertificateChainElement)
 private:
  inline void set_has_certificatechainstatusflags();
  inline void clear_has_certificatechainstatusflags();
  inline void set_has_dercertificate();
  inline void clear_has_dercertificate();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* dercertificate_;
  ::google::protobuf::int32 certificatechainstatusflags_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Events_2fSignatureVerificationResult_2eproto();
  friend void protobuf_AssignDesc_Events_2fSignatureVerificationResult_2eproto();
  friend void protobuf_ShutdownFile_Events_2fSignatureVerificationResult_2eproto();
  
  void InitAsDefaultInstance();
  static CertificateChainElement* default_instance_;
};
// ===================================================================


// ===================================================================

// SignatureVerificationResult

// required bool SignatureStatus = 1;
inline bool SignatureVerificationResult::has_signaturestatus() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignatureVerificationResult::set_has_signaturestatus() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignatureVerificationResult::clear_has_signaturestatus() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignatureVerificationResult::clear_signaturestatus() {
  signaturestatus_ = false;
  clear_has_signaturestatus();
}
inline bool SignatureVerificationResult::signaturestatus() const {
  return signaturestatus_;
}
inline void SignatureVerificationResult::set_signaturestatus(bool value) {
  set_has_signaturestatus();
  signaturestatus_ = value;
}

// optional .Diadoc.Api.Proto.Events.CertificateVerificationResult CertificateStatus = 2;
inline bool SignatureVerificationResult::has_certificatestatus() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SignatureVerificationResult::set_has_certificatestatus() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SignatureVerificationResult::clear_has_certificatestatus() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SignatureVerificationResult::clear_certificatestatus() {
  if (certificatestatus_ != NULL) certificatestatus_->::Diadoc::Api::Proto::Events::CertificateVerificationResult::Clear();
  clear_has_certificatestatus();
}
inline const ::Diadoc::Api::Proto::Events::CertificateVerificationResult& SignatureVerificationResult::certificatestatus() const {
  return certificatestatus_ != NULL ? *certificatestatus_ : *default_instance_->certificatestatus_;
}
inline ::Diadoc::Api::Proto::Events::CertificateVerificationResult* SignatureVerificationResult::mutable_certificatestatus() {
  set_has_certificatestatus();
  if (certificatestatus_ == NULL) certificatestatus_ = new ::Diadoc::Api::Proto::Events::CertificateVerificationResult;
  return certificatestatus_;
}
inline ::Diadoc::Api::Proto::Events::CertificateVerificationResult* SignatureVerificationResult::release_certificatestatus() {
  clear_has_certificatestatus();
  ::Diadoc::Api::Proto::Events::CertificateVerificationResult* temp = certificatestatus_;
  certificatestatus_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// CertificateVerificationResult

// required sfixed64 VerificationTimeTicks = 1;
inline bool CertificateVerificationResult::has_verificationtimeticks() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CertificateVerificationResult::set_has_verificationtimeticks() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CertificateVerificationResult::clear_has_verificationtimeticks() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CertificateVerificationResult::clear_verificationtimeticks() {
  verificationtimeticks_ = GOOGLE_LONGLONG(0);
  clear_has_verificationtimeticks();
}
inline ::google::protobuf::int64 CertificateVerificationResult::verificationtimeticks() const {
  return verificationtimeticks_;
}
inline void CertificateVerificationResult::set_verificationtimeticks(::google::protobuf::int64 value) {
  set_has_verificationtimeticks();
  verificationtimeticks_ = value;
}

// required bool IsValid = 2;
inline bool CertificateVerificationResult::has_isvalid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CertificateVerificationResult::set_has_isvalid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CertificateVerificationResult::clear_has_isvalid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CertificateVerificationResult::clear_isvalid() {
  isvalid_ = false;
  clear_has_isvalid();
}
inline bool CertificateVerificationResult::isvalid() const {
  return isvalid_;
}
inline void CertificateVerificationResult::set_isvalid(bool value) {
  set_has_isvalid();
  isvalid_ = value;
}

// repeated .Diadoc.Api.Proto.Events.CertificateChainElement CertificateChain = 3;
inline int CertificateVerificationResult::certificatechain_size() const {
  return certificatechain_.size();
}
inline void CertificateVerificationResult::clear_certificatechain() {
  certificatechain_.Clear();
}
inline const ::Diadoc::Api::Proto::Events::CertificateChainElement& CertificateVerificationResult::certificatechain(int index) const {
  return certificatechain_.Get(index);
}
inline ::Diadoc::Api::Proto::Events::CertificateChainElement* CertificateVerificationResult::mutable_certificatechain(int index) {
  return certificatechain_.Mutable(index);
}
inline ::Diadoc::Api::Proto::Events::CertificateChainElement* CertificateVerificationResult::add_certificatechain() {
  return certificatechain_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Events::CertificateChainElement >&
CertificateVerificationResult::certificatechain() const {
  return certificatechain_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::Events::CertificateChainElement >*
CertificateVerificationResult::mutable_certificatechain() {
  return &certificatechain_;
}

// -------------------------------------------------------------------

// CertificateChainElement

// required int32 CertificateChainStatusFlags = 1;
inline bool CertificateChainElement::has_certificatechainstatusflags() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CertificateChainElement::set_has_certificatechainstatusflags() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CertificateChainElement::clear_has_certificatechainstatusflags() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CertificateChainElement::clear_certificatechainstatusflags() {
  certificatechainstatusflags_ = 0;
  clear_has_certificatechainstatusflags();
}
inline ::google::protobuf::int32 CertificateChainElement::certificatechainstatusflags() const {
  return certificatechainstatusflags_;
}
inline void CertificateChainElement::set_certificatechainstatusflags(::google::protobuf::int32 value) {
  set_has_certificatechainstatusflags();
  certificatechainstatusflags_ = value;
}

// required bytes DerCertificate = 2;
inline bool CertificateChainElement::has_dercertificate() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CertificateChainElement::set_has_dercertificate() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CertificateChainElement::clear_has_dercertificate() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CertificateChainElement::clear_dercertificate() {
  if (dercertificate_ != &::google::protobuf::internal::kEmptyString) {
    dercertificate_->clear();
  }
  clear_has_dercertificate();
}
inline const ::std::string& CertificateChainElement::dercertificate() const {
  return *dercertificate_;
}
inline void CertificateChainElement::set_dercertificate(const ::std::string& value) {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::kEmptyString) {
    dercertificate_ = new ::std::string;
  }
  dercertificate_->assign(value);
}
inline void CertificateChainElement::set_dercertificate(const char* value) {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::kEmptyString) {
    dercertificate_ = new ::std::string;
  }
  dercertificate_->assign(value);
}
inline void CertificateChainElement::set_dercertificate(const void* value, size_t size) {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::kEmptyString) {
    dercertificate_ = new ::std::string;
  }
  dercertificate_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CertificateChainElement::mutable_dercertificate() {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::kEmptyString) {
    dercertificate_ = new ::std::string;
  }
  return dercertificate_;
}
inline ::std::string* CertificateChainElement::release_dercertificate() {
  clear_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = dercertificate_;
    dercertificate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Events
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

#endif  // PROTOBUF_Events_2fSignatureVerificationResult_2eproto__INCLUDED
