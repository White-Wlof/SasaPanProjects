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

// Game.PlayerCollider
struct PlayerCollider_t3332416891;
// UnityEngine.Collision
struct Collision_t1119538015;
// UnityEngine.Collider
struct Collider_t955670625;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"

// System.Void Game.PlayerCollider::.ctor()
extern "C"  void PlayerCollider__ctor_m3022094106 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::Start()
extern "C"  void PlayerCollider_Start_m1969231898 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerCollider_OnCollisionEnter_m2184665320 (PlayerCollider_t3332416891 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::OnCollisionStay(UnityEngine.Collision)
extern "C"  void PlayerCollider_OnCollisionStay_m1118703923 (PlayerCollider_t3332416891 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::OnCollisionExit(UnityEngine.Collision)
extern "C"  void PlayerCollider_OnCollisionExit_m1562317006 (PlayerCollider_t3332416891 * __this, Collision_t1119538015 * ___collision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerCollider_OnTriggerEnter_m3418897054 (PlayerCollider_t3332416891 * __this, Collider_t955670625 * ___collider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::offTheTrack()
extern "C"  void PlayerCollider_offTheTrack_m1291217601 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::playerActive(System.Boolean)
extern "C"  void PlayerCollider_playerActive_m2179601672 (PlayerCollider_t3332416891 * __this, bool ___isTrack, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PlayerCollider::wallowPlayer()
extern "C"  void PlayerCollider_wallowPlayer_m451734461 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Game.PlayerCollider::backToTrack()
extern "C"  Il2CppObject * PlayerCollider_backToTrack_m496496073 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Game.PlayerCollider::blackOutPanel()
extern "C"  Il2CppObject * PlayerCollider_blackOutPanel_m4006479573 (PlayerCollider_t3332416891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
