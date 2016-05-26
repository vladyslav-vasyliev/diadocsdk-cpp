// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CloudSign.pb.h"

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

const ::google::protobuf::Descriptor* CloudSignRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CloudSignRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* CloudSignFile_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CloudSignFile_reflection_ = NULL;
const ::google::protobuf::Descriptor* CloudSignResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CloudSignResult_reflection_ = NULL;
const ::google::protobuf::Descriptor* CloudSignConfirmResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CloudSignConfirmResult_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CloudSign_2eproto() {
  protobuf_AddDesc_CloudSign_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CloudSign.proto");
  GOOGLE_CHECK(file != NULL);
  CloudSignRequest_descriptor_ = file->message_type(0);
  static const int CloudSignRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignRequest, files_),
  };
  CloudSignRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CloudSignRequest_descriptor_,
      CloudSignRequest::default_instance_,
      CloudSignRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CloudSignRequest));
  CloudSignFile_descriptor_ = file->message_type(1);
  static const int CloudSignFile_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignFile, content_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignFile, filename_),
  };
  CloudSignFile_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CloudSignFile_descriptor_,
      CloudSignFile::default_instance_,
      CloudSignFile_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignFile, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignFile, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CloudSignFile));
  CloudSignResult_descriptor_ = file->message_type(2);
  static const int CloudSignResult_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignResult, token_),
  };
  CloudSignResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CloudSignResult_descriptor_,
      CloudSignResult::default_instance_,
      CloudSignResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CloudSignResult));
  CloudSignConfirmResult_descriptor_ = file->message_type(3);
  static const int CloudSignConfirmResult_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignConfirmResult, signatures_),
  };
  CloudSignConfirmResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CloudSignConfirmResult_descriptor_,
      CloudSignConfirmResult::default_instance_,
      CloudSignConfirmResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignConfirmResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CloudSignConfirmResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CloudSignConfirmResult));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CloudSign_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CloudSignRequest_descriptor_, &CloudSignRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CloudSignFile_descriptor_, &CloudSignFile::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CloudSignResult_descriptor_, &CloudSignResult::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CloudSignConfirmResult_descriptor_, &CloudSignConfirmResult::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CloudSign_2eproto() {
  delete CloudSignRequest::default_instance_;
  delete CloudSignRequest_reflection_;
  delete CloudSignFile::default_instance_;
  delete CloudSignFile_reflection_;
  delete CloudSignResult::default_instance_;
  delete CloudSignResult_reflection_;
  delete CloudSignConfirmResult::default_instance_;
  delete CloudSignConfirmResult_reflection_;
}

void protobuf_AddDesc_CloudSign_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::protobuf_AddDesc_Content_5fv2_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017CloudSign.proto\022\020Diadoc.Api.Proto\032\020Con"
    "tent_v2.proto\"B\n\020CloudSignRequest\022.\n\005Fil"
    "es\030\001 \003(\0132\037.Diadoc.Api.Proto.CloudSignFil"
    "e\"P\n\rCloudSignFile\022-\n\007Content\030\001 \001(\0132\034.Di"
    "adoc.Api.Proto.Content_v2\022\020\n\010FileName\030\002 "
    "\001(\t\" \n\017CloudSignResult\022\r\n\005Token\030\001 \001(\t\"J\n"
    "\026CloudSignConfirmResult\0220\n\nSignatures\030\001 "
    "\003(\0132\034.Diadoc.Api.Proto.Content_v2", 313);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CloudSign.proto", &protobuf_RegisterTypes);
  CloudSignRequest::default_instance_ = new CloudSignRequest();
  CloudSignFile::default_instance_ = new CloudSignFile();
  CloudSignResult::default_instance_ = new CloudSignResult();
  CloudSignConfirmResult::default_instance_ = new CloudSignConfirmResult();
  CloudSignRequest::default_instance_->InitAsDefaultInstance();
  CloudSignFile::default_instance_->InitAsDefaultInstance();
  CloudSignResult::default_instance_->InitAsDefaultInstance();
  CloudSignConfirmResult::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CloudSign_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CloudSign_2eproto {
  StaticDescriptorInitializer_CloudSign_2eproto() {
    protobuf_AddDesc_CloudSign_2eproto();
  }
} static_descriptor_initializer_CloudSign_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int CloudSignRequest::kFilesFieldNumber;
#endif  // !_MSC_VER

CloudSignRequest::CloudSignRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CloudSignRequest::InitAsDefaultInstance() {
}

CloudSignRequest::CloudSignRequest(const CloudSignRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CloudSignRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CloudSignRequest::~CloudSignRequest() {
  SharedDtor();
}

void CloudSignRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CloudSignRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CloudSignRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CloudSignRequest_descriptor_;
}

const CloudSignRequest& CloudSignRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CloudSign_2eproto();  return *default_instance_;
}

CloudSignRequest* CloudSignRequest::default_instance_ = NULL;

CloudSignRequest* CloudSignRequest::New() const {
  return new CloudSignRequest;
}

void CloudSignRequest::Clear() {
  files_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CloudSignRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Diadoc.Api.Proto.CloudSignFile Files = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Files:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_files()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_Files;
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

void CloudSignRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .Diadoc.Api.Proto.CloudSignFile Files = 1;
  for (int i = 0; i < this->files_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->files(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CloudSignRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .Diadoc.Api.Proto.CloudSignFile Files = 1;
  for (int i = 0; i < this->files_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->files(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CloudSignRequest::ByteSize() const {
  int total_size = 0;
  
  // repeated .Diadoc.Api.Proto.CloudSignFile Files = 1;
  total_size += 1 * this->files_size();
  for (int i = 0; i < this->files_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->files(i));
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

void CloudSignRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CloudSignRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CloudSignRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CloudSignRequest::MergeFrom(const CloudSignRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  files_.MergeFrom(from.files_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CloudSignRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CloudSignRequest::CopyFrom(const CloudSignRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CloudSignRequest::IsInitialized() const {
  
  for (int i = 0; i < files_size(); i++) {
    if (!this->files(i).IsInitialized()) return false;
  }
  return true;
}

void CloudSignRequest::Swap(CloudSignRequest* other) {
  if (other != this) {
    files_.Swap(&other->files_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CloudSignRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CloudSignRequest_descriptor_;
  metadata.reflection = CloudSignRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CloudSignFile::kContentFieldNumber;
const int CloudSignFile::kFileNameFieldNumber;
#endif  // !_MSC_VER

CloudSignFile::CloudSignFile()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CloudSignFile::InitAsDefaultInstance() {
  content_ = const_cast< ::Diadoc::Api::Proto::Content_v2*>(&::Diadoc::Api::Proto::Content_v2::default_instance());
}

CloudSignFile::CloudSignFile(const CloudSignFile& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CloudSignFile::SharedCtor() {
  _cached_size_ = 0;
  content_ = NULL;
  filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CloudSignFile::~CloudSignFile() {
  SharedDtor();
}

void CloudSignFile::SharedDtor() {
  if (filename_ != &::google::protobuf::internal::kEmptyString) {
    delete filename_;
  }
  if (this != default_instance_) {
    delete content_;
  }
}

void CloudSignFile::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CloudSignFile::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CloudSignFile_descriptor_;
}

const CloudSignFile& CloudSignFile::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CloudSign_2eproto();  return *default_instance_;
}

CloudSignFile* CloudSignFile::default_instance_ = NULL;

CloudSignFile* CloudSignFile::New() const {
  return new CloudSignFile;
}

void CloudSignFile::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_content()) {
      if (content_ != NULL) content_->::Diadoc::Api::Proto::Content_v2::Clear();
    }
    if (has_filename()) {
      if (filename_ != &::google::protobuf::internal::kEmptyString) {
        filename_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CloudSignFile::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Diadoc.Api.Proto.Content_v2 Content = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_content()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_FileName;
        break;
      }
      
      // optional string FileName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_FileName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->filename().data(), this->filename().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void CloudSignFile::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .Diadoc.Api.Proto.Content_v2 Content = 1;
  if (has_content()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->content(), output);
  }
  
  // optional string FileName = 2;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->filename(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CloudSignFile::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .Diadoc.Api.Proto.Content_v2 Content = 1;
  if (has_content()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->content(), target);
  }
  
  // optional string FileName = 2;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->filename(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CloudSignFile::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .Diadoc.Api.Proto.Content_v2 Content = 1;
    if (has_content()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->content());
    }
    
    // optional string FileName = 2;
    if (has_filename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->filename());
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

void CloudSignFile::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CloudSignFile* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CloudSignFile*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CloudSignFile::MergeFrom(const CloudSignFile& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_content()) {
      mutable_content()->::Diadoc::Api::Proto::Content_v2::MergeFrom(from.content());
    }
    if (from.has_filename()) {
      set_filename(from.filename());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CloudSignFile::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CloudSignFile::CopyFrom(const CloudSignFile& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CloudSignFile::IsInitialized() const {
  
  if (has_content()) {
    if (!this->content().IsInitialized()) return false;
  }
  return true;
}

void CloudSignFile::Swap(CloudSignFile* other) {
  if (other != this) {
    std::swap(content_, other->content_);
    std::swap(filename_, other->filename_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CloudSignFile::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CloudSignFile_descriptor_;
  metadata.reflection = CloudSignFile_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CloudSignResult::kTokenFieldNumber;
#endif  // !_MSC_VER

CloudSignResult::CloudSignResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CloudSignResult::InitAsDefaultInstance() {
}

CloudSignResult::CloudSignResult(const CloudSignResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CloudSignResult::SharedCtor() {
  _cached_size_ = 0;
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CloudSignResult::~CloudSignResult() {
  SharedDtor();
}

void CloudSignResult::SharedDtor() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    delete token_;
  }
  if (this != default_instance_) {
  }
}

void CloudSignResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CloudSignResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CloudSignResult_descriptor_;
}

const CloudSignResult& CloudSignResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CloudSign_2eproto();  return *default_instance_;
}

CloudSignResult* CloudSignResult::default_instance_ = NULL;

CloudSignResult* CloudSignResult::New() const {
  return new CloudSignResult;
}

void CloudSignResult::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::kEmptyString) {
        token_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CloudSignResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string Token = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void CloudSignResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->token(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CloudSignResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->token(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CloudSignResult::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string Token = 1;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
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

void CloudSignResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CloudSignResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CloudSignResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CloudSignResult::MergeFrom(const CloudSignResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_token()) {
      set_token(from.token());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CloudSignResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CloudSignResult::CopyFrom(const CloudSignResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CloudSignResult::IsInitialized() const {
  
  return true;
}

void CloudSignResult::Swap(CloudSignResult* other) {
  if (other != this) {
    std::swap(token_, other->token_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CloudSignResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CloudSignResult_descriptor_;
  metadata.reflection = CloudSignResult_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CloudSignConfirmResult::kSignaturesFieldNumber;
#endif  // !_MSC_VER

CloudSignConfirmResult::CloudSignConfirmResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CloudSignConfirmResult::InitAsDefaultInstance() {
}

CloudSignConfirmResult::CloudSignConfirmResult(const CloudSignConfirmResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CloudSignConfirmResult::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CloudSignConfirmResult::~CloudSignConfirmResult() {
  SharedDtor();
}

void CloudSignConfirmResult::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CloudSignConfirmResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CloudSignConfirmResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CloudSignConfirmResult_descriptor_;
}

const CloudSignConfirmResult& CloudSignConfirmResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CloudSign_2eproto();  return *default_instance_;
}

CloudSignConfirmResult* CloudSignConfirmResult::default_instance_ = NULL;

CloudSignConfirmResult* CloudSignConfirmResult::New() const {
  return new CloudSignConfirmResult;
}

void CloudSignConfirmResult::Clear() {
  signatures_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CloudSignConfirmResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Diadoc.Api.Proto.Content_v2 Signatures = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Signatures:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_signatures()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_Signatures;
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

void CloudSignConfirmResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .Diadoc.Api.Proto.Content_v2 Signatures = 1;
  for (int i = 0; i < this->signatures_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->signatures(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CloudSignConfirmResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .Diadoc.Api.Proto.Content_v2 Signatures = 1;
  for (int i = 0; i < this->signatures_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->signatures(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CloudSignConfirmResult::ByteSize() const {
  int total_size = 0;
  
  // repeated .Diadoc.Api.Proto.Content_v2 Signatures = 1;
  total_size += 1 * this->signatures_size();
  for (int i = 0; i < this->signatures_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->signatures(i));
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

void CloudSignConfirmResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CloudSignConfirmResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CloudSignConfirmResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CloudSignConfirmResult::MergeFrom(const CloudSignConfirmResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  signatures_.MergeFrom(from.signatures_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CloudSignConfirmResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CloudSignConfirmResult::CopyFrom(const CloudSignConfirmResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CloudSignConfirmResult::IsInitialized() const {
  
  for (int i = 0; i < signatures_size(); i++) {
    if (!this->signatures(i).IsInitialized()) return false;
  }
  return true;
}

void CloudSignConfirmResult::Swap(CloudSignConfirmResult* other) {
  if (other != this) {
    signatures_.Swap(&other->signatures_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CloudSignConfirmResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CloudSignConfirmResult_descriptor_;
  metadata.reflection = CloudSignConfirmResult_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
