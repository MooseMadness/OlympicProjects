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

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2385310185;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3185359341;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t935315245;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t4134038527;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_Serialization_BaseFixupRec4134038527.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord935315245.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectManager__ctor_m1422617760 (ObjectManager_t2385310185 * __this, Il2CppObject * ___selector0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C"  void ObjectManager_DoFixups_m835924385 (ObjectManager_t2385310185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C"  ObjectRecord_t935315245 * ObjectManager_GetObjectRecord_m2119386789 (ObjectManager_t2385310185 * __this, int64_t ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C"  Il2CppObject * ObjectManager_GetObject_m2241027343 (ObjectManager_t2385310185 * __this, int64_t ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C"  void ObjectManager_RaiseDeserializationEvent_m1611173032 (ObjectManager_t2385310185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializingEvent_m1841526046 (ObjectManager_t2385310185 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializedEvent_m512850179 (ObjectManager_t2385310185 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C"  void ObjectManager_AddFixup_m4148241867 (ObjectManager_t2385310185 * __this, BaseFixupRecord_t4134038527 * ___record0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m2602188984 (ObjectManager_t2385310185 * __this, int64_t ___arrayToBeFixed0, int32_t ___index1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m1047672528 (ObjectManager_t2385310185 * __this, int64_t ___arrayToBeFixed0, Int32U5BU5D_t3315407976* ___indices1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C"  void ObjectManager_RecordDelayedFixup_m1895730844 (ObjectManager_t2385310185 * __this, int64_t ___objectToBeFixed0, String_t* ___memberName1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C"  void ObjectManager_RecordFixup_m3572285566 (ObjectManager_t2385310185 * __this, int64_t ___objectToBeFixed0, MemberInfo_t * ___member1, int64_t ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ObjectManager_RegisterObjectInternal_m879109503 (ObjectManager_t2385310185 * __this, Il2CppObject * ___obj0, ObjectRecord_t935315245 * ___record1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectManager_RegisterObject_m872610295 (ObjectManager_t2385310185 * __this, Il2CppObject * ___obj0, int64_t ___objectID1, SerializationInfo_t1029367511 * ___info2, int64_t ___idOfContainingObj3, MemberInfo_t * ___member4, Int32U5BU5D_t3315407976* ___arrayIndex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
