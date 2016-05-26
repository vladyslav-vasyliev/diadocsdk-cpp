// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SignatureVerificationResult.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

namespace {

const ::google::protobuf::Descriptor* SignatureVerificationResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SignatureVerificationResult_reflection_ = NULL;
const ::google::protobuf::Descriptor* CertificateVerificationResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CertificateVerificationResult_reflection_ = NULL;
const ::google::protobuf::Descriptor* CertificateChainElement_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CertificateChainElement_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SignatureVerificationResult_2eproto() {
  protobuf_AddDesc_SignatureVerificationResult_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SignatureVerificationResult.proto");
  GOOGLE_CHECK(file != NULL);
  SignatureVerificationResult_descriptor_ = file->message_type(0);
  static const int SignatureVerificationResult_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SignatureVerificationResult, isvalid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SignatureVerificationResult, certificatestatus_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SignatureVerificationResult, signaturetimestamp_),
  };
  SignatureVerificationResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SignatureVerificationResult_descriptor_,
      SignatureVerificationResult::default_instance_,
      SignatureVerificationResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SignatureVerificationResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SignatureVerificationResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SignatureVerificationResult));
  CertificateVerificationResult_descriptor_ = file->message_type(1);
  static const int CertificateVerificationResult_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateVerificationResult, isvalid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateVerificationResult, certificatechain_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateVerificationResult, verificationtime_),
  };
  CertificateVerificationResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CertificateVerificationResult_descriptor_,
      CertificateVerificationResult::default_instance_,
      CertificateVerificationResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateVerificationResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateVerificationResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CertificateVerificationResult));
  CertificateChainElement_descriptor_ = file->message_type(2);
  static const int CertificateChainElement_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateChainElement, certificatechainstatusflags_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateChainElement, dercertificate_),
  };
  CertificateChainElement_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CertificateChainElement_descriptor_,
      CertificateChainElement::default_instance_,
      CertificateChainElement_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateChainElement, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertificateChainElement, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CertificateChainElement));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SignatureVerificationResult_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SignatureVerificationResult_descriptor_, &SignatureVerificationResult::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CertificateVerificationResult_descriptor_, &CertificateVerificationResult::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CertificateChainElement_descriptor_, &CertificateChainElement::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SignatureVerificationResult_2eproto() {
  delete SignatureVerificationResult::default_instance_;
  delete SignatureVerificationResult_reflection_;
  delete CertificateVerificationResult::default_instance_;
  delete CertificateVerificationResult_reflection_;
  delete CertificateChainElement::default_instance_;
  delete CertificateChainElement_reflection_;
}

void protobuf_AddDesc_SignatureVerificationResult_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::protobuf_AddDesc_Timestamp_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!SignatureVerificationResult.proto\022\020Dia"
    "doc.Api.Proto\032\017Timestamp.proto\"\263\001\n\033Signa"
    "tureVerificationResult\022\017\n\007IsValid\030\001 \002(\010\022"
    "J\n\021CertificateStatus\030\002 \001(\0132/.Diadoc.Api."
    "Proto.CertificateVerificationResult\0227\n\022S"
    "ignatureTimestamp\030\003 \001(\0132\033.Diadoc.Api.Pro"
    "to.Timestamp\"\254\001\n\035CertificateVerification"
    "Result\022\017\n\007IsValid\030\002 \002(\010\022C\n\020CertificateCh"
    "ain\030\003 \003(\0132).Diadoc.Api.Proto.Certificate"
    "ChainElement\0225\n\020VerificationTime\030\004 \002(\0132\033"
    ".Diadoc.Api.Proto.Timestamp\"V\n\027Certifica"
    "teChainElement\022#\n\033CertificateChainStatus"
    "Flags\030\001 \002(\005\022\026\n\016DerCertificate\030\002 \002(\014", 515);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SignatureVerificationResult.proto", &protobuf_RegisterTypes);
  SignatureVerificationResult::default_instance_ = new SignatureVerificationResult();
  CertificateVerificationResult::default_instance_ = new CertificateVerificationResult();
  CertificateChainElement::default_instance_ = new CertificateChainElement();
  SignatureVerificationResult::default_instance_->InitAsDefaultInstance();
  CertificateVerificationResult::default_instance_->InitAsDefaultInstance();
  CertificateChainElement::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SignatureVerificationResult_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SignatureVerificationResult_2eproto {
  StaticDescriptorInitializer_SignatureVerificationResult_2eproto() {
    protobuf_AddDesc_SignatureVerificationResult_2eproto();
  }
} static_descriptor_initializer_SignatureVerificationResult_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int SignatureVerificationResult::kIsValidFieldNumber;
const int SignatureVerificationResult::kCertificateStatusFieldNumber;
const int SignatureVerificationResult::kSignatureTimestampFieldNumber;
#endif  // !_MSC_VER

SignatureVerificationResult::SignatureVerificationResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SignatureVerificationResult::InitAsDefaultInstance() {
  certificatestatus_ = const_cast< ::Diadoc::Api::Proto::CertificateVerificationResult*>(&::Diadoc::Api::Proto::CertificateVerificationResult::default_instance());
  signaturetimestamp_ = const_cast< ::Diadoc::Api::Proto::Timestamp*>(&::Diadoc::Api::Proto::Timestamp::default_instance());
}

SignatureVerificationResult::SignatureVerificationResult(const SignatureVerificationResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SignatureVerificationResult::SharedCtor() {
  _cached_size_ = 0;
  isvalid_ = false;
  certificatestatus_ = NULL;
  signaturetimestamp_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SignatureVerificationResult::~SignatureVerificationResult() {
  SharedDtor();
}

void SignatureVerificationResult::SharedDtor() {
  if (this != default_instance_) {
    delete certificatestatus_;
    delete signaturetimestamp_;
  }
}

void SignatureVerificationResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SignatureVerificationResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SignatureVerificationResult_descriptor_;
}

const SignatureVerificationResult& SignatureVerificationResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SignatureVerificationResult_2eproto();  return *default_instance_;
}

SignatureVerificationResult* SignatureVerificationResult::default_instance_ = NULL;

SignatureVerificationResult* SignatureVerificationResult::New() const {
  return new SignatureVerificationResult;
}

void SignatureVerificationResult::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    isvalid_ = false;
    if (has_certificatestatus()) {
      if (certificatestatus_ != NULL) certificatestatus_->::Diadoc::Api::Proto::CertificateVerificationResult::Clear();
    }
    if (has_signaturetimestamp()) {
      if (signaturetimestamp_ != NULL) signaturetimestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SignatureVerificationResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool IsValid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isvalid_)));
          set_has_isvalid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_CertificateStatus;
        break;
      }
      
      // optional .Diadoc.Api.Proto.CertificateVerificationResult CertificateStatus = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_CertificateStatus:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_certificatestatus()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_SignatureTimestamp;
        break;
      }
      
      // optional .Diadoc.Api.Proto.Timestamp SignatureTimestamp = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_SignatureTimestamp:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_signaturetimestamp()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SignatureVerificationResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool IsValid = 1;
  if (has_isvalid()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->isvalid(), output);
  }
  
  // optional .Diadoc.Api.Proto.CertificateVerificationResult CertificateStatus = 2;
  if (has_certificatestatus()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->certificatestatus(), output);
  }
  
  // optional .Diadoc.Api.Proto.Timestamp SignatureTimestamp = 3;
  if (has_signaturetimestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->signaturetimestamp(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SignatureVerificationResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bool IsValid = 1;
  if (has_isvalid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->isvalid(), target);
  }
  
  // optional .Diadoc.Api.Proto.CertificateVerificationResult CertificateStatus = 2;
  if (has_certificatestatus()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->certificatestatus(), target);
  }
  
  // optional .Diadoc.Api.Proto.Timestamp SignatureTimestamp = 3;
  if (has_signaturetimestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->signaturetimestamp(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SignatureVerificationResult::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool IsValid = 1;
    if (has_isvalid()) {
      total_size += 1 + 1;
    }
    
    // optional .Diadoc.Api.Proto.CertificateVerificationResult CertificateStatus = 2;
    if (has_certificatestatus()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->certificatestatus());
    }
    
    // optional .Diadoc.Api.Proto.Timestamp SignatureTimestamp = 3;
    if (has_signaturetimestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->signaturetimestamp());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SignatureVerificationResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SignatureVerificationResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SignatureVerificationResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SignatureVerificationResult::MergeFrom(const SignatureVerificationResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_isvalid()) {
      set_isvalid(from.isvalid());
    }
    if (from.has_certificatestatus()) {
      mutable_certificatestatus()->::Diadoc::Api::Proto::CertificateVerificationResult::MergeFrom(from.certificatestatus());
    }
    if (from.has_signaturetimestamp()) {
      mutable_signaturetimestamp()->::Diadoc::Api::Proto::Timestamp::MergeFrom(from.signaturetimestamp());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SignatureVerificationResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SignatureVerificationResult::CopyFrom(const SignatureVerificationResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SignatureVerificationResult::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  if (has_certificatestatus()) {
    if (!this->certificatestatus().IsInitialized()) return false;
  }
  if (has_signaturetimestamp()) {
    if (!this->signaturetimestamp().IsInitialized()) return false;
  }
  return true;
}

void SignatureVerificationResult::Swap(SignatureVerificationResult* other) {
  if (other != this) {
    std::swap(isvalid_, other->isvalid_);
    std::swap(certificatestatus_, other->certificatestatus_);
    std::swap(signaturetimestamp_, other->signaturetimestamp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SignatureVerificationResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SignatureVerificationResult_descriptor_;
  metadata.reflection = SignatureVerificationResult_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CertificateVerificationResult::kIsValidFieldNumber;
const int CertificateVerificationResult::kCertificateChainFieldNumber;
const int CertificateVerificationResult::kVerificationTimeFieldNumber;
#endif  // !_MSC_VER

CertificateVerificationResult::CertificateVerificationResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CertificateVerificationResult::InitAsDefaultInstance() {
  verificationtime_ = const_cast< ::Diadoc::Api::Proto::Timestamp*>(&::Diadoc::Api::Proto::Timestamp::default_instance());
}

CertificateVerificationResult::CertificateVerificationResult(const CertificateVerificationResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CertificateVerificationResult::SharedCtor() {
  _cached_size_ = 0;
  isvalid_ = false;
  verificationtime_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CertificateVerificationResult::~CertificateVerificationResult() {
  SharedDtor();
}

void CertificateVerificationResult::SharedDtor() {
  if (this != default_instance_) {
    delete verificationtime_;
  }
}

void CertificateVerificationResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CertificateVerificationResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CertificateVerificationResult_descriptor_;
}

const CertificateVerificationResult& CertificateVerificationResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SignatureVerificationResult_2eproto();  return *default_instance_;
}

CertificateVerificationResult* CertificateVerificationResult::default_instance_ = NULL;

CertificateVerificationResult* CertificateVerificationResult::New() const {
  return new CertificateVerificationResult;
}

void CertificateVerificationResult::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    isvalid_ = false;
    if (has_verificationtime()) {
      if (verificationtime_ != NULL) verificationtime_->::Diadoc::Api::Proto::Timestamp::Clear();
    }
  }
  certificatechain_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CertificateVerificationResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool IsValid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isvalid_)));
          set_has_isvalid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_CertificateChain;
        break;
      }
      
      // repeated .Diadoc.Api.Proto.CertificateChainElement CertificateChain = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_CertificateChain:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_certificatechain()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_CertificateChain;
        if (input->ExpectTag(34)) goto parse_VerificationTime;
        break;
      }
      
      // required .Diadoc.Api.Proto.Timestamp VerificationTime = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_VerificationTime:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_verificationtime()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CertificateVerificationResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool IsValid = 2;
  if (has_isvalid()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->isvalid(), output);
  }
  
  // repeated .Diadoc.Api.Proto.CertificateChainElement CertificateChain = 3;
  for (int i = 0; i < this->certificatechain_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->certificatechain(i), output);
  }
  
  // required .Diadoc.Api.Proto.Timestamp VerificationTime = 4;
  if (has_verificationtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->verificationtime(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CertificateVerificationResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bool IsValid = 2;
  if (has_isvalid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->isvalid(), target);
  }
  
  // repeated .Diadoc.Api.Proto.CertificateChainElement CertificateChain = 3;
  for (int i = 0; i < this->certificatechain_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->certificatechain(i), target);
  }
  
  // required .Diadoc.Api.Proto.Timestamp VerificationTime = 4;
  if (has_verificationtime()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->verificationtime(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CertificateVerificationResult::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool IsValid = 2;
    if (has_isvalid()) {
      total_size += 1 + 1;
    }
    
    // required .Diadoc.Api.Proto.Timestamp VerificationTime = 4;
    if (has_verificationtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->verificationtime());
    }
    
  }
  // repeated .Diadoc.Api.Proto.CertificateChainElement CertificateChain = 3;
  total_size += 1 * this->certificatechain_size();
  for (int i = 0; i < this->certificatechain_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->certificatechain(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CertificateVerificationResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CertificateVerificationResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CertificateVerificationResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CertificateVerificationResult::MergeFrom(const CertificateVerificationResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  certificatechain_.MergeFrom(from.certificatechain_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_isvalid()) {
      set_isvalid(from.isvalid());
    }
    if (from.has_verificationtime()) {
      mutable_verificationtime()->::Diadoc::Api::Proto::Timestamp::MergeFrom(from.verificationtime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CertificateVerificationResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CertificateVerificationResult::CopyFrom(const CertificateVerificationResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CertificateVerificationResult::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;
  
  for (int i = 0; i < certificatechain_size(); i++) {
    if (!this->certificatechain(i).IsInitialized()) return false;
  }
  if (has_verificationtime()) {
    if (!this->verificationtime().IsInitialized()) return false;
  }
  return true;
}

void CertificateVerificationResult::Swap(CertificateVerificationResult* other) {
  if (other != this) {
    std::swap(isvalid_, other->isvalid_);
    certificatechain_.Swap(&other->certificatechain_);
    std::swap(verificationtime_, other->verificationtime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CertificateVerificationResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CertificateVerificationResult_descriptor_;
  metadata.reflection = CertificateVerificationResult_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CertificateChainElement::kCertificateChainStatusFlagsFieldNumber;
const int CertificateChainElement::kDerCertificateFieldNumber;
#endif  // !_MSC_VER

CertificateChainElement::CertificateChainElement()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CertificateChainElement::InitAsDefaultInstance() {
}

CertificateChainElement::CertificateChainElement(const CertificateChainElement& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CertificateChainElement::SharedCtor() {
  _cached_size_ = 0;
  certificatechainstatusflags_ = 0;
  dercertificate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CertificateChainElement::~CertificateChainElement() {
  SharedDtor();
}

void CertificateChainElement::SharedDtor() {
  if (dercertificate_ != &::google::protobuf::internal::kEmptyString) {
    delete dercertificate_;
  }
  if (this != default_instance_) {
  }
}

void CertificateChainElement::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CertificateChainElement::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CertificateChainElement_descriptor_;
}

const CertificateChainElement& CertificateChainElement::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SignatureVerificationResult_2eproto();  return *default_instance_;
}

CertificateChainElement* CertificateChainElement::default_instance_ = NULL;

CertificateChainElement* CertificateChainElement::New() const {
  return new CertificateChainElement;
}

void CertificateChainElement::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    certificatechainstatusflags_ = 0;
    if (has_dercertificate()) {
      if (dercertificate_ != &::google::protobuf::internal::kEmptyString) {
        dercertificate_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CertificateChainElement::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 CertificateChainStatusFlags = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &certificatechainstatusflags_)));
          set_has_certificatechainstatusflags();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_DerCertificate;
        break;
      }
      
      // required bytes DerCertificate = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_DerCertificate:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_dercertificate()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CertificateChainElement::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 CertificateChainStatusFlags = 1;
  if (has_certificatechainstatusflags()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->certificatechainstatusflags(), output);
  }
  
  // required bytes DerCertificate = 2;
  if (has_dercertificate()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->dercertificate(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CertificateChainElement::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 CertificateChainStatusFlags = 1;
  if (has_certificatechainstatusflags()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->certificatechainstatusflags(), target);
  }
  
  // required bytes DerCertificate = 2;
  if (has_dercertificate()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->dercertificate(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CertificateChainElement::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 CertificateChainStatusFlags = 1;
    if (has_certificatechainstatusflags()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->certificatechainstatusflags());
    }
    
    // required bytes DerCertificate = 2;
    if (has_dercertificate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->dercertificate());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CertificateChainElement::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CertificateChainElement* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CertificateChainElement*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CertificateChainElement::MergeFrom(const CertificateChainElement& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_certificatechainstatusflags()) {
      set_certificatechainstatusflags(from.certificatechainstatusflags());
    }
    if (from.has_dercertificate()) {
      set_dercertificate(from.dercertificate());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CertificateChainElement::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CertificateChainElement::CopyFrom(const CertificateChainElement& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CertificateChainElement::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void CertificateChainElement::Swap(CertificateChainElement* other) {
  if (other != this) {
    std::swap(certificatechainstatusflags_, other->certificatechainstatusflags_);
    std::swap(dercertificate_, other->dercertificate_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CertificateChainElement::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CertificateChainElement_descriptor_;
  metadata.reflection = CertificateChainElement_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
