// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shardsDistribute.proto

#ifndef PROTOBUF_INCLUDED_shardsDistribute_2eproto
#define PROTOBUF_INCLUDED_shardsDistribute_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "common.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_shardsDistribute_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_shardsDistribute_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_shardsDistribute_2eproto();
namespace com {
namespace alipay {
namespace dds {
namespace api {
namespace v1 {
class MarkedDistribution;
class MarkedDistributionDefaultTypeInternal;
extern MarkedDistributionDefaultTypeInternal _MarkedDistribution_default_instance_;
class ShardsDistribute;
class ShardsDistributeDefaultTypeInternal;
extern ShardsDistributeDefaultTypeInternal _ShardsDistribute_default_instance_;
class ShardsDistribute_VariablesEntry_DoNotUse;
class ShardsDistribute_VariablesEntry_DoNotUseDefaultTypeInternal;
extern ShardsDistribute_VariablesEntry_DoNotUseDefaultTypeInternal _ShardsDistribute_VariablesEntry_DoNotUse_default_instance_;
}  // namespace v1
}  // namespace api
}  // namespace dds
}  // namespace alipay
}  // namespace com
namespace google {
namespace protobuf {
template<> ::com::alipay::dds::api::v1::MarkedDistribution* Arena::CreateMaybeMessage<::com::alipay::dds::api::v1::MarkedDistribution>(Arena*);
template<> ::com::alipay::dds::api::v1::ShardsDistribute* Arena::CreateMaybeMessage<::com::alipay::dds::api::v1::ShardsDistribute>(Arena*);
template<> ::com::alipay::dds::api::v1::ShardsDistribute_VariablesEntry_DoNotUse* Arena::CreateMaybeMessage<::com::alipay::dds::api::v1::ShardsDistribute_VariablesEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace com {
namespace alipay {
namespace dds {
namespace api {
namespace v1 {

// ===================================================================

class MarkedDistribution :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.alipay.dds.api.v1.MarkedDistribution) */ {
 public:
  MarkedDistribution();
  virtual ~MarkedDistribution();

  MarkedDistribution(const MarkedDistribution& from);

  inline MarkedDistribution& operator=(const MarkedDistribution& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MarkedDistribution(MarkedDistribution&& from) noexcept
    : MarkedDistribution() {
    *this = ::std::move(from);
  }

  inline MarkedDistribution& operator=(MarkedDistribution&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const MarkedDistribution& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MarkedDistribution* internal_default_instance() {
    return reinterpret_cast<const MarkedDistribution*>(
               &_MarkedDistribution_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MarkedDistribution* other);
  friend void swap(MarkedDistribution& a, MarkedDistribution& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MarkedDistribution* New() const final {
    return CreateMaybeMessage<MarkedDistribution>(nullptr);
  }

  MarkedDistribution* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MarkedDistribution>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MarkedDistribution& from);
  void MergeFrom(const MarkedDistribution& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MarkedDistribution* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string mark = 1;
  void clear_mark();
  static const int kMarkFieldNumber = 1;
  const ::std::string& mark() const;
  void set_mark(const ::std::string& value);
  #if LANG_CXX11
  void set_mark(::std::string&& value);
  #endif
  void set_mark(const char* value);
  void set_mark(const char* value, size_t size);
  ::std::string* mutable_mark();
  ::std::string* release_mark();
  void set_allocated_mark(::std::string* mark);

  // string distribution = 2;
  void clear_distribution();
  static const int kDistributionFieldNumber = 2;
  const ::std::string& distribution() const;
  void set_distribution(const ::std::string& value);
  #if LANG_CXX11
  void set_distribution(::std::string&& value);
  #endif
  void set_distribution(const char* value);
  void set_distribution(const char* value, size_t size);
  ::std::string* mutable_distribution();
  ::std::string* release_distribution();
  void set_allocated_distribution(::std::string* distribution);

  // @@protoc_insertion_point(class_scope:com.alipay.dds.api.v1.MarkedDistribution)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr mark_;
  ::google::protobuf::internal::ArenaStringPtr distribution_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shardsDistribute_2eproto;
};
// -------------------------------------------------------------------

class ShardsDistribute_VariablesEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<ShardsDistribute_VariablesEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
static bool _ParseMap(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  typedef ::google::protobuf::internal::MapEntry<ShardsDistribute_VariablesEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  ShardsDistribute_VariablesEntry_DoNotUse();
  ShardsDistribute_VariablesEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const ShardsDistribute_VariablesEntry_DoNotUse& other);
  static const ShardsDistribute_VariablesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const ShardsDistribute_VariablesEntry_DoNotUse*>(&_ShardsDistribute_VariablesEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class ShardsDistribute :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.alipay.dds.api.v1.ShardsDistribute) */ {
 public:
  ShardsDistribute();
  virtual ~ShardsDistribute();

  ShardsDistribute(const ShardsDistribute& from);

  inline ShardsDistribute& operator=(const ShardsDistribute& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ShardsDistribute(ShardsDistribute&& from) noexcept
    : ShardsDistribute() {
    *this = ::std::move(from);
  }

  inline ShardsDistribute& operator=(ShardsDistribute&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ShardsDistribute& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ShardsDistribute* internal_default_instance() {
    return reinterpret_cast<const ShardsDistribute*>(
               &_ShardsDistribute_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ShardsDistribute* other);
  friend void swap(ShardsDistribute& a, ShardsDistribute& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ShardsDistribute* New() const final {
    return CreateMaybeMessage<ShardsDistribute>(nullptr);
  }

  ShardsDistribute* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ShardsDistribute>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ShardsDistribute& from);
  void MergeFrom(const ShardsDistribute& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ShardsDistribute* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // repeated .com.alipay.dds.api.v1.MarkedDistribution distributions = 2;
  int distributions_size() const;
  void clear_distributions();
  static const int kDistributionsFieldNumber = 2;
  ::com::alipay::dds::api::v1::MarkedDistribution* mutable_distributions(int index);
  ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedDistribution >*
      mutable_distributions();
  const ::com::alipay::dds::api::v1::MarkedDistribution& distributions(int index) const;
  ::com::alipay::dds::api::v1::MarkedDistribution* add_distributions();
  const ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedDistribution >&
      distributions() const;

  // map<string, string> variables = 3;
  int variables_size() const;
  void clear_variables();
  static const int kVariablesFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      variables() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_variables();

  // repeated .com.alipay.dds.api.v1.MarkedMultiReference extension = 4;
  int extension_size() const;
  void clear_extension();
  static const int kExtensionFieldNumber = 4;
  ::com::alipay::dds::api::v1::MarkedMultiReference* mutable_extension(int index);
  ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedMultiReference >*
      mutable_extension();
  const ::com::alipay::dds::api::v1::MarkedMultiReference& extension(int index) const;
  ::com::alipay::dds::api::v1::MarkedMultiReference* add_extension();
  const ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedMultiReference >&
      extension() const;

  // .com.alipay.dds.api.v1.MetaData metadata = 1;
  bool has_metadata() const;
  void clear_metadata();
  static const int kMetadataFieldNumber = 1;
  const ::com::alipay::dds::api::v1::MetaData& metadata() const;
  ::com::alipay::dds::api::v1::MetaData* release_metadata();
  ::com::alipay::dds::api::v1::MetaData* mutable_metadata();
  void set_allocated_metadata(::com::alipay::dds::api::v1::MetaData* metadata);

  // @@protoc_insertion_point(class_scope:com.alipay.dds.api.v1.ShardsDistribute)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedDistribution > distributions_;
  ::google::protobuf::internal::MapField<
      ShardsDistribute_VariablesEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > variables_;
  ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedMultiReference > extension_;
  ::com::alipay::dds::api::v1::MetaData* metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shardsDistribute_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MarkedDistribution

// string mark = 1;
inline void MarkedDistribution::clear_mark() {
  mark_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MarkedDistribution::mark() const {
  // @@protoc_insertion_point(field_get:com.alipay.dds.api.v1.MarkedDistribution.mark)
  return mark_.GetNoArena();
}
inline void MarkedDistribution::set_mark(const ::std::string& value) {
  
  mark_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.alipay.dds.api.v1.MarkedDistribution.mark)
}
#if LANG_CXX11
inline void MarkedDistribution::set_mark(::std::string&& value) {
  
  mark_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.alipay.dds.api.v1.MarkedDistribution.mark)
}
#endif
inline void MarkedDistribution::set_mark(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  mark_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.alipay.dds.api.v1.MarkedDistribution.mark)
}
inline void MarkedDistribution::set_mark(const char* value, size_t size) {
  
  mark_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.alipay.dds.api.v1.MarkedDistribution.mark)
}
inline ::std::string* MarkedDistribution::mutable_mark() {
  
  // @@protoc_insertion_point(field_mutable:com.alipay.dds.api.v1.MarkedDistribution.mark)
  return mark_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MarkedDistribution::release_mark() {
  // @@protoc_insertion_point(field_release:com.alipay.dds.api.v1.MarkedDistribution.mark)
  
  return mark_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MarkedDistribution::set_allocated_mark(::std::string* mark) {
  if (mark != nullptr) {
    
  } else {
    
  }
  mark_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mark);
  // @@protoc_insertion_point(field_set_allocated:com.alipay.dds.api.v1.MarkedDistribution.mark)
}

// string distribution = 2;
inline void MarkedDistribution::clear_distribution() {
  distribution_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MarkedDistribution::distribution() const {
  // @@protoc_insertion_point(field_get:com.alipay.dds.api.v1.MarkedDistribution.distribution)
  return distribution_.GetNoArena();
}
inline void MarkedDistribution::set_distribution(const ::std::string& value) {
  
  distribution_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.alipay.dds.api.v1.MarkedDistribution.distribution)
}
#if LANG_CXX11
inline void MarkedDistribution::set_distribution(::std::string&& value) {
  
  distribution_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.alipay.dds.api.v1.MarkedDistribution.distribution)
}
#endif
inline void MarkedDistribution::set_distribution(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  distribution_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.alipay.dds.api.v1.MarkedDistribution.distribution)
}
inline void MarkedDistribution::set_distribution(const char* value, size_t size) {
  
  distribution_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.alipay.dds.api.v1.MarkedDistribution.distribution)
}
inline ::std::string* MarkedDistribution::mutable_distribution() {
  
  // @@protoc_insertion_point(field_mutable:com.alipay.dds.api.v1.MarkedDistribution.distribution)
  return distribution_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MarkedDistribution::release_distribution() {
  // @@protoc_insertion_point(field_release:com.alipay.dds.api.v1.MarkedDistribution.distribution)
  
  return distribution_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MarkedDistribution::set_allocated_distribution(::std::string* distribution) {
  if (distribution != nullptr) {
    
  } else {
    
  }
  distribution_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), distribution);
  // @@protoc_insertion_point(field_set_allocated:com.alipay.dds.api.v1.MarkedDistribution.distribution)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// ShardsDistribute

// .com.alipay.dds.api.v1.MetaData metadata = 1;
inline bool ShardsDistribute::has_metadata() const {
  return this != internal_default_instance() && metadata_ != nullptr;
}
inline const ::com::alipay::dds::api::v1::MetaData& ShardsDistribute::metadata() const {
  const ::com::alipay::dds::api::v1::MetaData* p = metadata_;
  // @@protoc_insertion_point(field_get:com.alipay.dds.api.v1.ShardsDistribute.metadata)
  return p != nullptr ? *p : *reinterpret_cast<const ::com::alipay::dds::api::v1::MetaData*>(
      &::com::alipay::dds::api::v1::_MetaData_default_instance_);
}
inline ::com::alipay::dds::api::v1::MetaData* ShardsDistribute::release_metadata() {
  // @@protoc_insertion_point(field_release:com.alipay.dds.api.v1.ShardsDistribute.metadata)
  
  ::com::alipay::dds::api::v1::MetaData* temp = metadata_;
  metadata_ = nullptr;
  return temp;
}
inline ::com::alipay::dds::api::v1::MetaData* ShardsDistribute::mutable_metadata() {
  
  if (metadata_ == nullptr) {
    auto* p = CreateMaybeMessage<::com::alipay::dds::api::v1::MetaData>(GetArenaNoVirtual());
    metadata_ = p;
  }
  // @@protoc_insertion_point(field_mutable:com.alipay.dds.api.v1.ShardsDistribute.metadata)
  return metadata_;
}
inline void ShardsDistribute::set_allocated_metadata(::com::alipay::dds::api::v1::MetaData* metadata) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(metadata_);
  }
  if (metadata) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      metadata = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, metadata, submessage_arena);
    }
    
  } else {
    
  }
  metadata_ = metadata;
  // @@protoc_insertion_point(field_set_allocated:com.alipay.dds.api.v1.ShardsDistribute.metadata)
}

// repeated .com.alipay.dds.api.v1.MarkedDistribution distributions = 2;
inline int ShardsDistribute::distributions_size() const {
  return distributions_.size();
}
inline void ShardsDistribute::clear_distributions() {
  distributions_.Clear();
}
inline ::com::alipay::dds::api::v1::MarkedDistribution* ShardsDistribute::mutable_distributions(int index) {
  // @@protoc_insertion_point(field_mutable:com.alipay.dds.api.v1.ShardsDistribute.distributions)
  return distributions_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedDistribution >*
ShardsDistribute::mutable_distributions() {
  // @@protoc_insertion_point(field_mutable_list:com.alipay.dds.api.v1.ShardsDistribute.distributions)
  return &distributions_;
}
inline const ::com::alipay::dds::api::v1::MarkedDistribution& ShardsDistribute::distributions(int index) const {
  // @@protoc_insertion_point(field_get:com.alipay.dds.api.v1.ShardsDistribute.distributions)
  return distributions_.Get(index);
}
inline ::com::alipay::dds::api::v1::MarkedDistribution* ShardsDistribute::add_distributions() {
  // @@protoc_insertion_point(field_add:com.alipay.dds.api.v1.ShardsDistribute.distributions)
  return distributions_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedDistribution >&
ShardsDistribute::distributions() const {
  // @@protoc_insertion_point(field_list:com.alipay.dds.api.v1.ShardsDistribute.distributions)
  return distributions_;
}

// map<string, string> variables = 3;
inline int ShardsDistribute::variables_size() const {
  return variables_.size();
}
inline void ShardsDistribute::clear_variables() {
  variables_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
ShardsDistribute::variables() const {
  // @@protoc_insertion_point(field_map:com.alipay.dds.api.v1.ShardsDistribute.variables)
  return variables_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
ShardsDistribute::mutable_variables() {
  // @@protoc_insertion_point(field_mutable_map:com.alipay.dds.api.v1.ShardsDistribute.variables)
  return variables_.MutableMap();
}

// repeated .com.alipay.dds.api.v1.MarkedMultiReference extension = 4;
inline int ShardsDistribute::extension_size() const {
  return extension_.size();
}
inline ::com::alipay::dds::api::v1::MarkedMultiReference* ShardsDistribute::mutable_extension(int index) {
  // @@protoc_insertion_point(field_mutable:com.alipay.dds.api.v1.ShardsDistribute.extension)
  return extension_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedMultiReference >*
ShardsDistribute::mutable_extension() {
  // @@protoc_insertion_point(field_mutable_list:com.alipay.dds.api.v1.ShardsDistribute.extension)
  return &extension_;
}
inline const ::com::alipay::dds::api::v1::MarkedMultiReference& ShardsDistribute::extension(int index) const {
  // @@protoc_insertion_point(field_get:com.alipay.dds.api.v1.ShardsDistribute.extension)
  return extension_.Get(index);
}
inline ::com::alipay::dds::api::v1::MarkedMultiReference* ShardsDistribute::add_extension() {
  // @@protoc_insertion_point(field_add:com.alipay.dds.api.v1.ShardsDistribute.extension)
  return extension_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::alipay::dds::api::v1::MarkedMultiReference >&
ShardsDistribute::extension() const {
  // @@protoc_insertion_point(field_list:com.alipay.dds.api.v1.ShardsDistribute.extension)
  return extension_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace api
}  // namespace dds
}  // namespace alipay
}  // namespace com

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_shardsDistribute_2eproto
