// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shardsProperties.proto

#include "shardsProperties.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_common_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_MarkedMultiReference_common_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_common_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_MetaData_common_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_shardsProperties_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ShardsProperties_VariablesEntry_DoNotUse_shardsProperties_2eproto;
namespace com {
namespace alipay {
namespace dds {
namespace api {
namespace v1 {
class ShardsProperties_VariablesEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ShardsProperties_VariablesEntry_DoNotUse> _instance;
} _ShardsProperties_VariablesEntry_DoNotUse_default_instance_;
class ShardsPropertiesDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ShardsProperties> _instance;
} _ShardsProperties_default_instance_;
}  // namespace v1
}  // namespace api
}  // namespace dds
}  // namespace alipay
}  // namespace com
static void InitDefaultsShardsProperties_VariablesEntry_DoNotUse_shardsProperties_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::com::alipay::dds::api::v1::_ShardsProperties_VariablesEntry_DoNotUse_default_instance_;
    new (ptr) ::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse();
  }
  ::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ShardsProperties_VariablesEntry_DoNotUse_shardsProperties_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsShardsProperties_VariablesEntry_DoNotUse_shardsProperties_2eproto}, {}};

static void InitDefaultsShardsProperties_shardsProperties_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::com::alipay::dds::api::v1::_ShardsProperties_default_instance_;
    new (ptr) ::com::alipay::dds::api::v1::ShardsProperties();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::com::alipay::dds::api::v1::ShardsProperties::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_ShardsProperties_shardsProperties_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsShardsProperties_shardsProperties_2eproto}, {
      &scc_info_MetaData_common_2eproto.base,
      &scc_info_ShardsProperties_VariablesEntry_DoNotUse_shardsProperties_2eproto.base,
      &scc_info_MarkedMultiReference_common_2eproto.base,}};

void InitDefaults_shardsProperties_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ShardsProperties_VariablesEntry_DoNotUse_shardsProperties_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ShardsProperties_shardsProperties_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_shardsProperties_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_shardsProperties_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_shardsProperties_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_shardsProperties_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties, metadata_),
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties, shards_name_),
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties, variables_),
  PROTOBUF_FIELD_OFFSET(::com::alipay::dds::api::v1::ShardsProperties, extension_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse)},
  { 9, -1, sizeof(::com::alipay::dds::api::v1::ShardsProperties)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::com::alipay::dds::api::v1::_ShardsProperties_VariablesEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::com::alipay::dds::api::v1::_ShardsProperties_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_shardsProperties_2eproto = {
  {}, AddDescriptors_shardsProperties_2eproto, "shardsProperties.proto", schemas,
  file_default_instances, TableStruct_shardsProperties_2eproto::offsets,
  file_level_metadata_shardsProperties_2eproto, 2, file_level_enum_descriptors_shardsProperties_2eproto, file_level_service_descriptors_shardsProperties_2eproto,
};

const char descriptor_table_protodef_shardsProperties_2eproto[] =
  "\n\026shardsProperties.proto\022\025com.alipay.dds"
  ".api.v1\032\014common.proto\"\227\002\n\020ShardsProperti"
  "es\0221\n\010metadata\030\001 \001(\0132\037.com.alipay.dds.ap"
  "i.v1.MetaData\022\023\n\013shards_name\030\002 \001(\t\022I\n\tva"
  "riables\030\003 \003(\01326.com.alipay.dds.api.v1.Sh"
  "ardsProperties.VariablesEntry\022>\n\textensi"
  "on\030\004 \003(\0132+.com.alipay.dds.api.v1.MarkedM"
  "ultiReference\0320\n\016VariablesEntry\022\013\n\003key\030\001"
  " \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001B<\n\025com.alipay.dd"
  "s.api.v1B\025ShardsPropertiesProtoP\000Z\ndds/a"
  "pi/v1b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_shardsProperties_2eproto = {
  false, InitDefaults_shardsProperties_2eproto, 
  descriptor_table_protodef_shardsProperties_2eproto,
  "shardsProperties.proto", &assign_descriptors_table_shardsProperties_2eproto, 413,
};

void AddDescriptors_shardsProperties_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_common_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_shardsProperties_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_shardsProperties_2eproto = []() { AddDescriptors_shardsProperties_2eproto(); return true; }();
namespace com {
namespace alipay {
namespace dds {
namespace api {
namespace v1 {

// ===================================================================

ShardsProperties_VariablesEntry_DoNotUse::ShardsProperties_VariablesEntry_DoNotUse() {}
ShardsProperties_VariablesEntry_DoNotUse::ShardsProperties_VariablesEntry_DoNotUse(::google::protobuf::Arena* arena)
    : SuperType(arena) {}
void ShardsProperties_VariablesEntry_DoNotUse::MergeFrom(const ShardsProperties_VariablesEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata ShardsProperties_VariablesEntry_DoNotUse::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_shardsProperties_2eproto);
  return ::file_level_metadata_shardsProperties_2eproto[0];
}
void ShardsProperties_VariablesEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ShardsProperties_VariablesEntry_DoNotUse::_ParseMap(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx) {
  using MF = ::google::protobuf::internal::MapField<
      ShardsProperties_VariablesEntry_DoNotUse, EntryKeyType, EntryValueType,
      kEntryKeyFieldType, kEntryValueFieldType,
      kEntryDefaultEnumValue>;
  auto mf = static_cast<MF*>(object);
  Parser<MF, ::google::protobuf::Map<EntryKeyType, EntryValueType>> parser(mf);
#define DO_(x) if (!(x)) return false
  DO_(parser.ParseMap(begin, end));
  DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
    parser.key().data(), static_cast<int>(parser.key().length()),
    ::google::protobuf::internal::WireFormatLite::PARSE,
    "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.key"));
  DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
    parser.value().data(), static_cast<int>(parser.value().length()),
    ::google::protobuf::internal::WireFormatLite::PARSE,
    "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.value"));
#undef DO_
  return true;
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER


// ===================================================================

void ShardsProperties::InitAsDefaultInstance() {
  ::com::alipay::dds::api::v1::_ShardsProperties_default_instance_._instance.get_mutable()->metadata_ = const_cast< ::com::alipay::dds::api::v1::MetaData*>(
      ::com::alipay::dds::api::v1::MetaData::internal_default_instance());
}
class ShardsProperties::HasBitSetters {
 public:
  static const ::com::alipay::dds::api::v1::MetaData& metadata(const ShardsProperties* msg);
};

const ::com::alipay::dds::api::v1::MetaData&
ShardsProperties::HasBitSetters::metadata(const ShardsProperties* msg) {
  return *msg->metadata_;
}
void ShardsProperties::clear_metadata() {
  if (GetArenaNoVirtual() == nullptr && metadata_ != nullptr) {
    delete metadata_;
  }
  metadata_ = nullptr;
}
void ShardsProperties::clear_extension() {
  extension_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ShardsProperties::kMetadataFieldNumber;
const int ShardsProperties::kShardsNameFieldNumber;
const int ShardsProperties::kVariablesFieldNumber;
const int ShardsProperties::kExtensionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ShardsProperties::ShardsProperties()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.alipay.dds.api.v1.ShardsProperties)
}
ShardsProperties::ShardsProperties(const ShardsProperties& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      extension_(from.extension_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  variables_.MergeFrom(from.variables_);
  shards_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.shards_name().size() > 0) {
    shards_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.shards_name_);
  }
  if (from.has_metadata()) {
    metadata_ = new ::com::alipay::dds::api::v1::MetaData(*from.metadata_);
  } else {
    metadata_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:com.alipay.dds.api.v1.ShardsProperties)
}

void ShardsProperties::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ShardsProperties_shardsProperties_2eproto.base);
  shards_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  metadata_ = nullptr;
}

ShardsProperties::~ShardsProperties() {
  // @@protoc_insertion_point(destructor:com.alipay.dds.api.v1.ShardsProperties)
  SharedDtor();
}

void ShardsProperties::SharedDtor() {
  shards_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete metadata_;
}

void ShardsProperties::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ShardsProperties& ShardsProperties::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ShardsProperties_shardsProperties_2eproto.base);
  return *internal_default_instance();
}


void ShardsProperties::Clear() {
// @@protoc_insertion_point(message_clear_start:com.alipay.dds.api.v1.ShardsProperties)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  variables_.Clear();
  extension_.Clear();
  shards_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && metadata_ != nullptr) {
    delete metadata_;
  }
  metadata_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ShardsProperties::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ShardsProperties*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .com.alipay.dds.api.v1.MetaData metadata = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::com::alipay::dds::api::v1::MetaData::_InternalParse;
        object = msg->mutable_metadata();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // string shards_name = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("com.alipay.dds.api.v1.ShardsProperties.shards_name");
        object = msg->mutable_shards_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // map<string, string> variables = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::google::protobuf::internal::SlowMapEntryParser;
          auto parse_map = ::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse::_ParseMap;
          ctx->extra_parse_data().payload.clear();
          ctx->extra_parse_data().parse_map = parse_map;
          object = &msg->variables_;
          if (size > end - ptr) goto len_delim_till_end;
          auto newend = ptr + size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(parse_map(ptr, newend, object, ctx));
          ptr = newend;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 26 && (ptr += 1));
        break;
      }
      // repeated .com.alipay.dds.api.v1.MarkedMultiReference extension = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::com::alipay::dds::api::v1::MarkedMultiReference::_InternalParse;
          object = msg->add_extension();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 34 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ShardsProperties::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.alipay.dds.api.v1.ShardsProperties)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .com.alipay.dds.api.v1.MetaData metadata = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_metadata()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string shards_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_shards_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->shards_name().data(), static_cast<int>(this->shards_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.alipay.dds.api.v1.ShardsProperties.shards_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<string, string> variables = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          ShardsProperties_VariablesEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              ShardsProperties_VariablesEntry_DoNotUse,
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&variables_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.key"));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), static_cast<int>(parser.value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .com.alipay.dds.api.v1.MarkedMultiReference extension = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_extension()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.alipay.dds.api.v1.ShardsProperties)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.alipay.dds.api.v1.ShardsProperties)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ShardsProperties::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.alipay.dds.api.v1.ShardsProperties)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .com.alipay.dds.api.v1.MetaData metadata = 1;
  if (this->has_metadata()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::metadata(this), output);
  }

  // string shards_name = 2;
  if (this->shards_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->shards_name().data(), static_cast<int>(this->shards_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.alipay.dds.api.v1.ShardsProperties.shards_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->shards_name(), output);
  }

  // map<string, string> variables = 3;
  if (!this->variables().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->variables().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->variables().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->variables().begin();
          it != this->variables().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<ShardsProperties_VariablesEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(variables_.NewEntryWrapper(items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, *entry, output);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      ::std::unique_ptr<ShardsProperties_VariablesEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->variables().begin();
          it != this->variables().end(); ++it) {
        entry.reset(variables_.NewEntryWrapper(it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, *entry, output);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // repeated .com.alipay.dds.api.v1.MarkedMultiReference extension = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->extension_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->extension(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:com.alipay.dds.api.v1.ShardsProperties)
}

::google::protobuf::uint8* ShardsProperties::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.alipay.dds.api.v1.ShardsProperties)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .com.alipay.dds.api.v1.MetaData metadata = 1;
  if (this->has_metadata()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::metadata(this), target);
  }

  // string shards_name = 2;
  if (this->shards_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->shards_name().data(), static_cast<int>(this->shards_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.alipay.dds.api.v1.ShardsProperties.shards_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->shards_name(), target);
  }

  // map<string, string> variables = 3;
  if (!this->variables().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "com.alipay.dds.api.v1.ShardsProperties.VariablesEntry.value");
      }
    };

    if (false &&
        this->variables().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->variables().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->variables().begin();
          it != this->variables().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<ShardsProperties_VariablesEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(variables_.NewEntryWrapper(items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray(3, *entry, target);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      ::std::unique_ptr<ShardsProperties_VariablesEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->variables().begin();
          it != this->variables().end(); ++it) {
        entry.reset(variables_.NewEntryWrapper(it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessageNoVirtualToArray(3, *entry, target);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // repeated .com.alipay.dds.api.v1.MarkedMultiReference extension = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->extension_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->extension(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.alipay.dds.api.v1.ShardsProperties)
  return target;
}

size_t ShardsProperties::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.alipay.dds.api.v1.ShardsProperties)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> variables = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->variables_size());
  {
    ::std::unique_ptr<ShardsProperties_VariablesEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->variables().begin();
        it != this->variables().end(); ++it) {
      entry.reset(variables_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated .com.alipay.dds.api.v1.MarkedMultiReference extension = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->extension_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->extension(static_cast<int>(i)));
    }
  }

  // string shards_name = 2;
  if (this->shards_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->shards_name());
  }

  // .com.alipay.dds.api.v1.MetaData metadata = 1;
  if (this->has_metadata()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *metadata_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ShardsProperties::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.alipay.dds.api.v1.ShardsProperties)
  GOOGLE_DCHECK_NE(&from, this);
  const ShardsProperties* source =
      ::google::protobuf::DynamicCastToGenerated<ShardsProperties>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.alipay.dds.api.v1.ShardsProperties)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.alipay.dds.api.v1.ShardsProperties)
    MergeFrom(*source);
  }
}

void ShardsProperties::MergeFrom(const ShardsProperties& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.alipay.dds.api.v1.ShardsProperties)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  variables_.MergeFrom(from.variables_);
  extension_.MergeFrom(from.extension_);
  if (from.shards_name().size() > 0) {

    shards_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.shards_name_);
  }
  if (from.has_metadata()) {
    mutable_metadata()->::com::alipay::dds::api::v1::MetaData::MergeFrom(from.metadata());
  }
}

void ShardsProperties::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.alipay.dds.api.v1.ShardsProperties)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ShardsProperties::CopyFrom(const ShardsProperties& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.alipay.dds.api.v1.ShardsProperties)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ShardsProperties::IsInitialized() const {
  return true;
}

void ShardsProperties::Swap(ShardsProperties* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ShardsProperties::InternalSwap(ShardsProperties* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  variables_.Swap(&other->variables_);
  CastToBase(&extension_)->InternalSwap(CastToBase(&other->extension_));
  shards_name_.Swap(&other->shards_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(metadata_, other->metadata_);
}

::google::protobuf::Metadata ShardsProperties::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_shardsProperties_2eproto);
  return ::file_level_metadata_shardsProperties_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace api
}  // namespace dds
}  // namespace alipay
}  // namespace com
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse* Arena::CreateMaybeMessage< ::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::com::alipay::dds::api::v1::ShardsProperties_VariablesEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::com::alipay::dds::api::v1::ShardsProperties* Arena::CreateMaybeMessage< ::com::alipay::dds::api::v1::ShardsProperties >(Arena* arena) {
  return Arena::CreateInternal< ::com::alipay::dds::api::v1::ShardsProperties >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
