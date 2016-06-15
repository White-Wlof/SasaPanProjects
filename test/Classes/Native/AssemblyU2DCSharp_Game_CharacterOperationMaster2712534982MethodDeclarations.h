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

// Game.CharacterOperationMaster
struct CharacterOperationMaster_t2712534982;
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

// System.Void Game.CharacterOperationMaster::.ctor()
extern "C"  void CharacterOperationMaster__ctor_m1391503919 (CharacterOperationMaster_t2712534982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharacterOperationMaster::playerRotation(UnityEngine.GameObject,System.String)
extern "C"  void CharacterOperationMaster_playerRotation_m3573846408 (CharacterOperationMaster_t2712534982 * __this, GameObject_t4012695102 * ___ownObj, String_t* ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharacterOperationMaster::playerBoost(UnityEngine.Rigidbody,System.Int32)
extern "C"  void CharacterOperationMaster_playerBoost_m686095690 (CharacterOperationMaster_t2712534982 * __this, Rigidbody_t1972007546 * ___ownRb, int32_t ___boostLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharacterOperationMaster::shotCannon(UnityEngine.Transform,UnityEngine.Rigidbody,UnityEngine.Vector3,UnityEngine.GameObject,System.Single)
extern "C"  void CharacterOperationMaster_shotCannon_m249559881 (CharacterOperationMaster_t2712534982 * __this, Transform_t284553113 * ___center, Rigidbody_t1972007546 * ___playerRb, Vector3_t3525329789  ___portsPos, GameObject_t4012695102 * ___ball, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharacterOperationMaster::shotCannon(UnityEngine.Transform,UnityEngine.Rigidbody,UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  void CharacterOperationMaster_shotCannon_m3081645924 (CharacterOperationMaster_t2712534982 * __this, Transform_t284553113 * ___center, Rigidbody_t1972007546 * ___playerRb, Vector3_t3525329789  ___portsPos, GameObject_t4012695102 * ___ball, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharacterOperationMaster::endGame(UnityEngine.Rigidbody)
extern "C"  void CharacterOperationMaster_endGame_m3916473378 (CharacterOperationMaster_t2712534982 * __this, Rigidbody_t1972007546 * ___playerRb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
