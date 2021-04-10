// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perception.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_perception_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_perception_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_perception_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_perception_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_perception_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class Perception;
class PerceptionDefaultTypeInternal;
extern PerceptionDefaultTypeInternal _Perception_default_instance_;
class Perception_Header;
class Perception_HeaderDefaultTypeInternal;
extern Perception_HeaderDefaultTypeInternal _Perception_Header_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::Perception* Arena::CreateMaybeMessage<::apollo::cyber::proto::Perception>(Arena*);
template<> ::apollo::cyber::proto::Perception_Header* Arena::CreateMaybeMessage<::apollo::cyber::proto::Perception_Header>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

class Perception_Header :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.Perception.Header) */ {
 public:
  Perception_Header();
  virtual ~Perception_Header();

  Perception_Header(const Perception_Header& from);
  Perception_Header(Perception_Header&& from) noexcept
    : Perception_Header() {
    *this = ::std::move(from);
  }

  inline Perception_Header& operator=(const Perception_Header& from) {
    CopyFrom(from);
    return *this;
  }
  inline Perception_Header& operator=(Perception_Header&& from) noexcept {
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
  static const Perception_Header& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Perception_Header* internal_default_instance() {
    return reinterpret_cast<const Perception_Header*>(
               &_Perception_Header_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Perception_Header* other);
  friend void swap(Perception_Header& a, Perception_Header& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Perception_Header* New() const final {
    return CreateMaybeMessage<Perception_Header>(nullptr);
  }

  Perception_Header* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Perception_Header>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Perception_Header& from);
  void MergeFrom(const Perception_Header& from);
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
  void InternalSwap(Perception_Header* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.Perception.Header";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_perception_2eproto);
    return ::descriptor_table_perception_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.Perception.Header)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp_;
  friend struct ::TableStruct_perception_2eproto;
};
// -------------------------------------------------------------------

class Perception :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.Perception) */ {
 public:
  Perception();
  virtual ~Perception();

  Perception(const Perception& from);
  Perception(Perception&& from) noexcept
    : Perception() {
    *this = ::std::move(from);
  }

  inline Perception& operator=(const Perception& from) {
    CopyFrom(from);
    return *this;
  }
  inline Perception& operator=(Perception&& from) noexcept {
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
  static const Perception& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Perception* internal_default_instance() {
    return reinterpret_cast<const Perception*>(
               &_Perception_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Perception* other);
  friend void swap(Perception& a, Perception& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Perception* New() const final {
    return CreateMaybeMessage<Perception>(nullptr);
  }

  Perception* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Perception>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Perception& from);
  void MergeFrom(const Perception& from);
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
  void InternalSwap(Perception* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.Perception";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_perception_2eproto);
    return ::descriptor_table_perception_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Perception_Header Header;

  // accessors -------------------------------------------------------

  // optional .apollo.cyber.proto.Perception.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::cyber::proto::Perception_Header& header() const;
  ::apollo::cyber::proto::Perception_Header* release_header();
  ::apollo::cyber::proto::Perception_Header* mutable_header();
  void set_allocated_header(::apollo::cyber::proto::Perception_Header* header);

  // optional uint64 msg_id = 2;
  bool has_msg_id() const;
  void clear_msg_id();
  static const int kMsgIdFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::uint64 msg_id() const;
  void set_msg_id(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional double result = 3;
  bool has_result() const;
  void clear_result();
  static const int kResultFieldNumber = 3;
  double result() const;
  void set_result(double value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.Perception)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::cyber::proto::Perception_Header* header_;
  ::PROTOBUF_NAMESPACE_ID::uint64 msg_id_;
  double result_;
  friend struct ::TableStruct_perception_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Perception_Header

// optional uint64 timestamp = 1;
inline bool Perception_Header::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Perception_Header::clear_timestamp() {
  timestamp_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Perception_Header::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Perception.Header.timestamp)
  return timestamp_;
}
inline void Perception_Header::set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Perception.Header.timestamp)
}

// -------------------------------------------------------------------

// Perception

// optional .apollo.cyber.proto.Perception.Header header = 1;
inline bool Perception::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Perception::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::apollo::cyber::proto::Perception_Header& Perception::header() const {
  const ::apollo::cyber::proto::Perception_Header* p = header_;
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Perception.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::cyber::proto::Perception_Header*>(
      &::apollo::cyber::proto::_Perception_Header_default_instance_);
}
inline ::apollo::cyber::proto::Perception_Header* Perception::release_header() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.Perception.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::cyber::proto::Perception_Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::cyber::proto::Perception_Header* Perception::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::cyber::proto::Perception_Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.Perception.header)
  return header_;
}
inline void Perception::set_allocated_header(::apollo::cyber::proto::Perception_Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete header_;
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.Perception.header)
}

// optional uint64 msg_id = 2;
inline bool Perception::has_msg_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Perception::clear_msg_id() {
  msg_id_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Perception::msg_id() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Perception.msg_id)
  return msg_id_;
}
inline void Perception::set_msg_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  msg_id_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Perception.msg_id)
}

// optional double result = 3;
inline bool Perception::has_result() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Perception::clear_result() {
  result_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Perception::result() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Perception.result)
  return result_;
}
inline void Perception::set_result(double value) {
  _has_bits_[0] |= 0x00000004u;
  result_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Perception.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_perception_2eproto
