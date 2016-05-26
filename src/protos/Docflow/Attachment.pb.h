// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/Attachment.proto

#ifndef PROTOBUF_Docflow_2fAttachment_2eproto__INCLUDED
#define PROTOBUF_Docflow_2fAttachment_2eproto__INCLUDED

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
#include "Content.pb.h"
#include "Timestamp.pb.h"
#include "SignatureVerificationResult.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Docflow {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Docflow_2fAttachment_2eproto();
void protobuf_AssignDesc_Docflow_2fAttachment_2eproto();
void protobuf_ShutdownFile_Docflow_2fAttachment_2eproto();

class Entity;
class Attachment;
class Signature;
class SignedAttachment;

// ===================================================================

class Entity : public ::google::protobuf::Message {
 public:
  Entity();
  virtual ~Entity();
  
  Entity(const Entity& from);
  
  inline Entity& operator=(const Entity& from) {
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
  static const Entity& default_instance();
  
  void Swap(Entity* other);
  
  // implements Message ----------------------------------------------
  
  Entity* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Entity& from);
  void MergeFrom(const Entity& from);
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
  
  // optional string EntityId = 1;
  inline bool has_entityid() const;
  inline void clear_entityid();
  static const int kEntityIdFieldNumber = 1;
  inline const ::std::string& entityid() const;
  inline void set_entityid(const ::std::string& value);
  inline void set_entityid(const char* value);
  inline void set_entityid(const char* value, size_t size);
  inline ::std::string* mutable_entityid();
  inline ::std::string* release_entityid();
  
  // optional .Diadoc.Api.Proto.Timestamp CreationTimestamp = 2;
  inline bool has_creationtimestamp() const;
  inline void clear_creationtimestamp();
  static const int kCreationTimestampFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Timestamp& creationtimestamp() const;
  inline ::Diadoc::Api::Proto::Timestamp* mutable_creationtimestamp();
  inline ::Diadoc::Api::Proto::Timestamp* release_creationtimestamp();
  
  // optional .Diadoc.Api.Proto.Content Content = 3;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Content& content() const;
  inline ::Diadoc::Api::Proto::Content* mutable_content();
  inline ::Diadoc::Api::Proto::Content* release_content();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.Entity)
 private:
  inline void set_has_entityid();
  inline void clear_has_entityid();
  inline void set_has_creationtimestamp();
  inline void clear_has_creationtimestamp();
  inline void set_has_content();
  inline void clear_has_content();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* entityid_;
  ::Diadoc::Api::Proto::Timestamp* creationtimestamp_;
  ::Diadoc::Api::Proto::Content* content_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fAttachment_2eproto();
  
  void InitAsDefaultInstance();
  static Entity* default_instance_;
};
// -------------------------------------------------------------------

class Attachment : public ::google::protobuf::Message {
 public:
  Attachment();
  virtual ~Attachment();
  
  Attachment(const Attachment& from);
  
  inline Attachment& operator=(const Attachment& from) {
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
  static const Attachment& default_instance();
  
  void Swap(Attachment* other);
  
  // implements Message ----------------------------------------------
  
  Attachment* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Attachment& from);
  void MergeFrom(const Attachment& from);
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
  
  // optional .Diadoc.Api.Proto.Docflow.Entity Entity = 1;
  inline bool has_entity() const;
  inline void clear_entity();
  static const int kEntityFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::Docflow::Entity& entity() const;
  inline ::Diadoc::Api::Proto::Docflow::Entity* mutable_entity();
  inline ::Diadoc::Api::Proto::Docflow::Entity* release_entity();
  
  // optional string AttachmentFilename = 2;
  inline bool has_attachmentfilename() const;
  inline void clear_attachmentfilename();
  static const int kAttachmentFilenameFieldNumber = 2;
  inline const ::std::string& attachmentfilename() const;
  inline void set_attachmentfilename(const ::std::string& value);
  inline void set_attachmentfilename(const char* value);
  inline void set_attachmentfilename(const char* value, size_t size);
  inline ::std::string* mutable_attachmentfilename();
  inline ::std::string* release_attachmentfilename();
  
  // optional string DisplayFilename = 3;
  inline bool has_displayfilename() const;
  inline void clear_displayfilename();
  static const int kDisplayFilenameFieldNumber = 3;
  inline const ::std::string& displayfilename() const;
  inline void set_displayfilename(const ::std::string& value);
  inline void set_displayfilename(const char* value);
  inline void set_displayfilename(const char* value, size_t size);
  inline ::std::string* mutable_displayfilename();
  inline ::std::string* release_displayfilename();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.Attachment)
 private:
  inline void set_has_entity();
  inline void clear_has_entity();
  inline void set_has_attachmentfilename();
  inline void clear_has_attachmentfilename();
  inline void set_has_displayfilename();
  inline void clear_has_displayfilename();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::Diadoc::Api::Proto::Docflow::Entity* entity_;
  ::std::string* attachmentfilename_;
  ::std::string* displayfilename_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fAttachment_2eproto();
  
  void InitAsDefaultInstance();
  static Attachment* default_instance_;
};
// -------------------------------------------------------------------

class Signature : public ::google::protobuf::Message {
 public:
  Signature();
  virtual ~Signature();
  
  Signature(const Signature& from);
  
  inline Signature& operator=(const Signature& from) {
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
  static const Signature& default_instance();
  
  void Swap(Signature* other);
  
  // implements Message ----------------------------------------------
  
  Signature* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Signature& from);
  void MergeFrom(const Signature& from);
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
  
  // optional .Diadoc.Api.Proto.Docflow.Entity Entity = 1;
  inline bool has_entity() const;
  inline void clear_entity();
  static const int kEntityFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::Docflow::Entity& entity() const;
  inline ::Diadoc::Api::Proto::Docflow::Entity* mutable_entity();
  inline ::Diadoc::Api::Proto::Docflow::Entity* release_entity();
  
  // optional string SignerBoxId = 2;
  inline bool has_signerboxid() const;
  inline void clear_signerboxid();
  static const int kSignerBoxIdFieldNumber = 2;
  inline const ::std::string& signerboxid() const;
  inline void set_signerboxid(const ::std::string& value);
  inline void set_signerboxid(const char* value);
  inline void set_signerboxid(const char* value, size_t size);
  inline ::std::string* mutable_signerboxid();
  inline ::std::string* release_signerboxid();
  
  // optional string SignerDepartmentId = 3;
  inline bool has_signerdepartmentid() const;
  inline void clear_signerdepartmentid();
  static const int kSignerDepartmentIdFieldNumber = 3;
  inline const ::std::string& signerdepartmentid() const;
  inline void set_signerdepartmentid(const ::std::string& value);
  inline void set_signerdepartmentid(const char* value);
  inline void set_signerdepartmentid(const char* value, size_t size);
  inline ::std::string* mutable_signerdepartmentid();
  inline ::std::string* release_signerdepartmentid();
  
  // optional bool IsValid = 4;
  inline bool has_isvalid() const;
  inline void clear_isvalid();
  static const int kIsValidFieldNumber = 4;
  inline bool isvalid() const;
  inline void set_isvalid(bool value);
  
  // optional .Diadoc.Api.Proto.SignatureVerificationResult VerificationResult = 5;
  inline bool has_verificationresult() const;
  inline void clear_verificationresult();
  static const int kVerificationResultFieldNumber = 5;
  inline const ::Diadoc::Api::Proto::SignatureVerificationResult& verificationresult() const;
  inline ::Diadoc::Api::Proto::SignatureVerificationResult* mutable_verificationresult();
  inline ::Diadoc::Api::Proto::SignatureVerificationResult* release_verificationresult();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.Signature)
 private:
  inline void set_has_entity();
  inline void clear_has_entity();
  inline void set_has_signerboxid();
  inline void clear_has_signerboxid();
  inline void set_has_signerdepartmentid();
  inline void clear_has_signerdepartmentid();
  inline void set_has_isvalid();
  inline void clear_has_isvalid();
  inline void set_has_verificationresult();
  inline void clear_has_verificationresult();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::Diadoc::Api::Proto::Docflow::Entity* entity_;
  ::std::string* signerboxid_;
  ::std::string* signerdepartmentid_;
  ::Diadoc::Api::Proto::SignatureVerificationResult* verificationresult_;
  bool isvalid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fAttachment_2eproto();
  
  void InitAsDefaultInstance();
  static Signature* default_instance_;
};
// -------------------------------------------------------------------

class SignedAttachment : public ::google::protobuf::Message {
 public:
  SignedAttachment();
  virtual ~SignedAttachment();
  
  SignedAttachment(const SignedAttachment& from);
  
  inline SignedAttachment& operator=(const SignedAttachment& from) {
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
  static const SignedAttachment& default_instance();
  
  void Swap(SignedAttachment* other);
  
  // implements Message ----------------------------------------------
  
  SignedAttachment* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SignedAttachment& from);
  void MergeFrom(const SignedAttachment& from);
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
  
  // optional .Diadoc.Api.Proto.Docflow.Attachment Attachment = 1;
  inline bool has_attachment() const;
  inline void clear_attachment();
  static const int kAttachmentFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::Docflow::Attachment& attachment() const;
  inline ::Diadoc::Api::Proto::Docflow::Attachment* mutable_attachment();
  inline ::Diadoc::Api::Proto::Docflow::Attachment* release_attachment();
  
  // optional .Diadoc.Api.Proto.Docflow.Signature Signature = 2;
  inline bool has_signature() const;
  inline void clear_signature();
  static const int kSignatureFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Docflow::Signature& signature() const;
  inline ::Diadoc::Api::Proto::Docflow::Signature* mutable_signature();
  inline ::Diadoc::Api::Proto::Docflow::Signature* release_signature();
  
  // optional .Diadoc.Api.Proto.Docflow.Entity Comment = 3;
  inline bool has_comment() const;
  inline void clear_comment();
  static const int kCommentFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Docflow::Entity& comment() const;
  inline ::Diadoc::Api::Proto::Docflow::Entity* mutable_comment();
  inline ::Diadoc::Api::Proto::Docflow::Entity* release_comment();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.SignedAttachment)
 private:
  inline void set_has_attachment();
  inline void clear_has_attachment();
  inline void set_has_signature();
  inline void clear_has_signature();
  inline void set_has_comment();
  inline void clear_has_comment();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::Diadoc::Api::Proto::Docflow::Attachment* attachment_;
  ::Diadoc::Api::Proto::Docflow::Signature* signature_;
  ::Diadoc::Api::Proto::Docflow::Entity* comment_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fAttachment_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fAttachment_2eproto();
  
  void InitAsDefaultInstance();
  static SignedAttachment* default_instance_;
};
// ===================================================================


// ===================================================================

// Entity

// optional string EntityId = 1;
inline bool Entity::has_entityid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Entity::set_has_entityid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Entity::clear_has_entityid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Entity::clear_entityid() {
  if (entityid_ != &::google::protobuf::internal::kEmptyString) {
    entityid_->clear();
  }
  clear_has_entityid();
}
inline const ::std::string& Entity::entityid() const {
  return *entityid_;
}
inline void Entity::set_entityid(const ::std::string& value) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::kEmptyString) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(value);
}
inline void Entity::set_entityid(const char* value) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::kEmptyString) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(value);
}
inline void Entity::set_entityid(const char* value, size_t size) {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::kEmptyString) {
    entityid_ = new ::std::string;
  }
  entityid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Entity::mutable_entityid() {
  set_has_entityid();
  if (entityid_ == &::google::protobuf::internal::kEmptyString) {
    entityid_ = new ::std::string;
  }
  return entityid_;
}
inline ::std::string* Entity::release_entityid() {
  clear_has_entityid();
  if (entityid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = entityid_;
    entityid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .Diadoc.Api.Proto.Timestamp CreationTimestamp = 2;
inline bool Entity::has_creationtimestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Entity::set_has_creationtimestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Entity::clear_has_creationtimestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Entity::clear_creationtimestamp() {
  if (creationtimestamp_ != NULL) creationtimestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
  clear_has_creationtimestamp();
}
inline const ::Diadoc::Api::Proto::Timestamp& Entity::creationtimestamp() const {
  return creationtimestamp_ != NULL ? *creationtimestamp_ : *default_instance_->creationtimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* Entity::mutable_creationtimestamp() {
  set_has_creationtimestamp();
  if (creationtimestamp_ == NULL) creationtimestamp_ = new ::Diadoc::Api::Proto::Timestamp;
  return creationtimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* Entity::release_creationtimestamp() {
  clear_has_creationtimestamp();
  ::Diadoc::Api::Proto::Timestamp* temp = creationtimestamp_;
  creationtimestamp_ = NULL;
  return temp;
}

// optional .Diadoc.Api.Proto.Content Content = 3;
inline bool Entity::has_content() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Entity::set_has_content() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Entity::clear_has_content() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Entity::clear_content() {
  if (content_ != NULL) content_->::Diadoc::Api::Proto::Content::Clear();
  clear_has_content();
}
inline const ::Diadoc::Api::Proto::Content& Entity::content() const {
  return content_ != NULL ? *content_ : *default_instance_->content_;
}
inline ::Diadoc::Api::Proto::Content* Entity::mutable_content() {
  set_has_content();
  if (content_ == NULL) content_ = new ::Diadoc::Api::Proto::Content;
  return content_;
}
inline ::Diadoc::Api::Proto::Content* Entity::release_content() {
  clear_has_content();
  ::Diadoc::Api::Proto::Content* temp = content_;
  content_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// Attachment

// optional .Diadoc.Api.Proto.Docflow.Entity Entity = 1;
inline bool Attachment::has_entity() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Attachment::set_has_entity() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Attachment::clear_has_entity() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Attachment::clear_entity() {
  if (entity_ != NULL) entity_->::Diadoc::Api::Proto::Docflow::Entity::Clear();
  clear_has_entity();
}
inline const ::Diadoc::Api::Proto::Docflow::Entity& Attachment::entity() const {
  return entity_ != NULL ? *entity_ : *default_instance_->entity_;
}
inline ::Diadoc::Api::Proto::Docflow::Entity* Attachment::mutable_entity() {
  set_has_entity();
  if (entity_ == NULL) entity_ = new ::Diadoc::Api::Proto::Docflow::Entity;
  return entity_;
}
inline ::Diadoc::Api::Proto::Docflow::Entity* Attachment::release_entity() {
  clear_has_entity();
  ::Diadoc::Api::Proto::Docflow::Entity* temp = entity_;
  entity_ = NULL;
  return temp;
}

// optional string AttachmentFilename = 2;
inline bool Attachment::has_attachmentfilename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Attachment::set_has_attachmentfilename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Attachment::clear_has_attachmentfilename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Attachment::clear_attachmentfilename() {
  if (attachmentfilename_ != &::google::protobuf::internal::kEmptyString) {
    attachmentfilename_->clear();
  }
  clear_has_attachmentfilename();
}
inline const ::std::string& Attachment::attachmentfilename() const {
  return *attachmentfilename_;
}
inline void Attachment::set_attachmentfilename(const ::std::string& value) {
  set_has_attachmentfilename();
  if (attachmentfilename_ == &::google::protobuf::internal::kEmptyString) {
    attachmentfilename_ = new ::std::string;
  }
  attachmentfilename_->assign(value);
}
inline void Attachment::set_attachmentfilename(const char* value) {
  set_has_attachmentfilename();
  if (attachmentfilename_ == &::google::protobuf::internal::kEmptyString) {
    attachmentfilename_ = new ::std::string;
  }
  attachmentfilename_->assign(value);
}
inline void Attachment::set_attachmentfilename(const char* value, size_t size) {
  set_has_attachmentfilename();
  if (attachmentfilename_ == &::google::protobuf::internal::kEmptyString) {
    attachmentfilename_ = new ::std::string;
  }
  attachmentfilename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Attachment::mutable_attachmentfilename() {
  set_has_attachmentfilename();
  if (attachmentfilename_ == &::google::protobuf::internal::kEmptyString) {
    attachmentfilename_ = new ::std::string;
  }
  return attachmentfilename_;
}
inline ::std::string* Attachment::release_attachmentfilename() {
  clear_has_attachmentfilename();
  if (attachmentfilename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = attachmentfilename_;
    attachmentfilename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string DisplayFilename = 3;
inline bool Attachment::has_displayfilename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Attachment::set_has_displayfilename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Attachment::clear_has_displayfilename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Attachment::clear_displayfilename() {
  if (displayfilename_ != &::google::protobuf::internal::kEmptyString) {
    displayfilename_->clear();
  }
  clear_has_displayfilename();
}
inline const ::std::string& Attachment::displayfilename() const {
  return *displayfilename_;
}
inline void Attachment::set_displayfilename(const ::std::string& value) {
  set_has_displayfilename();
  if (displayfilename_ == &::google::protobuf::internal::kEmptyString) {
    displayfilename_ = new ::std::string;
  }
  displayfilename_->assign(value);
}
inline void Attachment::set_displayfilename(const char* value) {
  set_has_displayfilename();
  if (displayfilename_ == &::google::protobuf::internal::kEmptyString) {
    displayfilename_ = new ::std::string;
  }
  displayfilename_->assign(value);
}
inline void Attachment::set_displayfilename(const char* value, size_t size) {
  set_has_displayfilename();
  if (displayfilename_ == &::google::protobuf::internal::kEmptyString) {
    displayfilename_ = new ::std::string;
  }
  displayfilename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Attachment::mutable_displayfilename() {
  set_has_displayfilename();
  if (displayfilename_ == &::google::protobuf::internal::kEmptyString) {
    displayfilename_ = new ::std::string;
  }
  return displayfilename_;
}
inline ::std::string* Attachment::release_displayfilename() {
  clear_has_displayfilename();
  if (displayfilename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = displayfilename_;
    displayfilename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Signature

// optional .Diadoc.Api.Proto.Docflow.Entity Entity = 1;
inline bool Signature::has_entity() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Signature::set_has_entity() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Signature::clear_has_entity() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Signature::clear_entity() {
  if (entity_ != NULL) entity_->::Diadoc::Api::Proto::Docflow::Entity::Clear();
  clear_has_entity();
}
inline const ::Diadoc::Api::Proto::Docflow::Entity& Signature::entity() const {
  return entity_ != NULL ? *entity_ : *default_instance_->entity_;
}
inline ::Diadoc::Api::Proto::Docflow::Entity* Signature::mutable_entity() {
  set_has_entity();
  if (entity_ == NULL) entity_ = new ::Diadoc::Api::Proto::Docflow::Entity;
  return entity_;
}
inline ::Diadoc::Api::Proto::Docflow::Entity* Signature::release_entity() {
  clear_has_entity();
  ::Diadoc::Api::Proto::Docflow::Entity* temp = entity_;
  entity_ = NULL;
  return temp;
}

// optional string SignerBoxId = 2;
inline bool Signature::has_signerboxid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Signature::set_has_signerboxid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Signature::clear_has_signerboxid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Signature::clear_signerboxid() {
  if (signerboxid_ != &::google::protobuf::internal::kEmptyString) {
    signerboxid_->clear();
  }
  clear_has_signerboxid();
}
inline const ::std::string& Signature::signerboxid() const {
  return *signerboxid_;
}
inline void Signature::set_signerboxid(const ::std::string& value) {
  set_has_signerboxid();
  if (signerboxid_ == &::google::protobuf::internal::kEmptyString) {
    signerboxid_ = new ::std::string;
  }
  signerboxid_->assign(value);
}
inline void Signature::set_signerboxid(const char* value) {
  set_has_signerboxid();
  if (signerboxid_ == &::google::protobuf::internal::kEmptyString) {
    signerboxid_ = new ::std::string;
  }
  signerboxid_->assign(value);
}
inline void Signature::set_signerboxid(const char* value, size_t size) {
  set_has_signerboxid();
  if (signerboxid_ == &::google::protobuf::internal::kEmptyString) {
    signerboxid_ = new ::std::string;
  }
  signerboxid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Signature::mutable_signerboxid() {
  set_has_signerboxid();
  if (signerboxid_ == &::google::protobuf::internal::kEmptyString) {
    signerboxid_ = new ::std::string;
  }
  return signerboxid_;
}
inline ::std::string* Signature::release_signerboxid() {
  clear_has_signerboxid();
  if (signerboxid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = signerboxid_;
    signerboxid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string SignerDepartmentId = 3;
inline bool Signature::has_signerdepartmentid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Signature::set_has_signerdepartmentid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Signature::clear_has_signerdepartmentid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Signature::clear_signerdepartmentid() {
  if (signerdepartmentid_ != &::google::protobuf::internal::kEmptyString) {
    signerdepartmentid_->clear();
  }
  clear_has_signerdepartmentid();
}
inline const ::std::string& Signature::signerdepartmentid() const {
  return *signerdepartmentid_;
}
inline void Signature::set_signerdepartmentid(const ::std::string& value) {
  set_has_signerdepartmentid();
  if (signerdepartmentid_ == &::google::protobuf::internal::kEmptyString) {
    signerdepartmentid_ = new ::std::string;
  }
  signerdepartmentid_->assign(value);
}
inline void Signature::set_signerdepartmentid(const char* value) {
  set_has_signerdepartmentid();
  if (signerdepartmentid_ == &::google::protobuf::internal::kEmptyString) {
    signerdepartmentid_ = new ::std::string;
  }
  signerdepartmentid_->assign(value);
}
inline void Signature::set_signerdepartmentid(const char* value, size_t size) {
  set_has_signerdepartmentid();
  if (signerdepartmentid_ == &::google::protobuf::internal::kEmptyString) {
    signerdepartmentid_ = new ::std::string;
  }
  signerdepartmentid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Signature::mutable_signerdepartmentid() {
  set_has_signerdepartmentid();
  if (signerdepartmentid_ == &::google::protobuf::internal::kEmptyString) {
    signerdepartmentid_ = new ::std::string;
  }
  return signerdepartmentid_;
}
inline ::std::string* Signature::release_signerdepartmentid() {
  clear_has_signerdepartmentid();
  if (signerdepartmentid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = signerdepartmentid_;
    signerdepartmentid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bool IsValid = 4;
inline bool Signature::has_isvalid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Signature::set_has_isvalid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Signature::clear_has_isvalid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Signature::clear_isvalid() {
  isvalid_ = false;
  clear_has_isvalid();
}
inline bool Signature::isvalid() const {
  return isvalid_;
}
inline void Signature::set_isvalid(bool value) {
  set_has_isvalid();
  isvalid_ = value;
}

// optional .Diadoc.Api.Proto.SignatureVerificationResult VerificationResult = 5;
inline bool Signature::has_verificationresult() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Signature::set_has_verificationresult() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Signature::clear_has_verificationresult() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Signature::clear_verificationresult() {
  if (verificationresult_ != NULL) verificationresult_->::Diadoc::Api::Proto::SignatureVerificationResult::Clear();
  clear_has_verificationresult();
}
inline const ::Diadoc::Api::Proto::SignatureVerificationResult& Signature::verificationresult() const {
  return verificationresult_ != NULL ? *verificationresult_ : *default_instance_->verificationresult_;
}
inline ::Diadoc::Api::Proto::SignatureVerificationResult* Signature::mutable_verificationresult() {
  set_has_verificationresult();
  if (verificationresult_ == NULL) verificationresult_ = new ::Diadoc::Api::Proto::SignatureVerificationResult;
  return verificationresult_;
}
inline ::Diadoc::Api::Proto::SignatureVerificationResult* Signature::release_verificationresult() {
  clear_has_verificationresult();
  ::Diadoc::Api::Proto::SignatureVerificationResult* temp = verificationresult_;
  verificationresult_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// SignedAttachment

// optional .Diadoc.Api.Proto.Docflow.Attachment Attachment = 1;
inline bool SignedAttachment::has_attachment() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignedAttachment::set_has_attachment() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignedAttachment::clear_has_attachment() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignedAttachment::clear_attachment() {
  if (attachment_ != NULL) attachment_->::Diadoc::Api::Proto::Docflow::Attachment::Clear();
  clear_has_attachment();
}
inline const ::Diadoc::Api::Proto::Docflow::Attachment& SignedAttachment::attachment() const {
  return attachment_ != NULL ? *attachment_ : *default_instance_->attachment_;
}
inline ::Diadoc::Api::Proto::Docflow::Attachment* SignedAttachment::mutable_attachment() {
  set_has_attachment();
  if (attachment_ == NULL) attachment_ = new ::Diadoc::Api::Proto::Docflow::Attachment;
  return attachment_;
}
inline ::Diadoc::Api::Proto::Docflow::Attachment* SignedAttachment::release_attachment() {
  clear_has_attachment();
  ::Diadoc::Api::Proto::Docflow::Attachment* temp = attachment_;
  attachment_ = NULL;
  return temp;
}

// optional .Diadoc.Api.Proto.Docflow.Signature Signature = 2;
inline bool SignedAttachment::has_signature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SignedAttachment::set_has_signature() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SignedAttachment::clear_has_signature() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SignedAttachment::clear_signature() {
  if (signature_ != NULL) signature_->::Diadoc::Api::Proto::Docflow::Signature::Clear();
  clear_has_signature();
}
inline const ::Diadoc::Api::Proto::Docflow::Signature& SignedAttachment::signature() const {
  return signature_ != NULL ? *signature_ : *default_instance_->signature_;
}
inline ::Diadoc::Api::Proto::Docflow::Signature* SignedAttachment::mutable_signature() {
  set_has_signature();
  if (signature_ == NULL) signature_ = new ::Diadoc::Api::Proto::Docflow::Signature;
  return signature_;
}
inline ::Diadoc::Api::Proto::Docflow::Signature* SignedAttachment::release_signature() {
  clear_has_signature();
  ::Diadoc::Api::Proto::Docflow::Signature* temp = signature_;
  signature_ = NULL;
  return temp;
}

// optional .Diadoc.Api.Proto.Docflow.Entity Comment = 3;
inline bool SignedAttachment::has_comment() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SignedAttachment::set_has_comment() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SignedAttachment::clear_has_comment() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SignedAttachment::clear_comment() {
  if (comment_ != NULL) comment_->::Diadoc::Api::Proto::Docflow::Entity::Clear();
  clear_has_comment();
}
inline const ::Diadoc::Api::Proto::Docflow::Entity& SignedAttachment::comment() const {
  return comment_ != NULL ? *comment_ : *default_instance_->comment_;
}
inline ::Diadoc::Api::Proto::Docflow::Entity* SignedAttachment::mutable_comment() {
  set_has_comment();
  if (comment_ == NULL) comment_ = new ::Diadoc::Api::Proto::Docflow::Entity;
  return comment_;
}
inline ::Diadoc::Api::Proto::Docflow::Entity* SignedAttachment::release_comment() {
  clear_has_comment();
  ::Diadoc::Api::Proto::Docflow::Entity* temp = comment_;
  comment_ = NULL;
  return temp;
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

#endif  // PROTOBUF_Docflow_2fAttachment_2eproto__INCLUDED
