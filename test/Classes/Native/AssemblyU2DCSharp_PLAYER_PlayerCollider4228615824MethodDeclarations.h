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

// PLAYER.PlayerCollider
struct PlayerCollider_t4228615824;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void PLAYER.PlayerCollider::.ctor()
extern "C"  void PlayerCollider__ctor_m1176401641 (PlayerCollider_t4228615824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PLAYER.PlayerCollider::Start()
extern "C"  void PlayerCollider_Start_m123539433 (PlayerCollider_t4228615824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PLAYER.PlayerCollider::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerCollider_OnCollisionEnter_m201938103 (PlayerCollider_t4228615824 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PLAYER.PlayerCollider::OnCollisionStay(UnityEngine.Collision)
extern "C"  void PlayerCollider_OnCollisionStay_m500555652 (PlayerCollider_t4228615824 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
