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

// Game.BoatDirectionSystem
struct BoatDirectionSystem_t992795764;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Game.BoatDirectionSystem::.ctor()
extern "C"  void BoatDirectionSystem__ctor_m4088075689 (BoatDirectionSystem_t992795764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.BoatDirectionSystem::Start()
extern "C"  void BoatDirectionSystem_Start_m3035213481 (BoatDirectionSystem_t992795764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.BoatDirectionSystem::Update()
extern "C"  void BoatDirectionSystem_Update_m3903156868 (BoatDirectionSystem_t992795764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.BoatDirectionSystem::rudderRotate(System.Single)
extern "C"  void BoatDirectionSystem_rudderRotate_m1426222693 (BoatDirectionSystem_t992795764 * __this, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.BoatDirectionSystem::autoRudderState(System.Single)
extern "C"  void BoatDirectionSystem_autoRudderState_m895149074 (BoatDirectionSystem_t992795764 * __this, float ___diff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.BoatDirectionSystem::autoRudderRotateStart()
extern "C"  void BoatDirectionSystem_autoRudderRotateStart_m2982680239 (BoatDirectionSystem_t992795764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Game.BoatDirectionSystem::autoRudderRotate(System.Int32)
extern "C"  Il2CppObject * BoatDirectionSystem_autoRudderRotate_m1356316590 (BoatDirectionSystem_t992795764 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Game.BoatDirectionSystem::get_vector_length(UnityEngine.Vector3)
extern "C"  float BoatDirectionSystem_get_vector_length_m4200351941 (BoatDirectionSystem_t992795764 * __this, Vector3_t3525329789  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Game.BoatDirectionSystem::dot_product(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float BoatDirectionSystem_dot_product_m2837728920 (BoatDirectionSystem_t992795764 * __this, Vector3_t3525329789  ___vl, Vector3_t3525329789  ___vr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Game.BoatDirectionSystem::AngleOf2Vector(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float BoatDirectionSystem_AngleOf2Vector_m731552474 (BoatDirectionSystem_t992795764 * __this, Vector3_t3525329789  ___A, Vector3_t3525329789  ___B, const MethodInfo* method) IL2CPP_METHOD_ATTR;
