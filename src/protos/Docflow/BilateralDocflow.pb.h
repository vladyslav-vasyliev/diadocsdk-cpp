// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/BilateralDocflow.proto

#ifndef PROTOBUF_Docflow_2fBilateralDocflow_2eproto__INCLUDED
#define PROTOBUF_Docflow_2fBilateralDocflow_2eproto__INCLUDED

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
#include "Docflow/ReceiptDocflow.pb.h"
#include "Docflow/RecipientSignatureDocflow.pb.h"
#include "Docflow/RecipientSignatureRejectionDocflow.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Docflow {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Docflow_2fBilateralDocflow_2eproto();
void protobuf_AssignDesc_Docflow_2fBilateralDocflow_2eproto();
void protobuf_ShutdownFile_Docflow_2fBilateralDocflow_2eproto();

class BilateralDocflow;

// ===================================================================

class BilateralDocflow : public ::google::protobuf::Message {
 public:
  BilateralDocflow();
  virtual ~BilateralDocflow();
  
  BilateralDocflow(const BilateralDocflow& from);
  
  inline BilateralDocflow& operator=(const BilateralDocflow& from) {
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
  static const BilateralDocflow& default_instance();
  
  void Swap(BilateralDocflow* other);
  
  // implements Message ----------------------------------------------
  
  BilateralDocflow* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BilateralDocflow& from);
  void MergeFrom(const BilateralDocflow& from);
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
  
  // optional bool IsFinished = 1;
  inline bool has_isfinished() const;
  inline void clear_isfinished();
  static const int kIsFinishedFieldNumber = 1;
  inline bool isfinished() const;
  inline void set_isfinished(bool value);
  
  // optional .Diadoc.Api.Proto.Docflow.ReceiptDocflow ReceiptDocflow = 2;
  inline bool has_receiptdocflow() const;
  inline void clear_receiptdocflow();
  static const int kReceiptDocflowFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Docflow::ReceiptDocflow& receiptdocflow() const;
  inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* mutable_receiptdocflow();
  inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* release_receiptdocflow();
  
  // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow RecipientSignatureDocflow = 3;
  inline bool has_recipientsignaturedocflow() const;
  inline void clear_recipientsignaturedocflow();
  static const int kRecipientSignatureDocflowFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow& recipientsignaturedocflow() const;
  inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow* mutable_recipientsignaturedocflow();
  inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow* release_recipientsignaturedocflow();
  
  // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow RecipientSignatureRejectionDocflow = 4;
  inline bool has_recipientsignaturerejectiondocflow() const;
  inline void clear_recipientsignaturerejectiondocflow();
  static const int kRecipientSignatureRejectionDocflowFieldNumber = 4;
  inline const ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow& recipientsignaturerejectiondocflow() const;
  inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow* mutable_recipientsignaturerejectiondocflow();
  inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow* release_recipientsignaturerejectiondocflow();
  
  // optional bool IsReceiptRequested = 5;
  inline bool has_isreceiptrequested() const;
  inline void clear_isreceiptrequested();
  static const int kIsReceiptRequestedFieldNumber = 5;
  inline bool isreceiptrequested() const;
  inline void set_isreceiptrequested(bool value);
  
  // optional bool IsRecipientSignatureRequested = 6;
  inline bool has_isrecipientsignaturerequested() const;
  inline void clear_isrecipientsignaturerequested();
  static const int kIsRecipientSignatureRequestedFieldNumber = 6;
  inline bool isrecipientsignaturerequested() const;
  inline void set_isrecipientsignaturerequested(bool value);
  
  // optional bool IsDocumentSignedByRecipient = 7;
  inline bool has_isdocumentsignedbyrecipient() const;
  inline void clear_isdocumentsignedbyrecipient();
  static const int kIsDocumentSignedByRecipientFieldNumber = 7;
  inline bool isdocumentsignedbyrecipient() const;
  inline void set_isdocumentsignedbyrecipient(bool value);
  
  // optional bool IsDocumentRejectedByRecipient = 8;
  inline bool has_isdocumentrejectedbyrecipient() const;
  inline void clear_isdocumentrejectedbyrecipient();
  static const int kIsDocumentRejectedByRecipientFieldNumber = 8;
  inline bool isdocumentrejectedbyrecipient() const;
  inline void set_isdocumentrejectedbyrecipient(bool value);
  
  // optional bool CanDocumentBeReceipted = 9;
  inline bool has_candocumentbereceipted() const;
  inline void clear_candocumentbereceipted();
  static const int kCanDocumentBeReceiptedFieldNumber = 9;
  inline bool candocumentbereceipted() const;
  inline void set_candocumentbereceipted(bool value);
  
  // optional bool CanDocumentBeSignedBySender = 10;
  inline bool has_candocumentbesignedbysender() const;
  inline void clear_candocumentbesignedbysender();
  static const int kCanDocumentBeSignedBySenderFieldNumber = 10;
  inline bool candocumentbesignedbysender() const;
  inline void set_candocumentbesignedbysender(bool value);
  
  // optional bool CanDocumentBeSignedOrRejectedByRecipient = 11;
  inline bool has_candocumentbesignedorrejectedbyrecipient() const;
  inline void clear_candocumentbesignedorrejectedbyrecipient();
  static const int kCanDocumentBeSignedOrRejectedByRecipientFieldNumber = 11;
  inline bool candocumentbesignedorrejectedbyrecipient() const;
  inline void set_candocumentbesignedorrejectedbyrecipient(bool value);
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.BilateralDocflow)
 private:
  inline void set_has_isfinished();
  inline void clear_has_isfinished();
  inline void set_has_receiptdocflow();
  inline void clear_has_receiptdocflow();
  inline void set_has_recipientsignaturedocflow();
  inline void clear_has_recipientsignaturedocflow();
  inline void set_has_recipientsignaturerejectiondocflow();
  inline void clear_has_recipientsignaturerejectiondocflow();
  inline void set_has_isreceiptrequested();
  inline void clear_has_isreceiptrequested();
  inline void set_has_isrecipientsignaturerequested();
  inline void clear_has_isrecipientsignaturerequested();
  inline void set_has_isdocumentsignedbyrecipient();
  inline void clear_has_isdocumentsignedbyrecipient();
  inline void set_has_isdocumentrejectedbyrecipient();
  inline void clear_has_isdocumentrejectedbyrecipient();
  inline void set_has_candocumentbereceipted();
  inline void clear_has_candocumentbereceipted();
  inline void set_has_candocumentbesignedbysender();
  inline void clear_has_candocumentbesignedbysender();
  inline void set_has_candocumentbesignedorrejectedbyrecipient();
  inline void clear_has_candocumentbesignedorrejectedbyrecipient();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* receiptdocflow_;
  ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow* recipientsignaturedocflow_;
  ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow* recipientsignaturerejectiondocflow_;
  bool isfinished_;
  bool isreceiptrequested_;
  bool isrecipientsignaturerequested_;
  bool isdocumentsignedbyrecipient_;
  bool isdocumentrejectedbyrecipient_;
  bool candocumentbereceipted_;
  bool candocumentbesignedbysender_;
  bool candocumentbesignedorrejectedbyrecipient_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];
  
  friend void  protobuf_AddDesc_Docflow_2fBilateralDocflow_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fBilateralDocflow_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fBilateralDocflow_2eproto();
  
  void InitAsDefaultInstance();
  static BilateralDocflow* default_instance_;
};
// ===================================================================


// ===================================================================

// BilateralDocflow

// optional bool IsFinished = 1;
inline bool BilateralDocflow::has_isfinished() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BilateralDocflow::set_has_isfinished() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BilateralDocflow::clear_has_isfinished() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BilateralDocflow::clear_isfinished() {
  isfinished_ = false;
  clear_has_isfinished();
}
inline bool BilateralDocflow::isfinished() const {
  return isfinished_;
}
inline void BilateralDocflow::set_isfinished(bool value) {
  set_has_isfinished();
  isfinished_ = value;
}

// optional .Diadoc.Api.Proto.Docflow.ReceiptDocflow ReceiptDocflow = 2;
inline bool BilateralDocflow::has_receiptdocflow() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BilateralDocflow::set_has_receiptdocflow() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BilateralDocflow::clear_has_receiptdocflow() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BilateralDocflow::clear_receiptdocflow() {
  if (receiptdocflow_ != NULL) receiptdocflow_->::Diadoc::Api::Proto::Docflow::ReceiptDocflow::Clear();
  clear_has_receiptdocflow();
}
inline const ::Diadoc::Api::Proto::Docflow::ReceiptDocflow& BilateralDocflow::receiptdocflow() const {
  return receiptdocflow_ != NULL ? *receiptdocflow_ : *default_instance_->receiptdocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* BilateralDocflow::mutable_receiptdocflow() {
  set_has_receiptdocflow();
  if (receiptdocflow_ == NULL) receiptdocflow_ = new ::Diadoc::Api::Proto::Docflow::ReceiptDocflow;
  return receiptdocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* BilateralDocflow::release_receiptdocflow() {
  clear_has_receiptdocflow();
  ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* temp = receiptdocflow_;
  receiptdocflow_ = NULL;
  return temp;
}

// optional .Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow RecipientSignatureDocflow = 3;
inline bool BilateralDocflow::has_recipientsignaturedocflow() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BilateralDocflow::set_has_recipientsignaturedocflow() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BilateralDocflow::clear_has_recipientsignaturedocflow() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BilateralDocflow::clear_recipientsignaturedocflow() {
  if (recipientsignaturedocflow_ != NULL) recipientsignaturedocflow_->::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow::Clear();
  clear_has_recipientsignaturedocflow();
}
inline const ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow& BilateralDocflow::recipientsignaturedocflow() const {
  return recipientsignaturedocflow_ != NULL ? *recipientsignaturedocflow_ : *default_instance_->recipientsignaturedocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow* BilateralDocflow::mutable_recipientsignaturedocflow() {
  set_has_recipientsignaturedocflow();
  if (recipientsignaturedocflow_ == NULL) recipientsignaturedocflow_ = new ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow;
  return recipientsignaturedocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow* BilateralDocflow::release_recipientsignaturedocflow() {
  clear_has_recipientsignaturedocflow();
  ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow* temp = recipientsignaturedocflow_;
  recipientsignaturedocflow_ = NULL;
  return temp;
}

// optional .Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow RecipientSignatureRejectionDocflow = 4;
inline bool BilateralDocflow::has_recipientsignaturerejectiondocflow() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BilateralDocflow::set_has_recipientsignaturerejectiondocflow() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BilateralDocflow::clear_has_recipientsignaturerejectiondocflow() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BilateralDocflow::clear_recipientsignaturerejectiondocflow() {
  if (recipientsignaturerejectiondocflow_ != NULL) recipientsignaturerejectiondocflow_->::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow::Clear();
  clear_has_recipientsignaturerejectiondocflow();
}
inline const ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow& BilateralDocflow::recipientsignaturerejectiondocflow() const {
  return recipientsignaturerejectiondocflow_ != NULL ? *recipientsignaturerejectiondocflow_ : *default_instance_->recipientsignaturerejectiondocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow* BilateralDocflow::mutable_recipientsignaturerejectiondocflow() {
  set_has_recipientsignaturerejectiondocflow();
  if (recipientsignaturerejectiondocflow_ == NULL) recipientsignaturerejectiondocflow_ = new ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow;
  return recipientsignaturerejectiondocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow* BilateralDocflow::release_recipientsignaturerejectiondocflow() {
  clear_has_recipientsignaturerejectiondocflow();
  ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow* temp = recipientsignaturerejectiondocflow_;
  recipientsignaturerejectiondocflow_ = NULL;
  return temp;
}

// optional bool IsReceiptRequested = 5;
inline bool BilateralDocflow::has_isreceiptrequested() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BilateralDocflow::set_has_isreceiptrequested() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BilateralDocflow::clear_has_isreceiptrequested() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BilateralDocflow::clear_isreceiptrequested() {
  isreceiptrequested_ = false;
  clear_has_isreceiptrequested();
}
inline bool BilateralDocflow::isreceiptrequested() const {
  return isreceiptrequested_;
}
inline void BilateralDocflow::set_isreceiptrequested(bool value) {
  set_has_isreceiptrequested();
  isreceiptrequested_ = value;
}

// optional bool IsRecipientSignatureRequested = 6;
inline bool BilateralDocflow::has_isrecipientsignaturerequested() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BilateralDocflow::set_has_isrecipientsignaturerequested() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BilateralDocflow::clear_has_isrecipientsignaturerequested() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BilateralDocflow::clear_isrecipientsignaturerequested() {
  isrecipientsignaturerequested_ = false;
  clear_has_isrecipientsignaturerequested();
}
inline bool BilateralDocflow::isrecipientsignaturerequested() const {
  return isrecipientsignaturerequested_;
}
inline void BilateralDocflow::set_isrecipientsignaturerequested(bool value) {
  set_has_isrecipientsignaturerequested();
  isrecipientsignaturerequested_ = value;
}

// optional bool IsDocumentSignedByRecipient = 7;
inline bool BilateralDocflow::has_isdocumentsignedbyrecipient() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void BilateralDocflow::set_has_isdocumentsignedbyrecipient() {
  _has_bits_[0] |= 0x00000040u;
}
inline void BilateralDocflow::clear_has_isdocumentsignedbyrecipient() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void BilateralDocflow::clear_isdocumentsignedbyrecipient() {
  isdocumentsignedbyrecipient_ = false;
  clear_has_isdocumentsignedbyrecipient();
}
inline bool BilateralDocflow::isdocumentsignedbyrecipient() const {
  return isdocumentsignedbyrecipient_;
}
inline void BilateralDocflow::set_isdocumentsignedbyrecipient(bool value) {
  set_has_isdocumentsignedbyrecipient();
  isdocumentsignedbyrecipient_ = value;
}

// optional bool IsDocumentRejectedByRecipient = 8;
inline bool BilateralDocflow::has_isdocumentrejectedbyrecipient() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void BilateralDocflow::set_has_isdocumentrejectedbyrecipient() {
  _has_bits_[0] |= 0x00000080u;
}
inline void BilateralDocflow::clear_has_isdocumentrejectedbyrecipient() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void BilateralDocflow::clear_isdocumentrejectedbyrecipient() {
  isdocumentrejectedbyrecipient_ = false;
  clear_has_isdocumentrejectedbyrecipient();
}
inline bool BilateralDocflow::isdocumentrejectedbyrecipient() const {
  return isdocumentrejectedbyrecipient_;
}
inline void BilateralDocflow::set_isdocumentrejectedbyrecipient(bool value) {
  set_has_isdocumentrejectedbyrecipient();
  isdocumentrejectedbyrecipient_ = value;
}

// optional bool CanDocumentBeReceipted = 9;
inline bool BilateralDocflow::has_candocumentbereceipted() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void BilateralDocflow::set_has_candocumentbereceipted() {
  _has_bits_[0] |= 0x00000100u;
}
inline void BilateralDocflow::clear_has_candocumentbereceipted() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void BilateralDocflow::clear_candocumentbereceipted() {
  candocumentbereceipted_ = false;
  clear_has_candocumentbereceipted();
}
inline bool BilateralDocflow::candocumentbereceipted() const {
  return candocumentbereceipted_;
}
inline void BilateralDocflow::set_candocumentbereceipted(bool value) {
  set_has_candocumentbereceipted();
  candocumentbereceipted_ = value;
}

// optional bool CanDocumentBeSignedBySender = 10;
inline bool BilateralDocflow::has_candocumentbesignedbysender() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void BilateralDocflow::set_has_candocumentbesignedbysender() {
  _has_bits_[0] |= 0x00000200u;
}
inline void BilateralDocflow::clear_has_candocumentbesignedbysender() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void BilateralDocflow::clear_candocumentbesignedbysender() {
  candocumentbesignedbysender_ = false;
  clear_has_candocumentbesignedbysender();
}
inline bool BilateralDocflow::candocumentbesignedbysender() const {
  return candocumentbesignedbysender_;
}
inline void BilateralDocflow::set_candocumentbesignedbysender(bool value) {
  set_has_candocumentbesignedbysender();
  candocumentbesignedbysender_ = value;
}

// optional bool CanDocumentBeSignedOrRejectedByRecipient = 11;
inline bool BilateralDocflow::has_candocumentbesignedorrejectedbyrecipient() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void BilateralDocflow::set_has_candocumentbesignedorrejectedbyrecipient() {
  _has_bits_[0] |= 0x00000400u;
}
inline void BilateralDocflow::clear_has_candocumentbesignedorrejectedbyrecipient() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void BilateralDocflow::clear_candocumentbesignedorrejectedbyrecipient() {
  candocumentbesignedorrejectedbyrecipient_ = false;
  clear_has_candocumentbesignedorrejectedbyrecipient();
}
inline bool BilateralDocflow::candocumentbesignedorrejectedbyrecipient() const {
  return candocumentbesignedorrejectedbyrecipient_;
}
inline void BilateralDocflow::set_candocumentbesignedorrejectedbyrecipient(bool value) {
  set_has_candocumentbesignedorrejectedbyrecipient();
  candocumentbesignedorrejectedbyrecipient_ = value;
}


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

#endif  // PROTOBUF_Docflow_2fBilateralDocflow_2eproto__INCLUDED
