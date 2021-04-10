// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perception.proto

#include "perception.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_perception_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Perception_Header_perception_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class Perception_HeaderDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Perception_Header> _instance;
} _Perception_Header_default_instance_;
class PerceptionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Perception> _instance;
} _Perception_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
static void InitDefaultsscc_info_Perception_perception_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::cyber::proto::_Perception_default_instance_;
    new (ptr) ::apollo::cyber::proto::Perception();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::cyber::proto::Perception::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Perception_perception_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_Perception_perception_2eproto}, {
      &scc_info_Perception_Header_perception_2eproto.base,}};

static void InitDefaultsscc_info_Perception_Header_perception_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::cyber::proto::_Perception_Header_default_instance_;
    new (ptr) ::apollo::cyber::proto::Perception_Header();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::cyber::proto::Perception_Header::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Perception_Header_perception_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_Perception_Header_perception_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_perception_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_perception_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_perception_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_perception_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception_Header, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception_Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception_Header, timestamp_),
  0,
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception, header_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception, msg_id_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::Perception, result_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::apollo::cyber::proto::Perception_Header)},
  { 7, 15, sizeof(::apollo::cyber::proto::Perception)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::cyber::proto::_Perception_Header_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::cyber::proto::_Perception_default_instance_),
};

const char descriptor_table_protodef_perception_2eproto[] =
  "\n\020perception.proto\022\022apollo.cyber.proto\"\200"
  "\001\n\nPerception\0225\n\006header\030\001 \001(\0132%.apollo.c"
  "yber.proto.Perception.Header\022\016\n\006msg_id\030\002"
  " \001(\004\022\016\n\006result\030\003 \001(\001\032\033\n\006Header\022\021\n\ttimest"
  "amp\030\001 \001(\004"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_perception_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_perception_2eproto_sccs[2] = {
  &scc_info_Perception_perception_2eproto.base,
  &scc_info_Perception_Header_perception_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_perception_2eproto_once;
static bool descriptor_table_perception_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_perception_2eproto = {
  &descriptor_table_perception_2eproto_initialized, descriptor_table_protodef_perception_2eproto, "perception.proto", 169,
  &descriptor_table_perception_2eproto_once, descriptor_table_perception_2eproto_sccs, descriptor_table_perception_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_perception_2eproto::offsets,
  file_level_metadata_perception_2eproto, 2, file_level_enum_descriptors_perception_2eproto, file_level_service_descriptors_perception_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_perception_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_perception_2eproto), true);
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

void Perception_Header::InitAsDefaultInstance() {
}
class Perception_Header::HasBitSetters {
 public:
  using HasBits = decltype(std::declval<Perception_Header>()._has_bits_);
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Perception_Header::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Perception_Header::Perception_Header()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.cyber.proto.Perception.Header)
}
Perception_Header::Perception_Header(const Perception_Header& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.Perception.Header)
}

void Perception_Header::SharedCtor() {
  timestamp_ = PROTOBUF_ULONGLONG(0);
}

Perception_Header::~Perception_Header() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.Perception.Header)
  SharedDtor();
}

void Perception_Header::SharedDtor() {
}

void Perception_Header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Perception_Header& Perception_Header::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Perception_Header_perception_2eproto.base);
  return *internal_default_instance();
}


void Perception_Header::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.Perception.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  timestamp_ = PROTOBUF_ULONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Perception_Header::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  HasBitSetters::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint64 timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          HasBitSetters::set_has_timestamp(&has_bits);
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Perception_Header::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.cyber.proto.Perception.Header)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 timestamp = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          HasBitSetters::set_has_timestamp(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.cyber.proto.Perception.Header)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.cyber.proto.Perception.Header)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Perception_Header::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.cyber.proto.Perception.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 timestamp = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64(1, this->timestamp(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.cyber.proto.Perception.Header)
}

::PROTOBUF_NAMESPACE_ID::uint8* Perception_Header::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.Perception.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 timestamp = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->timestamp(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.Perception.Header)
  return target;
}

size_t Perception_Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.Perception.Header)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional uint64 timestamp = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->timestamp());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Perception_Header::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.Perception.Header)
  GOOGLE_DCHECK_NE(&from, this);
  const Perception_Header* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Perception_Header>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.Perception.Header)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.Perception.Header)
    MergeFrom(*source);
  }
}

void Perception_Header::MergeFrom(const Perception_Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.Perception.Header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_timestamp()) {
    set_timestamp(from.timestamp());
  }
}

void Perception_Header::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.Perception.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Perception_Header::CopyFrom(const Perception_Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.Perception.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Perception_Header::IsInitialized() const {
  return true;
}

void Perception_Header::Swap(Perception_Header* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Perception_Header::InternalSwap(Perception_Header* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(timestamp_, other->timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Perception_Header::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Perception::InitAsDefaultInstance() {
  ::apollo::cyber::proto::_Perception_default_instance_._instance.get_mutable()->header_ = const_cast< ::apollo::cyber::proto::Perception_Header*>(
      ::apollo::cyber::proto::Perception_Header::internal_default_instance());
}
class Perception::HasBitSetters {
 public:
  using HasBits = decltype(std::declval<Perception>()._has_bits_);
  static const ::apollo::cyber::proto::Perception_Header& header(const Perception* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_msg_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_result(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::apollo::cyber::proto::Perception_Header&
Perception::HasBitSetters::header(const Perception* msg) {
  return *msg->header_;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Perception::kHeaderFieldNumber;
const int Perception::kMsgIdFieldNumber;
const int Perception::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Perception::Perception()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.cyber.proto.Perception)
}
Perception::Perception(const Perception& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::apollo::cyber::proto::Perception_Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  ::memcpy(&msg_id_, &from.msg_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&result_) -
    reinterpret_cast<char*>(&msg_id_)) + sizeof(result_));
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.Perception)
}

void Perception::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Perception_perception_2eproto.base);
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&result_) -
      reinterpret_cast<char*>(&header_)) + sizeof(result_));
}

Perception::~Perception() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.Perception)
  SharedDtor();
}

void Perception::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
}

void Perception::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Perception& Perception::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Perception_perception_2eproto.base);
  return *internal_default_instance();
}


void Perception::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.Perception)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(header_ != nullptr);
    header_->Clear();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&msg_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&result_) -
        reinterpret_cast<char*>(&msg_id_)) + sizeof(result_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Perception::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  HasBitSetters::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.cyber.proto.Perception.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 msg_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          HasBitSetters::set_has_msg_id(&has_bits);
          msg_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double result = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          HasBitSetters::set_has_result(&has_bits);
          result_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Perception::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.cyber.proto.Perception)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.cyber.proto.Perception.Header header = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 msg_id = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          HasBitSetters::set_has_msg_id(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64>(
                 input, &msg_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double result = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (25 & 0xFF)) {
          HasBitSetters::set_has_result(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   double, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &result_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.cyber.proto.Perception)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.cyber.proto.Perception)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Perception::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.cyber.proto.Perception)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.Perception.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::header(this), output);
  }

  // optional uint64 msg_id = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64(2, this->msg_id(), output);
  }

  // optional double result = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDouble(3, this->result(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.cyber.proto.Perception)
}

::PROTOBUF_NAMESPACE_ID::uint8* Perception::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.Perception)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.Perception.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::header(this), target);
  }

  // optional uint64 msg_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->msg_id(), target);
  }

  // optional double result = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->result(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.Perception)
  return target;
}

size_t Perception::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.Perception)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .apollo.cyber.proto.Perception.Header header = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *header_);
    }

    // optional uint64 msg_id = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->msg_id());
    }

    // optional double result = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Perception::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.Perception)
  GOOGLE_DCHECK_NE(&from, this);
  const Perception* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Perception>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.Perception)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.Perception)
    MergeFrom(*source);
  }
}

void Perception::MergeFrom(const Perception& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.Perception)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_header()->::apollo::cyber::proto::Perception_Header::MergeFrom(from.header());
    }
    if (cached_has_bits & 0x00000002u) {
      msg_id_ = from.msg_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      result_ = from.result_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Perception::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.Perception)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Perception::CopyFrom(const Perception& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.Perception)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Perception::IsInitialized() const {
  return true;
}

void Perception::Swap(Perception* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Perception::InternalSwap(Perception* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(header_, other->header_);
  swap(msg_id_, other->msg_id_);
  swap(result_, other->result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Perception::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::Perception_Header* Arena::CreateMaybeMessage< ::apollo::cyber::proto::Perception_Header >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::cyber::proto::Perception_Header >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::Perception* Arena::CreateMaybeMessage< ::apollo::cyber::proto::Perception >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::cyber::proto::Perception >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
