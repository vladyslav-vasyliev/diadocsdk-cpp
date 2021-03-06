// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Events/ResolutionInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Events/ResolutionInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Events {

namespace {

const ::google::protobuf::Descriptor* ResolutionInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ResolutionInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Events_2fResolutionInfo_2eproto() {
  protobuf_AddDesc_Events_2fResolutionInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Events/ResolutionInfo.proto");
  GOOGLE_CHECK(file != NULL);
  ResolutionInfo_descriptor_ = file->message_type(0);
  static const int ResolutionInfo_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionInfo, resolutiontype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionInfo, author_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionInfo, initialrequestid_),
  };
  ResolutionInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ResolutionInfo_descriptor_,
      ResolutionInfo::default_instance_,
      ResolutionInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ResolutionInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Events_2fResolutionInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ResolutionInfo_descriptor_, &ResolutionInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Events_2fResolutionInfo_2eproto() {
  delete ResolutionInfo::default_instance_;
  delete ResolutionInfo_reflection_;
}

void protobuf_AddDesc_Events_2fResolutionInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::protobuf_AddDesc_ResolutionType_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033Events/ResolutionInfo.proto\022\027Diadoc.Ap"
    "i.Proto.Events\032\024ResolutionType.proto\"\213\001\n"
    "\016ResolutionInfo\022O\n\016ResolutionType\030\001 \001(\0162"
    " .Diadoc.Api.Proto.ResolutionType:\025Unkno"
    "wnResolutionType\022\016\n\006Author\030\002 \002(\t\022\030\n\020Init"
    "ialRequestId\030\003 \001(\t", 218);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Events/ResolutionInfo.proto", &protobuf_RegisterTypes);
  ResolutionInfo::default_instance_ = new ResolutionInfo();
  ResolutionInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Events_2fResolutionInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Events_2fResolutionInfo_2eproto {
  StaticDescriptorInitializer_Events_2fResolutionInfo_2eproto() {
    protobuf_AddDesc_Events_2fResolutionInfo_2eproto();
  }
} static_descriptor_initializer_Events_2fResolutionInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ResolutionInfo::kResolutionTypeFieldNumber;
const int ResolutionInfo::kAuthorFieldNumber;
const int ResolutionInfo::kInitialRequestIdFieldNumber;
#endif  // !_MSC_VER

ResolutionInfo::ResolutionInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Events.ResolutionInfo)
}

void ResolutionInfo::InitAsDefaultInstance() {
}

ResolutionInfo::ResolutionInfo(const ResolutionInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Events.ResolutionInfo)
}

void ResolutionInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  resolutiontype_ = -1;
  author_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  initialrequestid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ResolutionInfo::~ResolutionInfo() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Events.ResolutionInfo)
  SharedDtor();
}

void ResolutionInfo::SharedDtor() {
  if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete author_;
  }
  if (initialrequestid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete initialrequestid_;
  }
  if (this != default_instance_) {
  }
}

void ResolutionInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResolutionInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ResolutionInfo_descriptor_;
}

const ResolutionInfo& ResolutionInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Events_2fResolutionInfo_2eproto();
  return *default_instance_;
}

ResolutionInfo* ResolutionInfo::default_instance_ = NULL;

ResolutionInfo* ResolutionInfo::New() const {
  return new ResolutionInfo;
}

void ResolutionInfo::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    resolutiontype_ = -1;
    if (has_author()) {
      if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        author_->clear();
      }
    }
    if (has_initialrequestid()) {
      if (initialrequestid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        initialrequestid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ResolutionInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Events.ResolutionInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Diadoc.Api.Proto.ResolutionType ResolutionType = 1 [default = UnknownResolutionType];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Diadoc::Api::Proto::ResolutionType_IsValid(value)) {
            set_resolutiontype(static_cast< ::Diadoc::Api::Proto::ResolutionType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Author;
        break;
      }

      // required string Author = 2;
      case 2: {
        if (tag == 18) {
         parse_Author:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_author()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->author().data(), this->author().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "author");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_InitialRequestId;
        break;
      }

      // optional string InitialRequestId = 3;
      case 3: {
        if (tag == 26) {
         parse_InitialRequestId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_initialrequestid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->initialrequestid().data(), this->initialrequestid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "initialrequestid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Events.ResolutionInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Events.ResolutionInfo)
  return false;
#undef DO_
}

void ResolutionInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Events.ResolutionInfo)
  // optional .Diadoc.Api.Proto.ResolutionType ResolutionType = 1 [default = UnknownResolutionType];
  if (has_resolutiontype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->resolutiontype(), output);
  }

  // required string Author = 2;
  if (has_author()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->author().data(), this->author().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "author");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->author(), output);
  }

  // optional string InitialRequestId = 3;
  if (has_initialrequestid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->initialrequestid().data(), this->initialrequestid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "initialrequestid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->initialrequestid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Events.ResolutionInfo)
}

::google::protobuf::uint8* ResolutionInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Events.ResolutionInfo)
  // optional .Diadoc.Api.Proto.ResolutionType ResolutionType = 1 [default = UnknownResolutionType];
  if (has_resolutiontype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->resolutiontype(), target);
  }

  // required string Author = 2;
  if (has_author()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->author().data(), this->author().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "author");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->author(), target);
  }

  // optional string InitialRequestId = 3;
  if (has_initialrequestid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->initialrequestid().data(), this->initialrequestid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "initialrequestid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->initialrequestid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Events.ResolutionInfo)
  return target;
}

int ResolutionInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .Diadoc.Api.Proto.ResolutionType ResolutionType = 1 [default = UnknownResolutionType];
    if (has_resolutiontype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->resolutiontype());
    }

    // required string Author = 2;
    if (has_author()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->author());
    }

    // optional string InitialRequestId = 3;
    if (has_initialrequestid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->initialrequestid());
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

void ResolutionInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ResolutionInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ResolutionInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ResolutionInfo::MergeFrom(const ResolutionInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_resolutiontype()) {
      set_resolutiontype(from.resolutiontype());
    }
    if (from.has_author()) {
      set_author(from.author());
    }
    if (from.has_initialrequestid()) {
      set_initialrequestid(from.initialrequestid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ResolutionInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResolutionInfo::CopyFrom(const ResolutionInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResolutionInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  return true;
}

void ResolutionInfo::Swap(ResolutionInfo* other) {
  if (other != this) {
    std::swap(resolutiontype_, other->resolutiontype_);
    std::swap(author_, other->author_);
    std::swap(initialrequestid_, other->initialrequestid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ResolutionInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ResolutionInfo_descriptor_;
  metadata.reflection = ResolutionInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Events
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
