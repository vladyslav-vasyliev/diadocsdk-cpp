// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ResolutionChainList.proto

#ifndef PROTOBUF_ResolutionChainList_2eproto__INCLUDED
#define PROTOBUF_ResolutionChainList_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ResolutionChainList_2eproto();
void protobuf_AssignDesc_ResolutionChainList_2eproto();
void protobuf_ShutdownFile_ResolutionChainList_2eproto();

class ResolutionChainList;
class ResolutionChain;

// ===================================================================

class ResolutionChainList : public ::google::protobuf::Message {
 public:
  ResolutionChainList();
  virtual ~ResolutionChainList();
  
  ResolutionChainList(const ResolutionChainList& from);
  
  inline ResolutionChainList& operator=(const ResolutionChainList& from) {
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
  static const ResolutionChainList& default_instance();
  
  void Swap(ResolutionChainList* other);
  
  // implements Message ----------------------------------------------
  
  ResolutionChainList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResolutionChainList& from);
  void MergeFrom(const ResolutionChainList& from);
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
  
  // repeated .Diadoc.Api.Proto.ResolutionChain ResolutionChains = 1;
  inline int resolutionchains_size() const;
  inline void clear_resolutionchains();
  static const int kResolutionChainsFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::ResolutionChain& resolutionchains(int index) const;
  inline ::Diadoc::Api::Proto::ResolutionChain* mutable_resolutionchains(int index);
  inline ::Diadoc::Api::Proto::ResolutionChain* add_resolutionchains();
  inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::ResolutionChain >&
      resolutionchains() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::ResolutionChain >*
      mutable_resolutionchains();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.ResolutionChainList)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::ResolutionChain > resolutionchains_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_ResolutionChainList_2eproto();
  friend void protobuf_AssignDesc_ResolutionChainList_2eproto();
  friend void protobuf_ShutdownFile_ResolutionChainList_2eproto();
  
  void InitAsDefaultInstance();
  static ResolutionChainList* default_instance_;
};
// -------------------------------------------------------------------

class ResolutionChain : public ::google::protobuf::Message {
 public:
  ResolutionChain();
  virtual ~ResolutionChain();
  
  ResolutionChain(const ResolutionChain& from);
  
  inline ResolutionChain& operator=(const ResolutionChain& from) {
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
  static const ResolutionChain& default_instance();
  
  void Swap(ResolutionChain* other);
  
  // implements Message ----------------------------------------------
  
  ResolutionChain* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResolutionChain& from);
  void MergeFrom(const ResolutionChain& from);
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
  
  // required string ChainId = 1;
  inline bool has_chainid() const;
  inline void clear_chainid();
  static const int kChainIdFieldNumber = 1;
  inline const ::std::string& chainid() const;
  inline void set_chainid(const ::std::string& value);
  inline void set_chainid(const char* value);
  inline void set_chainid(const char* value, size_t size);
  inline ::std::string* mutable_chainid();
  inline ::std::string* release_chainid();
  
  // required string Name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.ResolutionChain)
 private:
  inline void set_has_chainid();
  inline void clear_has_chainid();
  inline void set_has_name();
  inline void clear_has_name();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* chainid_;
  ::std::string* name_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_ResolutionChainList_2eproto();
  friend void protobuf_AssignDesc_ResolutionChainList_2eproto();
  friend void protobuf_ShutdownFile_ResolutionChainList_2eproto();
  
  void InitAsDefaultInstance();
  static ResolutionChain* default_instance_;
};
// ===================================================================


// ===================================================================

// ResolutionChainList

// repeated .Diadoc.Api.Proto.ResolutionChain ResolutionChains = 1;
inline int ResolutionChainList::resolutionchains_size() const {
  return resolutionchains_.size();
}
inline void ResolutionChainList::clear_resolutionchains() {
  resolutionchains_.Clear();
}
inline const ::Diadoc::Api::Proto::ResolutionChain& ResolutionChainList::resolutionchains(int index) const {
  return resolutionchains_.Get(index);
}
inline ::Diadoc::Api::Proto::ResolutionChain* ResolutionChainList::mutable_resolutionchains(int index) {
  return resolutionchains_.Mutable(index);
}
inline ::Diadoc::Api::Proto::ResolutionChain* ResolutionChainList::add_resolutionchains() {
  return resolutionchains_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::ResolutionChain >&
ResolutionChainList::resolutionchains() const {
  return resolutionchains_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::ResolutionChain >*
ResolutionChainList::mutable_resolutionchains() {
  return &resolutionchains_;
}

// -------------------------------------------------------------------

// ResolutionChain

// required string ChainId = 1;
inline bool ResolutionChain::has_chainid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResolutionChain::set_has_chainid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResolutionChain::clear_has_chainid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResolutionChain::clear_chainid() {
  if (chainid_ != &::google::protobuf::internal::kEmptyString) {
    chainid_->clear();
  }
  clear_has_chainid();
}
inline const ::std::string& ResolutionChain::chainid() const {
  return *chainid_;
}
inline void ResolutionChain::set_chainid(const ::std::string& value) {
  set_has_chainid();
  if (chainid_ == &::google::protobuf::internal::kEmptyString) {
    chainid_ = new ::std::string;
  }
  chainid_->assign(value);
}
inline void ResolutionChain::set_chainid(const char* value) {
  set_has_chainid();
  if (chainid_ == &::google::protobuf::internal::kEmptyString) {
    chainid_ = new ::std::string;
  }
  chainid_->assign(value);
}
inline void ResolutionChain::set_chainid(const char* value, size_t size) {
  set_has_chainid();
  if (chainid_ == &::google::protobuf::internal::kEmptyString) {
    chainid_ = new ::std::string;
  }
  chainid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ResolutionChain::mutable_chainid() {
  set_has_chainid();
  if (chainid_ == &::google::protobuf::internal::kEmptyString) {
    chainid_ = new ::std::string;
  }
  return chainid_;
}
inline ::std::string* ResolutionChain::release_chainid() {
  clear_has_chainid();
  if (chainid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = chainid_;
    chainid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string Name = 2;
inline bool ResolutionChain::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ResolutionChain::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ResolutionChain::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ResolutionChain::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& ResolutionChain::name() const {
  return *name_;
}
inline void ResolutionChain::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ResolutionChain::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ResolutionChain::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ResolutionChain::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* ResolutionChain::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

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

#endif  // PROTOBUF_ResolutionChainList_2eproto__INCLUDED
