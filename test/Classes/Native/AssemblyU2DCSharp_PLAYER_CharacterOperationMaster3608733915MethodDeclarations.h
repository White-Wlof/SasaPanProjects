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

// PLAYER.CharacterOperationMaster
struct CharacterOperationMaster_t3608733915;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void PLAYER.CharacterOperationMaster::.ctor()
extern "C"  void CharacterOperationMaster__ctor_m2807130942 (CharacterOperationMaster_t3608733915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PLAYER.CharacterOperationMaster::playerRotation(UnityEngine.GameObject,System.String)
extern "C"  void CharacterOperationMaster_playerRotation_m476757209 (CharacterOperationMaster_t3608733915 * __this, GameObject_t4012695102 * ___ownObj, String_t* ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PLAYER.CharacterOperationMaster::playerBoost(UnityEngine.Rigidbody,System.Int32)
extern "C"  void CharacterOperationMaster_playerBoost_m2601730905 (CharacterOperationMaster_t3608733915 * __this, Rigidbody_t1972007546 * ___ownRb, int32_t ___boostLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PLAYER.CharacterOperationMaster::shotCannon(UnityEngine.Transform,UnityEngine.Rigidbody,UnityEngine.Vector3,UnityEngine.GameObject,System.Single)
extern "C"  void CharacterOperationMaster_shotCannon_m2322820890 (CharacterOperationMaster_t3608733915 * __this, Transform_t284553113 * ___center, Rigidbody_t1972007546 * ___playerRb, Vector3_t3525329789  ___portsPos, GameObject_t4012695102 * ___ball, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PLAYER.CharacterOperationMaster::shotCannon(UnityEngine.Transform,UnityEngine.Rigidbody,UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  void CharacterOperationMaster_shotCannon_m2896639221 (CharacterOperationMaster_t3608733915 * __this, Transform_t284553113 * ___center, Rigidbody_t1972007546 * ___playerRb, Vector3_t3525329789  ___portsPos, GameObject_t4012695102 * ___ball, const MethodInfo* method) IL2CPP_METHOD_ATTR;
