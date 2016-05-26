// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DocumentType.proto

#ifndef PROTOBUF_DocumentType_2eproto__INCLUDED
#define PROTOBUF_DocumentType_2eproto__INCLUDED

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
void  protobuf_AddDesc_DocumentType_2eproto();
void protobuf_AssignDesc_DocumentType_2eproto();
void protobuf_ShutdownFile_DocumentType_2eproto();


enum DocumentType {
  UnknownDocumentType = -1,
  Nonformalized = 0,
  Invoice = 1,
  TrustConnectionRequest = 11,
  Torg12 = 12,
  InvoiceRevision = 13,
  InvoiceCorrection = 14,
  InvoiceCorrectionRevision = 15,
  AcceptanceCertificate = 16,
  ProformaInvoice = 18,
  XmlTorg12 = 19,
  XmlAcceptanceCertificate = 20,
  PriceList = 26,
  PriceListAgreement = 30,
  CertificateRegistry = 34,
  ReconciliationAct = 35,
  Contract = 36,
  Torg13 = 37,
  ServiceDetails = 38,
  SupplementaryAgreement = 40
};
bool DocumentType_IsValid(int value);
const DocumentType DocumentType_MIN = UnknownDocumentType;
const DocumentType DocumentType_MAX = SupplementaryAgreement;
const int DocumentType_ARRAYSIZE = DocumentType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DocumentType_descriptor();
inline const ::std::string& DocumentType_Name(DocumentType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DocumentType_descriptor(), value);
}
inline bool DocumentType_Parse(
    const ::std::string& name, DocumentType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DocumentType>(
    DocumentType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< Diadoc::Api::Proto::DocumentType>() {
  return Diadoc::Api::Proto::DocumentType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DocumentType_2eproto__INCLUDED
