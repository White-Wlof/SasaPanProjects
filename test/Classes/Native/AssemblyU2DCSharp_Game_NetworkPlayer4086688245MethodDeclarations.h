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

// Game.NetworkPlayer
struct NetworkPlayer_t4086688245;
// PhotonStream
struct PhotonStream_t1494272828;
// PhotonMessageInfo
struct PhotonMessageInfo_t259585817;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void Game.NetworkPlayer::.ctor()
extern "C"  void NetworkPlayer__ctor_m1446875208 (NetworkPlayer_t4086688245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.NetworkPlayer::Update()
extern "C"  void NetworkPlayer_Update_m3630320581 (NetworkPlayer_t4086688245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.NetworkPlayer::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void NetworkPlayer_OnPhotonSerializeView_m3942151495 (NetworkPlayer_t4086688245 * __this, PhotonStream_t1494272828 * ___stream, PhotonMessageInfo_t259585817 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
