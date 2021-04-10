// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: qos_profile.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_qos_5fprofile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_qos_5fprofile_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_qos_5fprofile_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_qos_5fprofile_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_qos_5fprofile_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class QosProfile;
class QosProfileDefaultTypeInternal;
extern QosProfileDefaultTypeInternal _QosProfile_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::QosProfile* Arena::CreateMaybeMessage<::apollo::cyber::proto::QosProfile>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

enum QosHistoryPolicy : int {
  HISTORY_SYSTEM_DEFAULT = 0,
  HISTORY_KEEP_LAST = 1,
  HISTORY_KEEP_ALL = 2
};
bool QosHistoryPolicy_IsValid(int value);
constexpr QosHistoryPolicy QosHistoryPolicy_MIN = HISTORY_SYSTEM_DEFAULT;
constexpr QosHistoryPolicy QosHistoryPolicy_MAX = HISTORY_KEEP_ALL;
constexpr int QosHistoryPolicy_ARRAYSIZE = QosHistoryPolicy_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosHistoryPolicy_descriptor();
template<typename T>
inline const std::string& QosHistoryPolicy_Name(T enum_t_value) {
  static_assert(::std::is_same<T, QosHistoryPolicy>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function QosHistoryPolicy_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    QosHistoryPolicy_descriptor(), enum_t_value);
}
inline bool QosHistoryPolicy_Parse(
    const std::string& name, QosHistoryPolicy* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<QosHistoryPolicy>(
    QosHistoryPolicy_descriptor(), name, value);
}
enum QosReliabilityPolicy : int {
  RELIABILITY_SYSTEM_DEFAULT = 0,
  RELIABILITY_RELIABLE = 1,
  RELIABILITY_BEST_EFFORT = 2
};
bool QosReliabilityPolicy_IsValid(int value);
constexpr QosReliabilityPolicy QosReliabilityPolicy_MIN = RELIABILITY_SYSTEM_DEFAULT;
constexpr QosReliabilityPolicy QosReliabilityPolicy_MAX = RELIABILITY_BEST_EFFORT;
constexpr int QosReliabilityPolicy_ARRAYSIZE = QosReliabilityPolicy_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosReliabilityPolicy_descriptor();
template<typename T>
inline const std::string& QosReliabilityPolicy_Name(T enum_t_value) {
  static_assert(::std::is_same<T, QosReliabilityPolicy>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function QosReliabilityPolicy_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    QosReliabilityPolicy_descriptor(), enum_t_value);
}
inline bool QosReliabilityPolicy_Parse(
    const std::string& name, QosReliabilityPolicy* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<QosReliabilityPolicy>(
    QosReliabilityPolicy_descriptor(), name, value);
}
enum QosDurabilityPolicy : int {
  DURABILITY_SYSTEM_DEFAULT = 0,
  DURABILITY_TRANSIENT_LOCAL = 1,
  DURABILITY_VOLATILE = 2
};
bool QosDurabilityPolicy_IsValid(int value);
constexpr QosDurabilityPolicy QosDurabilityPolicy_MIN = DURABILITY_SYSTEM_DEFAULT;
constexpr QosDurabilityPolicy QosDurabilityPolicy_MAX = DURABILITY_VOLATILE;
constexpr int QosDurabilityPolicy_ARRAYSIZE = QosDurabilityPolicy_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosDurabilityPolicy_descriptor();
template<typename T>
inline const std::string& QosDurabilityPolicy_Name(T enum_t_value) {
  static_assert(::std::is_same<T, QosDurabilityPolicy>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function QosDurabilityPolicy_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    QosDurabilityPolicy_descriptor(), enum_t_value);
}
inline bool QosDurabilityPolicy_Parse(
    const std::string& name, QosDurabilityPolicy* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<QosDurabilityPolicy>(
    QosDurabilityPolicy_descriptor(), name, value);
}
// ===================================================================

class QosProfile :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.QosProfile) */ {
 public:
  QosProfile();
  virtual ~QosProfile();

  QosProfile(const QosProfile& from);
  QosProfile(QosProfile&& from) noexcept
    : QosProfile() {
    *this = ::std::move(from);
  }

  inline QosProfile& operator=(const QosProfile& from) {
    CopyFrom(from);
    return *this;
  }
  inline QosProfile& operator=(QosProfile&& from) noexcept {
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
  static const QosProfile& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const QosProfile* internal_default_instance() {
    return reinterpret_cast<const QosProfile*>(
               &_QosProfile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(QosProfile* other);
  friend void swap(QosProfile& a, QosProfile& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline QosProfile* New() const final {
    return CreateMaybeMessage<QosProfile>(nullptr);
  }

  QosProfile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<QosProfile>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const QosProfile& from);
  void MergeFrom(const QosProfile& from);
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
  void InternalSwap(QosProfile* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.QosProfile";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_qos_5fprofile_2eproto);
    return ::descriptor_table_qos_5fprofile_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 mps = 3 [default = 0];
  bool has_mps() const;
  void clear_mps();
  static const int kMpsFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::uint32 mps() const;
  void set_mps(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional .apollo.cyber.proto.QosHistoryPolicy history = 1 [default = HISTORY_KEEP_LAST];
  bool has_history() const;
  void clear_history();
  static const int kHistoryFieldNumber = 1;
  ::apollo::cyber::proto::QosHistoryPolicy history() const;
  void set_history(::apollo::cyber::proto::QosHistoryPolicy value);

  // optional uint32 depth = 2 [default = 1];
  bool has_depth() const;
  void clear_depth();
  static const int kDepthFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::uint32 depth() const;
  void set_depth(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional .apollo.cyber.proto.QosReliabilityPolicy reliability = 4 [default = RELIABILITY_RELIABLE];
  bool has_reliability() const;
  void clear_reliability();
  static const int kReliabilityFieldNumber = 4;
  ::apollo::cyber::proto::QosReliabilityPolicy reliability() const;
  void set_reliability(::apollo::cyber::proto::QosReliabilityPolicy value);

  // optional .apollo.cyber.proto.QosDurabilityPolicy durability = 5 [default = DURABILITY_VOLATILE];
  bool has_durability() const;
  void clear_durability();
  static const int kDurabilityFieldNumber = 5;
  ::apollo::cyber::proto::QosDurabilityPolicy durability() const;
  void set_durability(::apollo::cyber::proto::QosDurabilityPolicy value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.QosProfile)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 mps_;
  int history_;
  ::PROTOBUF_NAMESPACE_ID::uint32 depth_;
  int reliability_;
  int durability_;
  friend struct ::TableStruct_qos_5fprofile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QosProfile

// optional .apollo.cyber.proto.QosHistoryPolicy history = 1 [default = HISTORY_KEEP_LAST];
inline bool QosProfile::has_history() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QosProfile::clear_history() {
  history_ = 1;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::cyber::proto::QosHistoryPolicy QosProfile::history() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.history)
  return static_cast< ::apollo::cyber::proto::QosHistoryPolicy >(history_);
}
inline void QosProfile::set_history(::apollo::cyber::proto::QosHistoryPolicy value) {
  assert(::apollo::cyber::proto::QosHistoryPolicy_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  history_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.history)
}

// optional uint32 depth = 2 [default = 1];
inline bool QosProfile::has_depth() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void QosProfile::clear_depth() {
  depth_ = 1u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 QosProfile::depth() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.depth)
  return depth_;
}
inline void QosProfile::set_depth(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  depth_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.depth)
}

// optional uint32 mps = 3 [default = 0];
inline bool QosProfile::has_mps() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QosProfile::clear_mps() {
  mps_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 QosProfile::mps() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.mps)
  return mps_;
}
inline void QosProfile::set_mps(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  mps_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.mps)
}

// optional .apollo.cyber.proto.QosReliabilityPolicy reliability = 4 [default = RELIABILITY_RELIABLE];
inline bool QosProfile::has_reliability() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void QosProfile::clear_reliability() {
  reliability_ = 1;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::apollo::cyber::proto::QosReliabilityPolicy QosProfile::reliability() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.reliability)
  return static_cast< ::apollo::cyber::proto::QosReliabilityPolicy >(reliability_);
}
inline void QosProfile::set_reliability(::apollo::cyber::proto::QosReliabilityPolicy value) {
  assert(::apollo::cyber::proto::QosReliabilityPolicy_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  reliability_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.reliability)
}

// optional .apollo.cyber.proto.QosDurabilityPolicy durability = 5 [default = DURABILITY_VOLATILE];
inline bool QosProfile::has_durability() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void QosProfile::clear_durability() {
  durability_ = 2;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::apollo::cyber::proto::QosDurabilityPolicy QosProfile::durability() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.durability)
  return static_cast< ::apollo::cyber::proto::QosDurabilityPolicy >(durability_);
}
inline void QosProfile::set_durability(::apollo::cyber::proto::QosDurabilityPolicy value) {
  assert(::apollo::cyber::proto::QosDurabilityPolicy_IsValid(value));
  _has_bits_[0] |= 0x00000010u;
  durability_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.durability)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::cyber::proto::QosHistoryPolicy> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::QosHistoryPolicy>() {
  return ::apollo::cyber::proto::QosHistoryPolicy_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::QosReliabilityPolicy> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::QosReliabilityPolicy>() {
  return ::apollo::cyber::proto::QosReliabilityPolicy_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::QosDurabilityPolicy> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::QosDurabilityPolicy>() {
  return ::apollo::cyber::proto::QosDurabilityPolicy_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_qos_5fprofile_2eproto
