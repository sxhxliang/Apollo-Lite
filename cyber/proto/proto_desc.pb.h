// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_desc.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_5fdesc_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_5fdesc_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_5fdesc_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_5fdesc_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_5fdesc_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class ProtoDesc;
class ProtoDescDefaultTypeInternal;
extern ProtoDescDefaultTypeInternal _ProtoDesc_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::ProtoDesc* Arena::CreateMaybeMessage<::apollo::cyber::proto::ProtoDesc>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

class ProtoDesc :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.ProtoDesc) */ {
 public:
  ProtoDesc();
  virtual ~ProtoDesc();

  ProtoDesc(const ProtoDesc& from);
  ProtoDesc(ProtoDesc&& from) noexcept
    : ProtoDesc() {
    *this = ::std::move(from);
  }

  inline ProtoDesc& operator=(const ProtoDesc& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProtoDesc& operator=(ProtoDesc&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ProtoDesc& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtoDesc* internal_default_instance() {
    return reinterpret_cast<const ProtoDesc*>(
               &_ProtoDesc_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ProtoDesc* other);
  friend void swap(ProtoDesc& a, ProtoDesc& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtoDesc* New() const final {
    return CreateMaybeMessage<ProtoDesc>(nullptr);
  }

  ProtoDesc* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProtoDesc>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ProtoDesc& from);
  void MergeFrom(const ProtoDesc& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProtoDesc* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.ProtoDesc";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_5fdesc_2eproto);
    return ::descriptor_table_proto_5fdesc_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
  int dependencies_size() const;
  void clear_dependencies();
  static const int kDependenciesFieldNumber = 2;
  ::apollo::cyber::proto::ProtoDesc* mutable_dependencies(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::cyber::proto::ProtoDesc >*
      mutable_dependencies();
  const ::apollo::cyber::proto::ProtoDesc& dependencies(int index) const;
  ::apollo::cyber::proto::ProtoDesc* add_dependencies();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::cyber::proto::ProtoDesc >&
      dependencies() const;

  // optional bytes desc = 1;
  bool has_desc() const;
  void clear_desc();
  static const int kDescFieldNumber = 1;
  const std::string& desc() const;
  void set_desc(const std::string& value);
  void set_desc(std::string&& value);
  void set_desc(const char* value);
  void set_desc(const void* value, size_t size);
  std::string* mutable_desc();
  std::string* release_desc();
  void set_allocated_desc(std::string* desc);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.ProtoDesc)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::cyber::proto::ProtoDesc > dependencies_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr desc_;
  friend struct ::TableStruct_proto_5fdesc_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProtoDesc

// optional bytes desc = 1;
inline bool ProtoDesc::has_desc() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProtoDesc::clear_desc() {
  desc_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ProtoDesc::desc() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ProtoDesc.desc)
  return desc_.GetNoArena();
}
inline void ProtoDesc::set_desc(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  desc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ProtoDesc.desc)
}
inline void ProtoDesc::set_desc(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  desc_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.ProtoDesc.desc)
}
inline void ProtoDesc::set_desc(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  desc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.ProtoDesc.desc)
}
inline void ProtoDesc::set_desc(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  desc_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.ProtoDesc.desc)
}
inline std::string* ProtoDesc::mutable_desc() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.ProtoDesc.desc)
  return desc_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ProtoDesc::release_desc() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.ProtoDesc.desc)
  if (!has_desc()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return desc_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoDesc::set_allocated_desc(std::string* desc) {
  if (desc != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  desc_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), desc);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.ProtoDesc.desc)
}

// repeated .apollo.cyber.proto.ProtoDesc dependencies = 2;
inline int ProtoDesc::dependencies_size() const {
  return dependencies_.size();
}
inline void ProtoDesc::clear_dependencies() {
  dependencies_.Clear();
}
inline ::apollo::cyber::proto::ProtoDesc* ProtoDesc::mutable_dependencies(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.ProtoDesc.dependencies)
  return dependencies_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::cyber::proto::ProtoDesc >*
ProtoDesc::mutable_dependencies() {
  // @@protoc_insertion_point(field_mutable_list:apollo.cyber.proto.ProtoDesc.dependencies)
  return &dependencies_;
}
inline const ::apollo::cyber::proto::ProtoDesc& ProtoDesc::dependencies(int index) const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ProtoDesc.dependencies)
  return dependencies_.Get(index);
}
inline ::apollo::cyber::proto::ProtoDesc* ProtoDesc::add_dependencies() {
  // @@protoc_insertion_point(field_add:apollo.cyber.proto.ProtoDesc.dependencies)
  return dependencies_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::cyber::proto::ProtoDesc >&
ProtoDesc::dependencies() const {
  // @@protoc_insertion_point(field_list:apollo.cyber.proto.ProtoDesc.dependencies)
  return dependencies_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_5fdesc_2eproto
