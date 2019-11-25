// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: http_tests.proto

#ifndef PROTOBUF_http_5ftests_2eproto__INCLUDED
#define PROTOBUF_http_5ftests_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_http_5ftests_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsTestSlaveMessage_SomeSlaveMapEntry_DoNotUseImpl();
void InitDefaultsTestSlaveMessage_SomeSlaveMapEntry_DoNotUse();
void InitDefaultsTestSlaveMessageImpl();
void InitDefaultsTestSlaveMessage();
void InitDefaultsParentMessageImpl();
void InitDefaultsParentMessage();
inline void InitDefaults() {
  InitDefaultsTestSlaveMessage_SomeSlaveMapEntry_DoNotUse();
  InitDefaultsTestSlaveMessage();
  InitDefaultsParentMessage();
}
}  // namespace protobuf_http_5ftests_2eproto
namespace mesos {
namespace test {
class ParentMessage;
class ParentMessageDefaultTypeInternal;
extern ParentMessageDefaultTypeInternal _ParentMessage_default_instance_;
class TestSlaveMessage;
class TestSlaveMessageDefaultTypeInternal;
extern TestSlaveMessageDefaultTypeInternal _TestSlaveMessage_default_instance_;
class TestSlaveMessage_SomeSlaveMapEntry_DoNotUse;
class TestSlaveMessage_SomeSlaveMapEntry_DoNotUseDefaultTypeInternal;
extern TestSlaveMessage_SomeSlaveMapEntry_DoNotUseDefaultTypeInternal _TestSlaveMessage_SomeSlaveMapEntry_DoNotUse_default_instance_;
}  // namespace test
}  // namespace mesos
namespace mesos {
namespace test {

enum TestSlaveMessage_E {
  TestSlaveMessage_E_A_SLAVE_ENUM = 0
};
bool TestSlaveMessage_E_IsValid(int value);
const TestSlaveMessage_E TestSlaveMessage_E_E_MIN = TestSlaveMessage_E_A_SLAVE_ENUM;
const TestSlaveMessage_E TestSlaveMessage_E_E_MAX = TestSlaveMessage_E_A_SLAVE_ENUM;
const int TestSlaveMessage_E_E_ARRAYSIZE = TestSlaveMessage_E_E_MAX + 1;

const ::google::protobuf::EnumDescriptor* TestSlaveMessage_E_descriptor();
inline const ::std::string& TestSlaveMessage_E_Name(TestSlaveMessage_E value) {
  return ::google::protobuf::internal::NameOfEnum(
    TestSlaveMessage_E_descriptor(), value);
}
inline bool TestSlaveMessage_E_Parse(
    const ::std::string& name, TestSlaveMessage_E* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TestSlaveMessage_E>(
    TestSlaveMessage_E_descriptor(), name, value);
}
// ===================================================================

class TestSlaveMessage_SomeSlaveMapEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<TestSlaveMessage_SomeSlaveMapEntry_DoNotUse, 
    bool, bool,
    ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
    ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<TestSlaveMessage_SomeSlaveMapEntry_DoNotUse, 
    bool, bool,
    ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
    ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
    0 > SuperType;
  TestSlaveMessage_SomeSlaveMapEntry_DoNotUse();
  TestSlaveMessage_SomeSlaveMapEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const TestSlaveMessage_SomeSlaveMapEntry_DoNotUse& other);
  static const TestSlaveMessage_SomeSlaveMapEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const TestSlaveMessage_SomeSlaveMapEntry_DoNotUse*>(&_TestSlaveMessage_SomeSlaveMapEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class TestSlaveMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mesos.test.TestSlaveMessage) */ {
 public:
  TestSlaveMessage();
  virtual ~TestSlaveMessage();

  TestSlaveMessage(const TestSlaveMessage& from);

  inline TestSlaveMessage& operator=(const TestSlaveMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestSlaveMessage(TestSlaveMessage&& from) noexcept
    : TestSlaveMessage() {
    *this = ::std::move(from);
  }

  inline TestSlaveMessage& operator=(TestSlaveMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestSlaveMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestSlaveMessage* internal_default_instance() {
    return reinterpret_cast<const TestSlaveMessage*>(
               &_TestSlaveMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TestSlaveMessage* other);
  friend void swap(TestSlaveMessage& a, TestSlaveMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestSlaveMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  TestSlaveMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TestSlaveMessage& from);
  void MergeFrom(const TestSlaveMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(TestSlaveMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  typedef TestSlaveMessage_E E;
  static const E A_SLAVE_ENUM =
    TestSlaveMessage_E_A_SLAVE_ENUM;
  static inline bool E_IsValid(int value) {
    return TestSlaveMessage_E_IsValid(value);
  }
  static const E E_MIN =
    TestSlaveMessage_E_E_MIN;
  static const E E_MAX =
    TestSlaveMessage_E_E_MAX;
  static const int E_ARRAYSIZE =
    TestSlaveMessage_E_E_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  E_descriptor() {
    return TestSlaveMessage_E_descriptor();
  }
  static inline const ::std::string& E_Name(E value) {
    return TestSlaveMessage_E_Name(value);
  }
  static inline bool E_Parse(const ::std::string& name,
      E* value) {
    return TestSlaveMessage_E_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated bool some_slave_fields = 2;
  int some_slave_fields_size() const;
  void clear_some_slave_fields();
  static const int kSomeSlaveFieldsFieldNumber = 2;
  bool some_slave_fields(int index) const;
  void set_some_slave_fields(int index, bool value);
  void add_some_slave_fields(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      some_slave_fields() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_some_slave_fields();

  // map<bool, bool> some_slave_map = 3;
  int some_slave_map_size() const;
  void clear_some_slave_map();
  static const int kSomeSlaveMapFieldNumber = 3;
  const ::google::protobuf::Map< bool, bool >&
      some_slave_map() const;
  ::google::protobuf::Map< bool, bool >*
      mutable_some_slave_map();

  // repeated .mesos.test.TestSlaveMessage.E some_slave_enums = 5;
  int some_slave_enums_size() const;
  void clear_some_slave_enums();
  static const int kSomeSlaveEnumsFieldNumber = 5;
  ::mesos::test::TestSlaveMessage_E some_slave_enums(int index) const;
  void set_some_slave_enums(int index, ::mesos::test::TestSlaveMessage_E value);
  void add_some_slave_enums(::mesos::test::TestSlaveMessage_E value);
  const ::google::protobuf::RepeatedField<int>& some_slave_enums() const;
  ::google::protobuf::RepeatedField<int>* mutable_some_slave_enums();

  // optional bool some_slave_field = 1;
  bool has_some_slave_field() const;
  void clear_some_slave_field();
  static const int kSomeSlaveFieldFieldNumber = 1;
  bool some_slave_field() const;
  void set_some_slave_field(bool value);

  // optional .mesos.test.TestSlaveMessage.E some_slave_enum = 4;
  bool has_some_slave_enum() const;
  void clear_some_slave_enum();
  static const int kSomeSlaveEnumFieldNumber = 4;
  ::mesos::test::TestSlaveMessage_E some_slave_enum() const;
  void set_some_slave_enum(::mesos::test::TestSlaveMessage_E value);

  // @@protoc_insertion_point(class_scope:mesos.test.TestSlaveMessage)
 private:
  void set_has_some_slave_field();
  void clear_has_some_slave_field();
  void set_has_some_slave_enum();
  void clear_has_some_slave_enum();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< bool > some_slave_fields_;
  ::google::protobuf::internal::MapField<
      TestSlaveMessage_SomeSlaveMapEntry_DoNotUse,
      bool, bool,
      ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
      ::google::protobuf::internal::WireFormatLite::TYPE_BOOL,
      0 > some_slave_map_;
  ::google::protobuf::RepeatedField<int> some_slave_enums_;
  bool some_slave_field_;
  int some_slave_enum_;
  friend struct ::protobuf_http_5ftests_2eproto::TableStruct;
  friend void ::protobuf_http_5ftests_2eproto::InitDefaultsTestSlaveMessageImpl();
};
// -------------------------------------------------------------------

class ParentMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mesos.test.ParentMessage) */ {
 public:
  ParentMessage();
  virtual ~ParentMessage();

  ParentMessage(const ParentMessage& from);

  inline ParentMessage& operator=(const ParentMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ParentMessage(ParentMessage&& from) noexcept
    : ParentMessage() {
    *this = ::std::move(from);
  }

  inline ParentMessage& operator=(ParentMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ParentMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ParentMessage* internal_default_instance() {
    return reinterpret_cast<const ParentMessage*>(
               &_ParentMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ParentMessage* other);
  friend void swap(ParentMessage& a, ParentMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ParentMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  ParentMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ParentMessage& from);
  void MergeFrom(const ParentMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ParentMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .mesos.test.TestSlaveMessage some_slave_messages = 2;
  int some_slave_messages_size() const;
  void clear_some_slave_messages();
  static const int kSomeSlaveMessagesFieldNumber = 2;
  const ::mesos::test::TestSlaveMessage& some_slave_messages(int index) const;
  ::mesos::test::TestSlaveMessage* mutable_some_slave_messages(int index);
  ::mesos::test::TestSlaveMessage* add_some_slave_messages();
  ::google::protobuf::RepeatedPtrField< ::mesos::test::TestSlaveMessage >*
      mutable_some_slave_messages();
  const ::google::protobuf::RepeatedPtrField< ::mesos::test::TestSlaveMessage >&
      some_slave_messages() const;

  // optional .mesos.test.TestSlaveMessage some_slave_message = 1;
  bool has_some_slave_message() const;
  void clear_some_slave_message();
  static const int kSomeSlaveMessageFieldNumber = 1;
  const ::mesos::test::TestSlaveMessage& some_slave_message() const;
  ::mesos::test::TestSlaveMessage* release_some_slave_message();
  ::mesos::test::TestSlaveMessage* mutable_some_slave_message();
  void set_allocated_some_slave_message(::mesos::test::TestSlaveMessage* some_slave_message);

  // @@protoc_insertion_point(class_scope:mesos.test.ParentMessage)
 private:
  void set_has_some_slave_message();
  void clear_has_some_slave_message();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::mesos::test::TestSlaveMessage > some_slave_messages_;
  ::mesos::test::TestSlaveMessage* some_slave_message_;
  friend struct ::protobuf_http_5ftests_2eproto::TableStruct;
  friend void ::protobuf_http_5ftests_2eproto::InitDefaultsParentMessageImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// TestSlaveMessage

// optional bool some_slave_field = 1;
inline bool TestSlaveMessage::has_some_slave_field() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestSlaveMessage::set_has_some_slave_field() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestSlaveMessage::clear_has_some_slave_field() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestSlaveMessage::clear_some_slave_field() {
  some_slave_field_ = false;
  clear_has_some_slave_field();
}
inline bool TestSlaveMessage::some_slave_field() const {
  // @@protoc_insertion_point(field_get:mesos.test.TestSlaveMessage.some_slave_field)
  return some_slave_field_;
}
inline void TestSlaveMessage::set_some_slave_field(bool value) {
  set_has_some_slave_field();
  some_slave_field_ = value;
  // @@protoc_insertion_point(field_set:mesos.test.TestSlaveMessage.some_slave_field)
}

// repeated bool some_slave_fields = 2;
inline int TestSlaveMessage::some_slave_fields_size() const {
  return some_slave_fields_.size();
}
inline void TestSlaveMessage::clear_some_slave_fields() {
  some_slave_fields_.Clear();
}
inline bool TestSlaveMessage::some_slave_fields(int index) const {
  // @@protoc_insertion_point(field_get:mesos.test.TestSlaveMessage.some_slave_fields)
  return some_slave_fields_.Get(index);
}
inline void TestSlaveMessage::set_some_slave_fields(int index, bool value) {
  some_slave_fields_.Set(index, value);
  // @@protoc_insertion_point(field_set:mesos.test.TestSlaveMessage.some_slave_fields)
}
inline void TestSlaveMessage::add_some_slave_fields(bool value) {
  some_slave_fields_.Add(value);
  // @@protoc_insertion_point(field_add:mesos.test.TestSlaveMessage.some_slave_fields)
}
inline const ::google::protobuf::RepeatedField< bool >&
TestSlaveMessage::some_slave_fields() const {
  // @@protoc_insertion_point(field_list:mesos.test.TestSlaveMessage.some_slave_fields)
  return some_slave_fields_;
}
inline ::google::protobuf::RepeatedField< bool >*
TestSlaveMessage::mutable_some_slave_fields() {
  // @@protoc_insertion_point(field_mutable_list:mesos.test.TestSlaveMessage.some_slave_fields)
  return &some_slave_fields_;
}

// map<bool, bool> some_slave_map = 3;
inline int TestSlaveMessage::some_slave_map_size() const {
  return some_slave_map_.size();
}
inline void TestSlaveMessage::clear_some_slave_map() {
  some_slave_map_.Clear();
}
inline const ::google::protobuf::Map< bool, bool >&
TestSlaveMessage::some_slave_map() const {
  // @@protoc_insertion_point(field_map:mesos.test.TestSlaveMessage.some_slave_map)
  return some_slave_map_.GetMap();
}
inline ::google::protobuf::Map< bool, bool >*
TestSlaveMessage::mutable_some_slave_map() {
  // @@protoc_insertion_point(field_mutable_map:mesos.test.TestSlaveMessage.some_slave_map)
  return some_slave_map_.MutableMap();
}

// optional .mesos.test.TestSlaveMessage.E some_slave_enum = 4;
inline bool TestSlaveMessage::has_some_slave_enum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestSlaveMessage::set_has_some_slave_enum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestSlaveMessage::clear_has_some_slave_enum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestSlaveMessage::clear_some_slave_enum() {
  some_slave_enum_ = 0;
  clear_has_some_slave_enum();
}
inline ::mesos::test::TestSlaveMessage_E TestSlaveMessage::some_slave_enum() const {
  // @@protoc_insertion_point(field_get:mesos.test.TestSlaveMessage.some_slave_enum)
  return static_cast< ::mesos::test::TestSlaveMessage_E >(some_slave_enum_);
}
inline void TestSlaveMessage::set_some_slave_enum(::mesos::test::TestSlaveMessage_E value) {
  assert(::mesos::test::TestSlaveMessage_E_IsValid(value));
  set_has_some_slave_enum();
  some_slave_enum_ = value;
  // @@protoc_insertion_point(field_set:mesos.test.TestSlaveMessage.some_slave_enum)
}

// repeated .mesos.test.TestSlaveMessage.E some_slave_enums = 5;
inline int TestSlaveMessage::some_slave_enums_size() const {
  return some_slave_enums_.size();
}
inline void TestSlaveMessage::clear_some_slave_enums() {
  some_slave_enums_.Clear();
}
inline ::mesos::test::TestSlaveMessage_E TestSlaveMessage::some_slave_enums(int index) const {
  // @@protoc_insertion_point(field_get:mesos.test.TestSlaveMessage.some_slave_enums)
  return static_cast< ::mesos::test::TestSlaveMessage_E >(some_slave_enums_.Get(index));
}
inline void TestSlaveMessage::set_some_slave_enums(int index, ::mesos::test::TestSlaveMessage_E value) {
  assert(::mesos::test::TestSlaveMessage_E_IsValid(value));
  some_slave_enums_.Set(index, value);
  // @@protoc_insertion_point(field_set:mesos.test.TestSlaveMessage.some_slave_enums)
}
inline void TestSlaveMessage::add_some_slave_enums(::mesos::test::TestSlaveMessage_E value) {
  assert(::mesos::test::TestSlaveMessage_E_IsValid(value));
  some_slave_enums_.Add(value);
  // @@protoc_insertion_point(field_add:mesos.test.TestSlaveMessage.some_slave_enums)
}
inline const ::google::protobuf::RepeatedField<int>&
TestSlaveMessage::some_slave_enums() const {
  // @@protoc_insertion_point(field_list:mesos.test.TestSlaveMessage.some_slave_enums)
  return some_slave_enums_;
}
inline ::google::protobuf::RepeatedField<int>*
TestSlaveMessage::mutable_some_slave_enums() {
  // @@protoc_insertion_point(field_mutable_list:mesos.test.TestSlaveMessage.some_slave_enums)
  return &some_slave_enums_;
}

// -------------------------------------------------------------------

// ParentMessage

// optional .mesos.test.TestSlaveMessage some_slave_message = 1;
inline bool ParentMessage::has_some_slave_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ParentMessage::set_has_some_slave_message() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ParentMessage::clear_has_some_slave_message() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ParentMessage::clear_some_slave_message() {
  if (some_slave_message_ != NULL) some_slave_message_->Clear();
  clear_has_some_slave_message();
}
inline const ::mesos::test::TestSlaveMessage& ParentMessage::some_slave_message() const {
  const ::mesos::test::TestSlaveMessage* p = some_slave_message_;
  // @@protoc_insertion_point(field_get:mesos.test.ParentMessage.some_slave_message)
  return p != NULL ? *p : *reinterpret_cast<const ::mesos::test::TestSlaveMessage*>(
      &::mesos::test::_TestSlaveMessage_default_instance_);
}
inline ::mesos::test::TestSlaveMessage* ParentMessage::release_some_slave_message() {
  // @@protoc_insertion_point(field_release:mesos.test.ParentMessage.some_slave_message)
  clear_has_some_slave_message();
  ::mesos::test::TestSlaveMessage* temp = some_slave_message_;
  some_slave_message_ = NULL;
  return temp;
}
inline ::mesos::test::TestSlaveMessage* ParentMessage::mutable_some_slave_message() {
  set_has_some_slave_message();
  if (some_slave_message_ == NULL) {
    some_slave_message_ = new ::mesos::test::TestSlaveMessage;
  }
  // @@protoc_insertion_point(field_mutable:mesos.test.ParentMessage.some_slave_message)
  return some_slave_message_;
}
inline void ParentMessage::set_allocated_some_slave_message(::mesos::test::TestSlaveMessage* some_slave_message) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete some_slave_message_;
  }
  if (some_slave_message) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      some_slave_message = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, some_slave_message, submessage_arena);
    }
    set_has_some_slave_message();
  } else {
    clear_has_some_slave_message();
  }
  some_slave_message_ = some_slave_message;
  // @@protoc_insertion_point(field_set_allocated:mesos.test.ParentMessage.some_slave_message)
}

// repeated .mesos.test.TestSlaveMessage some_slave_messages = 2;
inline int ParentMessage::some_slave_messages_size() const {
  return some_slave_messages_.size();
}
inline void ParentMessage::clear_some_slave_messages() {
  some_slave_messages_.Clear();
}
inline const ::mesos::test::TestSlaveMessage& ParentMessage::some_slave_messages(int index) const {
  // @@protoc_insertion_point(field_get:mesos.test.ParentMessage.some_slave_messages)
  return some_slave_messages_.Get(index);
}
inline ::mesos::test::TestSlaveMessage* ParentMessage::mutable_some_slave_messages(int index) {
  // @@protoc_insertion_point(field_mutable:mesos.test.ParentMessage.some_slave_messages)
  return some_slave_messages_.Mutable(index);
}
inline ::mesos::test::TestSlaveMessage* ParentMessage::add_some_slave_messages() {
  // @@protoc_insertion_point(field_add:mesos.test.ParentMessage.some_slave_messages)
  return some_slave_messages_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mesos::test::TestSlaveMessage >*
ParentMessage::mutable_some_slave_messages() {
  // @@protoc_insertion_point(field_mutable_list:mesos.test.ParentMessage.some_slave_messages)
  return &some_slave_messages_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mesos::test::TestSlaveMessage >&
ParentMessage::some_slave_messages() const {
  // @@protoc_insertion_point(field_list:mesos.test.ParentMessage.some_slave_messages)
  return some_slave_messages_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace test
}  // namespace mesos

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::mesos::test::TestSlaveMessage_E> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mesos::test::TestSlaveMessage_E>() {
  return ::mesos::test::TestSlaveMessage_E_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_http_5ftests_2eproto__INCLUDED