// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Docflow/ReceiptDocflow.pb.h"

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
namespace Docflow {

namespace {

const ::google::protobuf::Descriptor* ReceiptDocflow_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ReceiptDocflow_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Docflow_2fReceiptDocflow_2eproto() {
  protobuf_AddDesc_Docflow_2fReceiptDocflow_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Docflow/ReceiptDocflow.proto");
  GOOGLE_CHECK(file != NULL);
  ReceiptDocflow_descriptor_ = file->message_type(0);
  static const int ReceiptDocflow_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReceiptDocflow, isfinished_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReceiptDocflow, receiptattachment_),
  };
  ReceiptDocflow_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ReceiptDocflow_descriptor_,
      ReceiptDocflow::default_instance_,
      ReceiptDocflow_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReceiptDocflow, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReceiptDocflow, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ReceiptDocflow));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Docflow_2fReceiptDocflow_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ReceiptDocflow_descriptor_, &ReceiptDocflow::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Docflow_2fReceiptDocflow_2eproto() {
  delete ReceiptDocflow::default_instance_;
  delete ReceiptDocflow_reflection_;
}

void protobuf_AddDesc_Docflow_2fReceiptDocflow_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::Docflow::protobuf_AddDesc_Docflow_2fAttachment_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034Docflow/ReceiptDocflow.proto\022\030Diadoc.A"
    "pi.Proto.Docflow\032\030Docflow/Attachment.pro"
    "to\"k\n\016ReceiptDocflow\022\022\n\nIsFinished\030\001 \001(\010"
    "\022E\n\021ReceiptAttachment\030\002 \001(\0132*.Diadoc.Api"
    ".Proto.Docflow.SignedAttachment", 191);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Docflow/ReceiptDocflow.proto", &protobuf_RegisterTypes);
  ReceiptDocflow::default_instance_ = new ReceiptDocflow();
  ReceiptDocflow::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Docflow_2fReceiptDocflow_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Docflow_2fReceiptDocflow_2eproto {
  StaticDescriptorInitializer_Docflow_2fReceiptDocflow_2eproto() {
    protobuf_AddDesc_Docflow_2fReceiptDocflow_2eproto();
  }
} static_descriptor_initializer_Docflow_2fReceiptDocflow_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ReceiptDocflow::kIsFinishedFieldNumber;
const int ReceiptDocflow::kReceiptAttachmentFieldNumber;
#endif  // !_MSC_VER

ReceiptDocflow::ReceiptDocflow()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ReceiptDocflow::InitAsDefaultInstance() {
  receiptattachment_ = const_cast< ::Diadoc::Api::Proto::Docflow::SignedAttachment*>(&::Diadoc::Api::Proto::Docflow::SignedAttachment::default_instance());
}

ReceiptDocflow::ReceiptDocflow(const ReceiptDocflow& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ReceiptDocflow::SharedCtor() {
  _cached_size_ = 0;
  isfinished_ = false;
  receiptattachment_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ReceiptDocflow::~ReceiptDocflow() {
  SharedDtor();
}

void ReceiptDocflow::SharedDtor() {
  if (this != default_instance_) {
    delete receiptattachment_;
  }
}

void ReceiptDocflow::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReceiptDocflow::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReceiptDocflow_descriptor_;
}

const ReceiptDocflow& ReceiptDocflow::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Docflow_2fReceiptDocflow_2eproto();  return *default_instance_;
}

ReceiptDocflow* ReceiptDocflow::default_instance_ = NULL;

ReceiptDocflow* ReceiptDocflow::New() const {
  return new ReceiptDocflow;
}

void ReceiptDocflow::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    isfinished_ = false;
    if (has_receiptattachment()) {
      if (receiptattachment_ != NULL) receiptattachment_->::Diadoc::Api::Proto::Docflow::SignedAttachment::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ReceiptDocflow::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool IsFinished = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isfinished_)));
          set_has_isfinished();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_ReceiptAttachment;
        break;
      }
      
      // optional .Diadoc.Api.Proto.Docflow.SignedAttachment ReceiptAttachment = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ReceiptAttachment:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_receiptattachment()));
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

void ReceiptDocflow::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool IsFinished = 1;
  if (has_isfinished()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->isfinished(), output);
  }
  
  // optional .Diadoc.Api.Proto.Docflow.SignedAttachment ReceiptAttachment = 2;
  if (has_receiptattachment()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->receiptattachment(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ReceiptDocflow::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bool IsFinished = 1;
  if (has_isfinished()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->isfinished(), target);
  }
  
  // optional .Diadoc.Api.Proto.Docflow.SignedAttachment ReceiptAttachment = 2;
  if (has_receiptattachment()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->receiptattachment(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ReceiptDocflow::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool IsFinished = 1;
    if (has_isfinished()) {
      total_size += 1 + 1;
    }
    
    // optional .Diadoc.Api.Proto.Docflow.SignedAttachment ReceiptAttachment = 2;
    if (has_receiptattachment()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->receiptattachment());
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

void ReceiptDocflow::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ReceiptDocflow* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ReceiptDocflow*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ReceiptDocflow::MergeFrom(const ReceiptDocflow& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_isfinished()) {
      set_isfinished(from.isfinished());
    }
    if (from.has_receiptattachment()) {
      mutable_receiptattachment()->::Diadoc::Api::Proto::Docflow::SignedAttachment::MergeFrom(from.receiptattachment());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ReceiptDocflow::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReceiptDocflow::CopyFrom(const ReceiptDocflow& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReceiptDocflow::IsInitialized() const {
  
  if (has_receiptattachment()) {
    if (!this->receiptattachment().IsInitialized()) return false;
  }
  return true;
}

void ReceiptDocflow::Swap(ReceiptDocflow* other) {
  if (other != this) {
    std::swap(isfinished_, other->isfinished_);
    std::swap(receiptattachment_, other->receiptattachment_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ReceiptDocflow::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ReceiptDocflow_descriptor_;
  metadata.reflection = ReceiptDocflow_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Docflow
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
