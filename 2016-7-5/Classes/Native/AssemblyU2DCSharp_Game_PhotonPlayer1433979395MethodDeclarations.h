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

// Game.PhotonPlayer
struct PhotonPlayer_t1433979395;
// PhotonStream
struct PhotonStream_t1494272828;
// PhotonMessageInfo
struct PhotonMessageInfo_t259585817;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void Game.PhotonPlayer::.ctor()
extern "C"  void PhotonPlayer__ctor_m103990930 (PhotonPlayer_t1433979395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PhotonPlayer::Awake()
extern "C"  void PhotonPlayer_Awake_m341596149 (PhotonPlayer_t1433979395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PhotonPlayer::Start()
extern "C"  void PhotonPlayer_Start_m3346096018 (PhotonPlayer_t1433979395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PhotonPlayer::Update()
extern "C"  void PhotonPlayer_Update_m655613627 (PhotonPlayer_t1433979395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game.PhotonPlayer::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonPlayer_OnPhotonSerializeView_m2945333777 (PhotonPlayer_t1433979395 * __this, PhotonStream_t1494272828 * ___stream, PhotonMessageInfo_t259585817 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
