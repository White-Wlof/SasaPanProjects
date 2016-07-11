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

// Game.RivalCollider
struct RivalCollider_t740404964;
// UnityEngine.Collision
struct Collision_t1119538015;
// UnityEngine.Collider
struct Collider_t955670625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"

// System.Void Game.RivalCollider::.ctor()
extern "C"  void RivalCollider__ctor_m3577669689 (RivalCollider_t740404964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.RivalCollider::Start()
extern "C"  void RivalCollider_Start_m2524807481 (RivalCollider_t740404964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.RivalCollider::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void RivalCollider_OnCollisionEnter_m2828043783 (RivalCollider_t740404964 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.RivalCollider::OnCollisionStay(UnityEngine.Collision)
extern "C"  void RivalCollider_OnCollisionStay_m2247836724 (RivalCollider_t740404964 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.RivalCollider::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void RivalCollider_OnTriggerEnter_m2736273887 (RivalCollider_t740404964 * __this, Collider_t955670625 * ___collider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
