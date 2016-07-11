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

// Game.CharactorOperationMaster
struct CharactorOperationMaster_t3360730064;
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

// System.Void Game.CharactorOperationMaster::.ctor()
extern "C"  void CharactorOperationMaster__ctor_m1701701989 (CharactorOperationMaster_t3360730064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharactorOperationMaster::playerRotation(UnityEngine.GameObject,System.String,System.Int32)
extern "C"  void CharactorOperationMaster_playerRotation_m3449747461 (CharactorOperationMaster_t3360730064 * __this, GameObject_t4012695102 * ___ownObj, String_t* ___direction, int32_t ___operability, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharactorOperationMaster::playerBoost(UnityEngine.GameObject,UnityEngine.Rigidbody,System.Int32)
extern "C"  void CharactorOperationMaster_playerBoost_m2257059876 (CharactorOperationMaster_t3360730064 * __this, GameObject_t4012695102 * ___player, Rigidbody_t1972007546 * ___ownRb, int32_t ___boostLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharactorOperationMaster::shotCannon(UnityEngine.Transform,UnityEngine.Rigidbody,UnityEngine.Vector3,UnityEngine.GameObject,System.Single)
extern "C"  void CharactorOperationMaster_shotCannon_m1820164307 (CharactorOperationMaster_t3360730064 * __this, Transform_t284553113 * ___center, Rigidbody_t1972007546 * ___playerRb, Vector3_t3525329789  ___portsPos, GameObject_t4012695102 * ___ball, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharactorOperationMaster::shotCannon(UnityEngine.Transform,UnityEngine.Rigidbody,UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  void CharactorOperationMaster_shotCannon_m3061567086 (CharactorOperationMaster_t3360730064 * __this, Transform_t284553113 * ___center, Rigidbody_t1972007546 * ___playerRb, Vector3_t3525329789  ___portsPos, GameObject_t4012695102 * ___ball, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.CharactorOperationMaster::endGame(UnityEngine.Rigidbody)
extern "C"  void CharactorOperationMaster_endGame_m3838879788 (CharactorOperationMaster_t3360730064 * __this, Rigidbody_t1972007546 * ___playerRb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
