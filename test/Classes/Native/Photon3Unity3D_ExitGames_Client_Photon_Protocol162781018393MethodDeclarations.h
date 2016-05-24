#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ExitGames.Client.Photon.Protocol16
struct Protocol16_t2781018393;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t3861919108;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t2644772068;
// ExitGames.Client.Photon.EventData
struct EventData_t4221167488;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_MemoryStream2881531048.h"
#include "mscorlib_System_Object837106420.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Protocol16_2138726371.h"
#include "mscorlib_System_Type2779229935.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3861919108.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe2644772068.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData4221167488.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Array2840145358.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"

// System.Byte[] ExitGames.Client.Photon.Protocol16::get_VersionBytes()
extern "C"  ByteU5BU5D_t58506160* Protocol16_get_VersionBytes_m4201112357 (Protocol16_t2781018393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::SerializeCustom(System.IO.MemoryStream,System.Object)
extern "C"  bool Protocol16_SerializeCustom_m924802690 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, Il2CppObject * ___serObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol16::DeserializeCustom(System.IO.MemoryStream,System.Byte)
extern "C"  Il2CppObject * Protocol16_DeserializeCustom_m2392697273 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, uint8_t ___customTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol16::GetTypeOfCode(System.Byte)
extern "C"  Type_t * Protocol16_GetTypeOfCode_m729041006 (Protocol16_t2781018393 * __this, uint8_t ___typeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Protocol16/GpType ExitGames.Client.Photon.Protocol16::GetCodeOfType(System.Type)
extern "C"  uint8_t Protocol16_GetCodeOfType_m417056570 (Protocol16_t2781018393 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol16::CreateArrayByType(System.Byte,System.Int16)
extern "C"  Il2CppArray * Protocol16_CreateArrayByType_m2111805490 (Protocol16_t2781018393 * __this, uint8_t ___arrayType, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationRequest(System.IO.MemoryStream,ExitGames.Client.Photon.OperationRequest,System.Boolean)
extern "C"  void Protocol16_SerializeOperationRequest_m3894482042 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___memStream, OperationRequest_t3861919108 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationRequest(System.IO.MemoryStream,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  void Protocol16_SerializeOperationRequest_m429765319 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___memStream, uint8_t ___operationCode, Dictionary_2_t3871407537 * ___parameters, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol16::DeserializeOperationRequest(System.IO.MemoryStream)
extern "C"  OperationRequest_t3861919108 * Protocol16_DeserializeOperationRequest_m2714285731 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeOperationResponse(System.IO.MemoryStream,ExitGames.Client.Photon.OperationResponse,System.Boolean)
extern "C"  void Protocol16_SerializeOperationResponse_m3075154498 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___memStream, OperationResponse_t2644772068 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol16::DeserializeOperationResponse(System.IO.MemoryStream)
extern "C"  OperationResponse_t2644772068 * Protocol16_DeserializeOperationResponse_m2758114691 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeEventData(System.IO.MemoryStream,ExitGames.Client.Photon.EventData,System.Boolean)
extern "C"  void Protocol16_SerializeEventData_m516571586 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___memStream, EventData_t4221167488 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol16::DeserializeEventData(System.IO.MemoryStream)
extern "C"  EventData_t4221167488 * Protocol16_DeserializeEventData_m1655360771 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeParameterTable(System.IO.MemoryStream,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void Protocol16_SerializeParameterTable_m4066339998 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___memStream, Dictionary_2_t3871407537 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol16::DeserializeParameterTable(System.IO.MemoryStream)
extern "C"  Dictionary_2_t3871407537 * Protocol16_DeserializeParameterTable_m1932292488 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Serialize(System.IO.MemoryStream,System.Object,System.Boolean)
extern "C"  void Protocol16_Serialize_m3669576982 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, Il2CppObject * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByte(System.IO.MemoryStream,System.Byte,System.Boolean)
extern "C"  void Protocol16_SerializeByte_m2147987575 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, uint8_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeBoolean(System.IO.MemoryStream,System.Boolean,System.Boolean)
extern "C"  void Protocol16_SerializeBoolean_m232552221 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, bool ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeShort(System.IO.MemoryStream,System.Int16,System.Boolean)
extern "C"  void Protocol16_SerializeShort_m3641908061 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, int16_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Serialize(System.Int16,System.Byte[],System.Int32&)
extern "C"  void Protocol16_Serialize_m474547014 (Protocol16_t2781018393 * __this, int16_t ___value, ByteU5BU5D_t58506160* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeInteger(System.IO.MemoryStream,System.Int32,System.Boolean)
extern "C"  void Protocol16_SerializeInteger_m4179521497 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, int32_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C"  void Protocol16_Serialize_m1130882380 (Protocol16_t2781018393 * __this, int32_t ___value, ByteU5BU5D_t58506160* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeLong(System.IO.MemoryStream,System.Int64,System.Boolean)
extern "C"  void Protocol16_SerializeLong_m19134650 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, int64_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeFloat(System.IO.MemoryStream,System.Single,System.Boolean)
extern "C"  void Protocol16_SerializeFloat_m482816103 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, float ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Serialize(System.Single,System.Byte[],System.Int32&)
extern "C"  void Protocol16_Serialize_m3818751808 (Protocol16_t2781018393 * __this, float ___value, ByteU5BU5D_t58506160* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDouble(System.IO.MemoryStream,System.Double,System.Boolean)
extern "C"  void Protocol16_SerializeDouble_m3957084119 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, double ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeString(System.IO.MemoryStream,System.String,System.Boolean)
extern "C"  void Protocol16_SerializeString_m4191287255 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, String_t* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeArray(System.IO.MemoryStream,System.Array,System.Boolean)
extern "C"  void Protocol16_SerializeArray_m1498623679 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, Il2CppArray * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeByteArray(System.IO.MemoryStream,System.Byte[],System.Boolean)
extern "C"  void Protocol16_SerializeByteArray_m2131196116 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, ByteU5BU5D_t58506160* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeIntArrayOptimized(System.IO.MemoryStream,System.Int32[],System.Boolean)
extern "C"  void Protocol16_SerializeIntArrayOptimized_m1730662042 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___inWriter, Int32U5BU5D_t1809983122* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeObjectArray(System.IO.MemoryStream,System.Object[],System.Boolean)
extern "C"  void Protocol16_SerializeObjectArray_m1478699778 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, ObjectU5BU5D_t11523773* ___objects, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeHashTable(System.IO.MemoryStream,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Protocol16_SerializeHashTable_m805623138 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, Hashtable_t223732124 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionary(System.IO.MemoryStream,System.Collections.IDictionary,System.Boolean)
extern "C"  void Protocol16_SerializeDictionary_m324793229 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___dout, Il2CppObject * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryHeader(System.IO.MemoryStream,System.Type)
extern "C"  void Protocol16_SerializeDictionaryHeader_m3531999119 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___writer, Type_t * ___dictType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryHeader(System.IO.MemoryStream,System.Object,System.Boolean&,System.Boolean&)
extern "C"  void Protocol16_SerializeDictionaryHeader_m899247624 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___writer, Il2CppObject * ___dict, bool* ___setKeyType, bool* ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::SerializeDictionaryElements(System.IO.MemoryStream,System.Object,System.Boolean,System.Boolean)
extern "C"  void Protocol16_SerializeDictionaryElements_m258336884 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___writer, Il2CppObject * ___dict, bool ___setKeyType, bool ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol16::Deserialize(System.IO.MemoryStream,System.Byte)
extern "C"  Il2CppObject * Protocol16_Deserialize_m2839955368 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol16::DeserializeByte(System.IO.MemoryStream)
extern "C"  uint8_t Protocol16_DeserializeByte_m3601738164 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::DeserializeBoolean(System.IO.MemoryStream)
extern "C"  bool Protocol16_DeserializeBoolean_m2158385684 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol16::DeserializeShort(System.IO.MemoryStream)
extern "C"  int16_t Protocol16_DeserializeShort_m606863932 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Deserialize(System.Int16&,System.Byte[],System.Int32&)
extern "C"  void Protocol16_Deserialize_m813136375 (Protocol16_t2781018393 * __this, int16_t* ___value, ByteU5BU5D_t58506160* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol16::DeserializeInteger(System.IO.MemoryStream)
extern "C"  int32_t Protocol16_DeserializeInteger_m2312251204 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C"  void Protocol16_Deserialize_m3979663537 (Protocol16_t2781018393 * __this, int32_t* ___value, ByteU5BU5D_t58506160* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol16::DeserializeLong(System.IO.MemoryStream)
extern "C"  int64_t Protocol16_DeserializeLong_m3233621731 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol16::DeserializeFloat(System.IO.MemoryStream)
extern "C"  float Protocol16_DeserializeFloat_m4006860414 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::Deserialize(System.Single&,System.Byte[],System.Int32&)
extern "C"  void Protocol16_Deserialize_m2888038491 (Protocol16_t2781018393 * __this, float* ___value, ByteU5BU5D_t58506160* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol16::DeserializeDouble(System.IO.MemoryStream)
extern "C"  double Protocol16_DeserializeDouble_m4130316806 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol16::DeserializeString(System.IO.MemoryStream)
extern "C"  String_t* Protocol16_DeserializeString_m2022455942 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol16::DeserializeArray(System.IO.MemoryStream)
extern "C"  Il2CppArray * Protocol16_DeserializeArray_m4188302644 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol16::DeserializeByteArray(System.IO.MemoryStream)
extern "C"  ByteU5BU5D_t58506160* Protocol16_DeserializeByteArray_m3322699761 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol16::DeserializeIntArray(System.IO.MemoryStream)
extern "C"  Int32U5BU5D_t1809983122* Protocol16_DeserializeIntArray_m2839987412 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol16::DeserializeStringArray(System.IO.MemoryStream)
extern "C"  StringU5BU5D_t2956870243* Protocol16_DeserializeStringArray_m813426975 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol16::DeserializeObjectArray(System.IO.MemoryStream)
extern "C"  ObjectU5BU5D_t11523773* Protocol16_DeserializeObjectArray_m1279324739 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol16::DeserializeHashTable(System.IO.MemoryStream)
extern "C"  Hashtable_t223732124 * Protocol16_DeserializeHashTable_m445875299 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol16::DeserializeDictionary(System.IO.MemoryStream)
extern "C"  Il2CppObject * Protocol16_DeserializeDictionary_m1957832182 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol16::DeserializeDictionaryArray(System.IO.MemoryStream,System.Int16,System.Array&)
extern "C"  bool Protocol16_DeserializeDictionaryArray_m3987390018 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___din, int16_t ___size, Il2CppArray ** ___arrayResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol16::DeserializeDictionaryType(System.IO.MemoryStream,System.Byte&,System.Byte&)
extern "C"  Type_t * Protocol16_DeserializeDictionaryType_m1921275374 (Protocol16_t2781018393 * __this, MemoryStream_t2881531048 * ___reader, uint8_t* ___keyTypeCode, uint8_t* ___valTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol16::.ctor()
extern "C"  void Protocol16__ctor_m2850290149 (Protocol16_t2781018393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
