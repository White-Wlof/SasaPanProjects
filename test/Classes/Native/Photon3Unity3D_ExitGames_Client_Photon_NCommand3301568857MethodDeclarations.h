﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ExitGames.Client.Photon.NCommand
struct NCommand_t3301568857;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t4023410422;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ExitGames.Client.IProtocol
struct IProtocol_t2724506835;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EnetPeer4023410422.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand3301568857.h"
#include "Photon3Unity3D_ExitGames_Client_IProtocol2724506835.h"

// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
extern "C"  void NCommand__ctor_m3294593470 (NCommand_t3301568857 * __this, EnetPeer_t4023410422 * ___peer, uint8_t ___commandType, ByteU5BU5D_t58506160* ___payload, uint8_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
extern "C"  NCommand_t3301568857 * NCommand_CreateAck_m2365736060 (Il2CppObject * __this /* static, unused */, EnetPeer_t4023410422 * ___peer, NCommand_t3301568857 * ___commandToAck, int32_t ___sentTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
extern "C"  void NCommand__ctor_m4058016265 (NCommand_t3301568857 * __this, EnetPeer_t4023410422 * ___peer, ByteU5BU5D_t58506160* ___inBuff, int32_t* ___readingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize(ExitGames.Client.IProtocol)
extern "C"  ByteU5BU5D_t58506160* NCommand_Serialize_m2068484208 (NCommand_t3301568857 * __this, IProtocol_t2724506835 * ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
extern "C"  int32_t NCommand_CompareTo_m3967483804 (NCommand_t3301568857 * __this, NCommand_t3301568857 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
extern "C"  String_t* NCommand_ToString_m3839616398 (NCommand_t3301568857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
