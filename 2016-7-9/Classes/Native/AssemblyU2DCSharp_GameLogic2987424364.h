﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonView
struct PhotonView_t1498838369;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic
struct  GameLogic_t2987424364  : public MonoBehaviour_t4025988718
{
public:

public:
};

struct GameLogic_t2987424364_StaticFields
{
public:
	// System.Int32 GameLogic::playerWhoIsIt
	int32_t ___playerWhoIsIt_3;
	// PhotonView GameLogic::ScenePhotonView
	PhotonView_t1498838369 * ___ScenePhotonView_4;

public:
	inline static int32_t get_offset_of_playerWhoIsIt_3() { return static_cast<int32_t>(offsetof(GameLogic_t2987424364_StaticFields, ___playerWhoIsIt_3)); }
	inline int32_t get_playerWhoIsIt_3() const { return ___playerWhoIsIt_3; }
	inline int32_t* get_address_of_playerWhoIsIt_3() { return &___playerWhoIsIt_3; }
	inline void set_playerWhoIsIt_3(int32_t value)
	{
		___playerWhoIsIt_3 = value;
	}

	inline static int32_t get_offset_of_ScenePhotonView_4() { return static_cast<int32_t>(offsetof(GameLogic_t2987424364_StaticFields, ___ScenePhotonView_4)); }
	inline PhotonView_t1498838369 * get_ScenePhotonView_4() const { return ___ScenePhotonView_4; }
	inline PhotonView_t1498838369 ** get_address_of_ScenePhotonView_4() { return &___ScenePhotonView_4; }
	inline void set_ScenePhotonView_4(PhotonView_t1498838369 * value)
	{
		___ScenePhotonView_4 = value;
		Il2CppCodeGenWriteBarrier(&___ScenePhotonView_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
