// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Color.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Color.pb.h"

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

namespace AccountSearchPb {

namespace {

const ::google::protobuf::Descriptor* Color_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Color_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Color_2eproto() {
  protobuf_AddDesc_Color_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Color.proto");
  GOOGLE_CHECK(file != NULL);
  Color_descriptor_ = file->message_type(0);
  static const int Color_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Color, uint32_r_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Color, uint32_g_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Color, uint32_b_),
  };
  Color_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Color_descriptor_,
      Color::default_instance_,
      Color_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Color, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Color, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Color));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Color_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Color_descriptor_, &Color::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Color_2eproto() {
  delete Color::default_instance_;
  delete Color_reflection_;
}

void protobuf_AddDesc_Color_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Color.proto\022\017AccountSearchPb\"F\n\005Color\022"
    "\023\n\010uint32_r\030\001 \001(\r:\0010\022\023\n\010uint32_g\030\002 \001(\r:\001"
    "0\022\023\n\010uint32_b\030\003 \001(\r:\0010", 102);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Color.proto", &protobuf_RegisterTypes);
  Color::default_instance_ = new Color();
  Color::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Color_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Color_2eproto {
  StaticDescriptorInitializer_Color_2eproto() {
    protobuf_AddDesc_Color_2eproto();
  }
} static_descriptor_initializer_Color_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Color::kUint32RFieldNumber;
const int Color::kUint32GFieldNumber;
const int Color::kUint32BFieldNumber;
#endif  // !_MSC_VER

Color::Color()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Color::InitAsDefaultInstance() {
}

Color::Color(const Color& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Color::SharedCtor() {
  _cached_size_ = 0;
  uint32_r_ = 0u;
  uint32_g_ = 0u;
  uint32_b_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Color::~Color() {
  SharedDtor();
}

void Color::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Color::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Color::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Color_descriptor_;
}

const Color& Color::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Color_2eproto();
  return *default_instance_;
}

Color* Color::default_instance_ = NULL;

Color* Color::New() const {
  return new Color;
}

void Color::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    uint32_r_ = 0u;
    uint32_g_ = 0u;
    uint32_b_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Color::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 uint32_r = 1 [default = 0];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uint32_r_)));
          set_has_uint32_r();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_uint32_g;
        break;
      }

      // optional uint32 uint32_g = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_uint32_g:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uint32_g_)));
          set_has_uint32_g();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_uint32_b;
        break;
      }

      // optional uint32 uint32_b = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_uint32_b:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uint32_b_)));
          set_has_uint32_b();
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

void Color::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 uint32_r = 1 [default = 0];
  if (has_uint32_r()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->uint32_r(), output);
  }

  // optional uint32 uint32_g = 2 [default = 0];
  if (has_uint32_g()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->uint32_g(), output);
  }

  // optional uint32 uint32_b = 3 [default = 0];
  if (has_uint32_b()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->uint32_b(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Color::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 uint32_r = 1 [default = 0];
  if (has_uint32_r()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->uint32_r(), target);
  }

  // optional uint32 uint32_g = 2 [default = 0];
  if (has_uint32_g()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->uint32_g(), target);
  }

  // optional uint32 uint32_b = 3 [default = 0];
  if (has_uint32_b()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->uint32_b(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Color::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 uint32_r = 1 [default = 0];
    if (has_uint32_r()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->uint32_r());
    }

    // optional uint32 uint32_g = 2 [default = 0];
    if (has_uint32_g()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->uint32_g());
    }

    // optional uint32 uint32_b = 3 [default = 0];
    if (has_uint32_b()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->uint32_b());
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

void Color::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Color* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Color*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Color::MergeFrom(const Color& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uint32_r()) {
      set_uint32_r(from.uint32_r());
    }
    if (from.has_uint32_g()) {
      set_uint32_g(from.uint32_g());
    }
    if (from.has_uint32_b()) {
      set_uint32_b(from.uint32_b());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Color::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Color::CopyFrom(const Color& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Color::IsInitialized() const {

  return true;
}

void Color::Swap(Color* other) {
  if (other != this) {
    std::swap(uint32_r_, other->uint32_r_);
    std::swap(uint32_g_, other->uint32_g_);
    std::swap(uint32_b_, other->uint32_b_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Color::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Color_descriptor_;
  metadata.reflection = Color_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace AccountSearchPb

// @@protoc_insertion_point(global_scope)