// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: topology_change.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_topology_5fchange_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_topology_5fchange_2eproto

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
#include "role_attributes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_topology_5fchange_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_topology_5fchange_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_topology_5fchange_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class ChangeMsg;
class ChangeMsgDefaultTypeInternal;
extern ChangeMsgDefaultTypeInternal _ChangeMsg_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::ChangeMsg* Arena::CreateMaybeMessage<::apollo::cyber::proto::ChangeMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

enum ChangeType : int {
  CHANGE_NODE = 1,
  CHANGE_CHANNEL = 2,
  CHANGE_SERVICE = 3,
  CHANGE_PARTICIPANT = 4
};
bool ChangeType_IsValid(int value);
constexpr ChangeType ChangeType_MIN = CHANGE_NODE;
constexpr ChangeType ChangeType_MAX = CHANGE_PARTICIPANT;
constexpr int ChangeType_ARRAYSIZE = ChangeType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChangeType_descriptor();
template<typename T>
inline const std::string& ChangeType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ChangeType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ChangeType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ChangeType_descriptor(), enum_t_value);
}
inline bool ChangeType_Parse(
    const std::string& name, ChangeType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChangeType>(
    ChangeType_descriptor(), name, value);
}
enum OperateType : int {
  OPT_JOIN = 1,
  OPT_LEAVE = 2
};
bool OperateType_IsValid(int value);
constexpr OperateType OperateType_MIN = OPT_JOIN;
constexpr OperateType OperateType_MAX = OPT_LEAVE;
constexpr int OperateType_ARRAYSIZE = OperateType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OperateType_descriptor();
template<typename T>
inline const std::string& OperateType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, OperateType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function OperateType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    OperateType_descriptor(), enum_t_value);
}
inline bool OperateType_Parse(
    const std::string& name, OperateType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<OperateType>(
    OperateType_descriptor(), name, value);
}
enum RoleType : int {
  ROLE_NODE = 1,
  ROLE_WRITER = 2,
  ROLE_READER = 3,
  ROLE_SERVER = 4,
  ROLE_CLIENT = 5,
  ROLE_PARTICIPANT = 6
};
bool RoleType_IsValid(int value);
constexpr RoleType RoleType_MIN = ROLE_NODE;
constexpr RoleType RoleType_MAX = ROLE_PARTICIPANT;
constexpr int RoleType_ARRAYSIZE = RoleType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RoleType_descriptor();
template<typename T>
inline const std::string& RoleType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RoleType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RoleType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RoleType_descriptor(), enum_t_value);
}
inline bool RoleType_Parse(
    const std::string& name, RoleType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RoleType>(
    RoleType_descriptor(), name, value);
}
// ===================================================================

class ChangeMsg :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.ChangeMsg) */ {
 public:
  ChangeMsg();
  virtual ~ChangeMsg();

  ChangeMsg(const ChangeMsg& from);
  ChangeMsg(ChangeMsg&& from) noexcept
    : ChangeMsg() {
    *this = ::std::move(from);
  }

  inline ChangeMsg& operator=(const ChangeMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChangeMsg& operator=(ChangeMsg&& from) noexcept {
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
  static const ChangeMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ChangeMsg* internal_default_instance() {
    return reinterpret_cast<const ChangeMsg*>(
               &_ChangeMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ChangeMsg* other);
  friend void swap(ChangeMsg& a, ChangeMsg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ChangeMsg* New() const final {
    return CreateMaybeMessage<ChangeMsg>(nullptr);
  }

  ChangeMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChangeMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ChangeMsg& from);
  void MergeFrom(const ChangeMsg& from);
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
  void InternalSwap(ChangeMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.ChangeMsg";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_topology_5fchange_2eproto);
    return ::descriptor_table_topology_5fchange_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
  bool has_role_attr() const;
  void clear_role_attr();
  static const int kRoleAttrFieldNumber = 5;
  const ::apollo::cyber::proto::RoleAttributes& role_attr() const;
  ::apollo::cyber::proto::RoleAttributes* release_role_attr();
  ::apollo::cyber::proto::RoleAttributes* mutable_role_attr();
  void set_allocated_role_attr(::apollo::cyber::proto::RoleAttributes* role_attr);

  // optional uint64 timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional .apollo.cyber.proto.RoleType role_type = 4;
  bool has_role_type() const;
  void clear_role_type();
  static const int kRoleTypeFieldNumber = 4;
  ::apollo::cyber::proto::RoleType role_type() const;
  void set_role_type(::apollo::cyber::proto::RoleType value);

  // optional .apollo.cyber.proto.ChangeType change_type = 2;
  bool has_change_type() const;
  void clear_change_type();
  static const int kChangeTypeFieldNumber = 2;
  ::apollo::cyber::proto::ChangeType change_type() const;
  void set_change_type(::apollo::cyber::proto::ChangeType value);

  // optional .apollo.cyber.proto.OperateType operate_type = 3;
  bool has_operate_type() const;
  void clear_operate_type();
  static const int kOperateTypeFieldNumber = 3;
  ::apollo::cyber::proto::OperateType operate_type() const;
  void set_operate_type(::apollo::cyber::proto::OperateType value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.ChangeMsg)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::cyber::proto::RoleAttributes* role_attr_;
  ::PROTOBUF_NAMESPACE_ID::uint64 timestamp_;
  int role_type_;
  int change_type_;
  int operate_type_;
  friend struct ::TableStruct_topology_5fchange_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChangeMsg

// optional uint64 timestamp = 1;
inline bool ChangeMsg::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChangeMsg::clear_timestamp() {
  timestamp_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ChangeMsg::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.timestamp)
  return timestamp_;
}
inline void ChangeMsg::set_timestamp(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.timestamp)
}

// optional .apollo.cyber.proto.ChangeType change_type = 2;
inline bool ChangeMsg::has_change_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChangeMsg::clear_change_type() {
  change_type_ = 1;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::apollo::cyber::proto::ChangeType ChangeMsg::change_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.change_type)
  return static_cast< ::apollo::cyber::proto::ChangeType >(change_type_);
}
inline void ChangeMsg::set_change_type(::apollo::cyber::proto::ChangeType value) {
  assert(::apollo::cyber::proto::ChangeType_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  change_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.change_type)
}

// optional .apollo.cyber.proto.OperateType operate_type = 3;
inline bool ChangeMsg::has_operate_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ChangeMsg::clear_operate_type() {
  operate_type_ = 1;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::apollo::cyber::proto::OperateType ChangeMsg::operate_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.operate_type)
  return static_cast< ::apollo::cyber::proto::OperateType >(operate_type_);
}
inline void ChangeMsg::set_operate_type(::apollo::cyber::proto::OperateType value) {
  assert(::apollo::cyber::proto::OperateType_IsValid(value));
  _has_bits_[0] |= 0x00000010u;
  operate_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.operate_type)
}

// optional .apollo.cyber.proto.RoleType role_type = 4;
inline bool ChangeMsg::has_role_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChangeMsg::clear_role_type() {
  role_type_ = 1;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::apollo::cyber::proto::RoleType ChangeMsg::role_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.role_type)
  return static_cast< ::apollo::cyber::proto::RoleType >(role_type_);
}
inline void ChangeMsg::set_role_type(::apollo::cyber::proto::RoleType value) {
  assert(::apollo::cyber::proto::RoleType_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  role_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.role_type)
}

// optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
inline bool ChangeMsg::has_role_attr() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::apollo::cyber::proto::RoleAttributes& ChangeMsg::role_attr() const {
  const ::apollo::cyber::proto::RoleAttributes* p = role_attr_;
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.role_attr)
  return p != nullptr ? *p : *reinterpret_cast<const ::apollo::cyber::proto::RoleAttributes*>(
      &::apollo::cyber::proto::_RoleAttributes_default_instance_);
}
inline ::apollo::cyber::proto::RoleAttributes* ChangeMsg::release_role_attr() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.ChangeMsg.role_attr)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::cyber::proto::RoleAttributes* temp = role_attr_;
  role_attr_ = nullptr;
  return temp;
}
inline ::apollo::cyber::proto::RoleAttributes* ChangeMsg::mutable_role_attr() {
  _has_bits_[0] |= 0x00000001u;
  if (role_attr_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::cyber::proto::RoleAttributes>(GetArenaNoVirtual());
    role_attr_ = p;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.ChangeMsg.role_attr)
  return role_attr_;
}
inline void ChangeMsg::set_allocated_role_attr(::apollo::cyber::proto::RoleAttributes* role_attr) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(role_attr_);
  }
  if (role_attr) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      role_attr = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, role_attr, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  role_attr_ = role_attr;
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.ChangeMsg.role_attr)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::cyber::proto::ChangeType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::ChangeType>() {
  return ::apollo::cyber::proto::ChangeType_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::OperateType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::OperateType>() {
  return ::apollo::cyber::proto::OperateType_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::RoleType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::RoleType>() {
  return ::apollo::cyber::proto::RoleType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_topology_5fchange_2eproto
