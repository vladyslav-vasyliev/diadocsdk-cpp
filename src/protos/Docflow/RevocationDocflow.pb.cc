// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/RevocationDocflow.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Docflow/RevocationDocflow.pb.h"

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
namespace Docflow {

namespace {

const ::google::protobuf::Descriptor* RevocationDocflow_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RevocationDocflow_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Docflow_2fRevocationDocflow_2eproto() {
  protobuf_AddDesc_Docflow_2fRevocationDocflow_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Docflow/RevocationDocflow.proto");
  GOOGLE_CHECK(file != NULL);
  RevocationDocflow_descriptor_ = file->message_type(0);
  static const int RevocationDocflow_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, isfinished_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, revocationrequestattachment_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, recipientsignaturedocflow_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, recipientsignaturerejectiondocflow_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, initiatorboxid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, isrevocationaccepted_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, isrevocationrejected_),
  };
  RevocationDocflow_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RevocationDocflow_descriptor_,
      RevocationDocflow::default_instance_,
      RevocationDocflow_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RevocationDocflow, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RevocationDocflow));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Docflow_2fRevocationDocflow_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RevocationDocflow_descriptor_, &RevocationDocflow::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Docflow_2fRevocationDocflow_2eproto() {
  delete RevocationDocflow::default_instance_;
  delete RevocationDocflow_reflection_;
}

void protobuf_AddDesc_Docflow_2fRevocationDocflow_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::Docflow::protobuf_AddDesc_Docflow_2fAttachment_2eproto();
  ::Diadoc::Api::Proto::Docflow::protobuf_AddDesc_Docflow_2fRecipientSignatureDocflow_2eproto();
  ::Diadoc::Api::Proto::Docflow::protobuf_AddDesc_Docflow_2fRecipientSignatureRejectionDocflow_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037Docflow/RevocationDocflow.proto\022\030Diado"
    "c.Api.Proto.Docflow\032\030Docflow/Attachment."
    "proto\032\'Docflow/RecipientSignatureDocflow"
    ".proto\0320Docflow/RecipientSignatureReject"
    "ionDocflow.proto\"\216\003\n\021RevocationDocflow\022\022"
    "\n\nIsFinished\030\001 \001(\010\022O\n\033RevocationRequestA"
    "ttachment\030\002 \001(\0132*.Diadoc.Api.Proto.Docfl"
    "ow.SignedAttachment\022V\n\031RecipientSignatur"
    "eDocflow\030\003 \001(\01323.Diadoc.Api.Proto.Docflo"
    "w.RecipientSignatureDocflow\022h\n\"Recipient"
    "SignatureRejectionDocflow\030\004 \001(\0132<.Diadoc"
    ".Api.Proto.Docflow.RecipientSignatureRej"
    "ectionDocflow\022\026\n\016InitiatorBoxId\030\005 \001(\t\022\034\n"
    "\024IsRevocationAccepted\030\006 \001(\010\022\034\n\024IsRevocat"
    "ionRejected\030\007 \001(\010", 577);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Docflow/RevocationDocflow.proto", &protobuf_RegisterTypes);
  RevocationDocflow::default_instance_ = new RevocationDocflow();
  RevocationDocflow::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Docflow_2fRevocationDocflow_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Docflow_2fRevocationDocflow_2eproto {
  StaticDescriptorInitializer_Docflow_2fRevocationDocflow_2eproto() {
    protobuf_AddDesc_Docflow_2fRevocationDocflow_2eproto();
  }
} static_descriptor_initializer_Docflow_2fRevocationDocflow_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RevocationDocflow::kIsFinishedFieldNumber;
const int RevocationDocflow::kRevocationRequestAttachmentFieldNumber;
const int RevocationDocflow::kRecipientSignatureDocflowFieldNumber;
const int RevocationDocflow::kRecipientSignatureRejectionDocflowFieldNumber;
const int RevocationDocflow::kInitiatorBoxIdFieldNumber;
const int RevocationDocflow::kIsRevocationAcceptedFieldNumber;
const int RevocationDocflow::kIsRevocationRejectedFieldNumber;
#endif  // !_MSC_VER

RevocationDocflow::RevocationDocflow()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Docflow.RevocationDocflow)
}

void RevocationDocflow::InitAsDefaultInstance() {
  revocationrequestattachment_ = const_cast< ::Diadoc::Api::Proto::Docflow::SignedAttachment*>(&::Diadoc::Api::Proto::Docflow::SignedAttachment::default_instance());
  recipientsignaturedocflow_ = const_cast< ::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow*>(&::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow::default_instance());
  recipientsignaturerejectiondocflow_ = const_cast< ::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow*>(&::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow::default_instance());
}

RevocationDocflow::RevocationDocflow(const RevocationDocflow& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Docflow.RevocationDocflow)
}

void RevocationDocflow::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  isfinished_ = false;
  revocationrequestattachment_ = NULL;
  recipientsignaturedocflow_ = NULL;
  recipientsignaturerejectiondocflow_ = NULL;
  initiatorboxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  isrevocationaccepted_ = false;
  isrevocationrejected_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RevocationDocflow::~RevocationDocflow() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Docflow.RevocationDocflow)
  SharedDtor();
}

void RevocationDocflow::SharedDtor() {
  if (initiatorboxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete initiatorboxid_;
  }
  if (this != default_instance_) {
    delete revocationrequestattachment_;
    delete recipientsignaturedocflow_;
    delete recipientsignaturerejectiondocflow_;
  }
}

void RevocationDocflow::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RevocationDocflow::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RevocationDocflow_descriptor_;
}

const RevocationDocflow& RevocationDocflow::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Docflow_2fRevocationDocflow_2eproto();
  return *default_instance_;
}

RevocationDocflow* RevocationDocflow::default_instance_ = NULL;

RevocationDocflow* RevocationDocflow::New() const {
  return new RevocationDocflow;
}

void RevocationDocflow::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<RevocationDocflow*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(isfinished_, isrevocationrejected_);
    if (has_revocationrequestattachment()) {
      if (revocationrequestattachment_ != NULL) revocationrequestattachment_->::Diadoc::Api::Proto::Docflow::SignedAttachment::Clear();
    }
    if (has_recipientsignaturedocflow()) {
      if (recipientsignaturedocflow_ != NULL) recipientsignaturedocflow_->::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow::Clear();
    }
    if (has_recipientsignaturerejectiondocflow()) {
      if (recipientsignaturerejectiondocflow_ != NULL) recipientsignaturerejectiondocflow_->::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow::Clear();
    }
    if (has_initiatorboxid()) {
      if (initiatorboxid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        initiatorboxid_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RevocationDocflow::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Docflow.RevocationDocflow)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool IsFinished = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isfinished_)));
          set_has_isfinished();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_RevocationRequestAttachment;
        break;
      }

      // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RevocationRequestAttachment = 2;
      case 2: {
        if (tag == 18) {
         parse_RevocationRequestAttachment:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_revocationrequestattachment()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_RecipientSignatureDocflow;
        break;
      }

      // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow RecipientSignatureDocflow = 3;
      case 3: {
        if (tag == 26) {
         parse_RecipientSignatureDocflow:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_recipientsignaturedocflow()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_RecipientSignatureRejectionDocflow;
        break;
      }

      // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow RecipientSignatureRejectionDocflow = 4;
      case 4: {
        if (tag == 34) {
         parse_RecipientSignatureRejectionDocflow:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_recipientsignaturerejectiondocflow()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_InitiatorBoxId;
        break;
      }

      // optional string InitiatorBoxId = 5;
      case 5: {
        if (tag == 42) {
         parse_InitiatorBoxId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_initiatorboxid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->initiatorboxid().data(), this->initiatorboxid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "initiatorboxid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_IsRevocationAccepted;
        break;
      }

      // optional bool IsRevocationAccepted = 6;
      case 6: {
        if (tag == 48) {
         parse_IsRevocationAccepted:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isrevocationaccepted_)));
          set_has_isrevocationaccepted();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_IsRevocationRejected;
        break;
      }

      // optional bool IsRevocationRejected = 7;
      case 7: {
        if (tag == 56) {
         parse_IsRevocationRejected:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isrevocationrejected_)));
          set_has_isrevocationrejected();
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Docflow.RevocationDocflow)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Docflow.RevocationDocflow)
  return false;
#undef DO_
}

void RevocationDocflow::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Docflow.RevocationDocflow)
  // optional bool IsFinished = 1;
  if (has_isfinished()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->isfinished(), output);
  }

  // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RevocationRequestAttachment = 2;
  if (has_revocationrequestattachment()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->revocationrequestattachment(), output);
  }

  // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow RecipientSignatureDocflow = 3;
  if (has_recipientsignaturedocflow()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->recipientsignaturedocflow(), output);
  }

  // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow RecipientSignatureRejectionDocflow = 4;
  if (has_recipientsignaturerejectiondocflow()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->recipientsignaturerejectiondocflow(), output);
  }

  // optional string InitiatorBoxId = 5;
  if (has_initiatorboxid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->initiatorboxid().data(), this->initiatorboxid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "initiatorboxid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->initiatorboxid(), output);
  }

  // optional bool IsRevocationAccepted = 6;
  if (has_isrevocationaccepted()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->isrevocationaccepted(), output);
  }

  // optional bool IsRevocationRejected = 7;
  if (has_isrevocationrejected()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->isrevocationrejected(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Docflow.RevocationDocflow)
}

::google::protobuf::uint8* RevocationDocflow::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Docflow.RevocationDocflow)
  // optional bool IsFinished = 1;
  if (has_isfinished()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->isfinished(), target);
  }

  // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RevocationRequestAttachment = 2;
  if (has_revocationrequestattachment()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->revocationrequestattachment(), target);
  }

  // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow RecipientSignatureDocflow = 3;
  if (has_recipientsignaturedocflow()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->recipientsignaturedocflow(), target);
  }

  // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow RecipientSignatureRejectionDocflow = 4;
  if (has_recipientsignaturerejectiondocflow()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->recipientsignaturerejectiondocflow(), target);
  }

  // optional string InitiatorBoxId = 5;
  if (has_initiatorboxid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->initiatorboxid().data(), this->initiatorboxid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "initiatorboxid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->initiatorboxid(), target);
  }

  // optional bool IsRevocationAccepted = 6;
  if (has_isrevocationaccepted()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->isrevocationaccepted(), target);
  }

  // optional bool IsRevocationRejected = 7;
  if (has_isrevocationrejected()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->isrevocationrejected(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Docflow.RevocationDocflow)
  return target;
}

int RevocationDocflow::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool IsFinished = 1;
    if (has_isfinished()) {
      total_size += 1 + 1;
    }

    // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RevocationRequestAttachment = 2;
    if (has_revocationrequestattachment()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->revocationrequestattachment());
    }

    // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow RecipientSignatureDocflow = 3;
    if (has_recipientsignaturedocflow()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->recipientsignaturedocflow());
    }

    // optional .Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow RecipientSignatureRejectionDocflow = 4;
    if (has_recipientsignaturerejectiondocflow()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->recipientsignaturerejectiondocflow());
    }

    // optional string InitiatorBoxId = 5;
    if (has_initiatorboxid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->initiatorboxid());
    }

    // optional bool IsRevocationAccepted = 6;
    if (has_isrevocationaccepted()) {
      total_size += 1 + 1;
    }

    // optional bool IsRevocationRejected = 7;
    if (has_isrevocationrejected()) {
      total_size += 1 + 1;
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

void RevocationDocflow::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RevocationDocflow* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RevocationDocflow*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RevocationDocflow::MergeFrom(const RevocationDocflow& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_isfinished()) {
      set_isfinished(from.isfinished());
    }
    if (from.has_revocationrequestattachment()) {
      mutable_revocationrequestattachment()->::Diadoc::Api::Proto::Docflow::SignedAttachment::MergeFrom(from.revocationrequestattachment());
    }
    if (from.has_recipientsignaturedocflow()) {
      mutable_recipientsignaturedocflow()->::Diadoc::Api::Proto::Docflow::RecipientSignatureDocflow::MergeFrom(from.recipientsignaturedocflow());
    }
    if (from.has_recipientsignaturerejectiondocflow()) {
      mutable_recipientsignaturerejectiondocflow()->::Diadoc::Api::Proto::Docflow::RecipientSignatureRejectionDocflow::MergeFrom(from.recipientsignaturerejectiondocflow());
    }
    if (from.has_initiatorboxid()) {
      set_initiatorboxid(from.initiatorboxid());
    }
    if (from.has_isrevocationaccepted()) {
      set_isrevocationaccepted(from.isrevocationaccepted());
    }
    if (from.has_isrevocationrejected()) {
      set_isrevocationrejected(from.isrevocationrejected());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RevocationDocflow::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RevocationDocflow::CopyFrom(const RevocationDocflow& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RevocationDocflow::IsInitialized() const {

  if (has_revocationrequestattachment()) {
    if (!this->revocationrequestattachment().IsInitialized()) return false;
  }
  if (has_recipientsignaturedocflow()) {
    if (!this->recipientsignaturedocflow().IsInitialized()) return false;
  }
  if (has_recipientsignaturerejectiondocflow()) {
    if (!this->recipientsignaturerejectiondocflow().IsInitialized()) return false;
  }
  return true;
}

void RevocationDocflow::Swap(RevocationDocflow* other) {
  if (other != this) {
    std::swap(isfinished_, other->isfinished_);
    std::swap(revocationrequestattachment_, other->revocationrequestattachment_);
    std::swap(recipientsignaturedocflow_, other->recipientsignaturedocflow_);
    std::swap(recipientsignaturerejectiondocflow_, other->recipientsignaturerejectiondocflow_);
    std::swap(initiatorboxid_, other->initiatorboxid_);
    std::swap(isrevocationaccepted_, other->isrevocationaccepted_);
    std::swap(isrevocationrejected_, other->isrevocationrejected_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RevocationDocflow::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RevocationDocflow_descriptor_;
  metadata.reflection = RevocationDocflow_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Docflow
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
