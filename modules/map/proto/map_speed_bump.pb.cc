// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/proto/map_speed_bump.proto

#include "modules/map/proto/map_speed_bump.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Curve_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_modules_2fmap_2fproto_2fmap_5fid_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Id_modules_2fmap_2fproto_2fmap_5fid_2eproto;
namespace apollo {
namespace hdmap {
class SpeedBumpDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SpeedBump> _instance;
} _SpeedBump_default_instance_;
}  // namespace hdmap
}  // namespace apollo
static void InitDefaultsscc_info_SpeedBump_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::hdmap::_SpeedBump_default_instance_;
    new (ptr) ::apollo::hdmap::SpeedBump();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::hdmap::SpeedBump::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_SpeedBump_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_SpeedBump_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto}, {
      &scc_info_Id_modules_2fmap_2fproto_2fmap_5fid_2eproto.base,
      &scc_info_Curve_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::SpeedBump, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::SpeedBump, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::SpeedBump, id_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::SpeedBump, overlap_id_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::SpeedBump, position_),
  0,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::apollo::hdmap::SpeedBump)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::hdmap::_SpeedBump_default_instance_),
};

const char descriptor_table_protodef_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto[] =
  "\n&modules/map/proto/map_speed_bump.proto"
  "\022\014apollo.hdmap\032\036modules/map/proto/map_id"
  ".proto\032$modules/map/proto/map_geometry.p"
  "roto\"v\n\tSpeedBump\022\034\n\002id\030\001 \001(\0132\020.apollo.h"
  "dmap.Id\022$\n\noverlap_id\030\002 \003(\0132\020.apollo.hdm"
  "ap.Id\022%\n\010position\030\003 \003(\0132\023.apollo.hdmap.C"
  "urve"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_deps[2] = {
  &::descriptor_table_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto,
  &::descriptor_table_modules_2fmap_2fproto_2fmap_5fid_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_sccs[1] = {
  &scc_info_SpeedBump_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_once;
static bool descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto = {
  &descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_initialized, descriptor_table_protodef_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto, "modules/map/proto/map_speed_bump.proto", 244,
  &descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_once, descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_sccs, descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto::offsets,
  file_level_metadata_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto, 1, file_level_enum_descriptors_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto, file_level_service_descriptors_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto), true);
namespace apollo {
namespace hdmap {

// ===================================================================

void SpeedBump::InitAsDefaultInstance() {
  ::apollo::hdmap::_SpeedBump_default_instance_._instance.get_mutable()->id_ = const_cast< ::apollo::hdmap::Id*>(
      ::apollo::hdmap::Id::internal_default_instance());
}
class SpeedBump::HasBitSetters {
 public:
  using HasBits = decltype(std::declval<SpeedBump>()._has_bits_);
  static const ::apollo::hdmap::Id& id(const SpeedBump* msg);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::hdmap::Id&
SpeedBump::HasBitSetters::id(const SpeedBump* msg) {
  return *msg->id_;
}
void SpeedBump::clear_id() {
  if (id_ != nullptr) id_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void SpeedBump::clear_overlap_id() {
  overlap_id_.Clear();
}
void SpeedBump::clear_position() {
  position_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeedBump::kIdFieldNumber;
const int SpeedBump::kOverlapIdFieldNumber;
const int SpeedBump::kPositionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpeedBump::SpeedBump()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.SpeedBump)
}
SpeedBump::SpeedBump(const SpeedBump& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      overlap_id_(from.overlap_id_),
      position_(from.position_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_id()) {
    id_ = new ::apollo::hdmap::Id(*from.id_);
  } else {
    id_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.SpeedBump)
}

void SpeedBump::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SpeedBump_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto.base);
  id_ = nullptr;
}

SpeedBump::~SpeedBump() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.SpeedBump)
  SharedDtor();
}

void SpeedBump::SharedDtor() {
  if (this != internal_default_instance()) delete id_;
}

void SpeedBump::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SpeedBump& SpeedBump::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SpeedBump_modules_2fmap_2fproto_2fmap_5fspeed_5fbump_2eproto.base);
  return *internal_default_instance();
}


void SpeedBump::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.SpeedBump)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  overlap_id_.Clear();
  position_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(id_ != nullptr);
    id_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* SpeedBump::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  HasBitSetters::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.hdmap.Id id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_id(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.hdmap.Id overlap_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_overlap_id(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 18);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.hdmap.Curve position = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_position(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 26);
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
bool SpeedBump::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.SpeedBump)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.hdmap.Id id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .apollo.hdmap.Id overlap_id = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_overlap_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .apollo.hdmap.Curve position = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_position()));
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
  // @@protoc_insertion_point(parse_success:apollo.hdmap.SpeedBump)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.SpeedBump)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void SpeedBump::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.SpeedBump)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::id(this), output);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->overlap_id_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->overlap_id(static_cast<int>(i)),
      output);
  }

  // repeated .apollo.hdmap.Curve position = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->position_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->position(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.SpeedBump)
}

::PROTOBUF_NAMESPACE_ID::uint8* SpeedBump::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.SpeedBump)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::id(this), target);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->overlap_id_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->overlap_id(static_cast<int>(i)), target);
  }

  // repeated .apollo.hdmap.Curve position = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->position_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->position(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.SpeedBump)
  return target;
}

size_t SpeedBump::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.SpeedBump)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.hdmap.Id overlap_id = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->overlap_id_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->overlap_id(static_cast<int>(i)));
    }
  }

  // repeated .apollo.hdmap.Curve position = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->position_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->position(static_cast<int>(i)));
    }
  }

  // optional .apollo.hdmap.Id id = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *id_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SpeedBump::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.SpeedBump)
  GOOGLE_DCHECK_NE(&from, this);
  const SpeedBump* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SpeedBump>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.SpeedBump)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.SpeedBump)
    MergeFrom(*source);
  }
}

void SpeedBump::MergeFrom(const SpeedBump& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.SpeedBump)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  overlap_id_.MergeFrom(from.overlap_id_);
  position_.MergeFrom(from.position_);
  if (from.has_id()) {
    mutable_id()->::apollo::hdmap::Id::MergeFrom(from.id());
  }
}

void SpeedBump::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.SpeedBump)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpeedBump::CopyFrom(const SpeedBump& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.SpeedBump)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeedBump::IsInitialized() const {
  return true;
}

void SpeedBump::Swap(SpeedBump* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpeedBump::InternalSwap(SpeedBump* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  CastToBase(&overlap_id_)->InternalSwap(CastToBase(&other->overlap_id_));
  CastToBase(&position_)->InternalSwap(CastToBase(&other->position_));
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SpeedBump::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace hdmap
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::hdmap::SpeedBump* Arena::CreateMaybeMessage< ::apollo::hdmap::SpeedBump >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::hdmap::SpeedBump >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>