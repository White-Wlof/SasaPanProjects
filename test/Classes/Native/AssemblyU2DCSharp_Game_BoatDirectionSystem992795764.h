#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerStateManager
struct PlayerStateManager_t4277940093;

#include "AssemblyU2DCSharp_Game_CharacterOperationMaster2712534982.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.BoatDirectionSystem
struct  BoatDirectionSystem_t992795764  : public CharacterOperationMaster_t2712534982
{
public:
	// PlayerStateManager Game.BoatDirectionSystem::state
	PlayerStateManager_t4277940093 * ___state_4;
	// UnityEngine.Vector3 Game.BoatDirectionSystem::touchPos
	Vector3_t3525329789  ___touchPos_5;
	// UnityEngine.Vector3 Game.BoatDirectionSystem::detachPos
	Vector3_t3525329789  ___detachPos_6;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___state_4)); }
	inline PlayerStateManager_t4277940093 * get_state_4() const { return ___state_4; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(PlayerStateManager_t4277940093 * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_touchPos_5() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___touchPos_5)); }
	inline Vector3_t3525329789  get_touchPos_5() const { return ___touchPos_5; }
	inline Vector3_t3525329789 * get_address_of_touchPos_5() { return &___touchPos_5; }
	inline void set_touchPos_5(Vector3_t3525329789  value)
	{
		___touchPos_5 = value;
	}

	inline static int32_t get_offset_of_detachPos_6() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___detachPos_6)); }
	inline Vector3_t3525329789  get_detachPos_6() const { return ___detachPos_6; }
	inline Vector3_t3525329789 * get_address_of_detachPos_6() { return &___detachPos_6; }
	inline void set_detachPos_6(Vector3_t3525329789  value)
	{
		___detachPos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
