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
// UnityEngine.GameObject
struct GameObject_t4012695102;

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
	// UnityEngine.Vector3 Game.BoatDirectionSystem::deltaPos
	Vector3_t3525329789  ___deltaPos_7;
	// UnityEngine.Vector3 Game.BoatDirectionSystem::rudderPos
	Vector3_t3525329789  ___rudderPos_8;
	// UnityEngine.GameObject Game.BoatDirectionSystem::rudder
	GameObject_t4012695102 * ___rudder_9;
	// System.Int32 Game.BoatDirectionSystem::autoRotateState
	int32_t ___autoRotateState_10;
	// System.Boolean Game.BoatDirectionSystem::isAutoRotate
	bool ___isAutoRotate_11;

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

	inline static int32_t get_offset_of_deltaPos_7() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___deltaPos_7)); }
	inline Vector3_t3525329789  get_deltaPos_7() const { return ___deltaPos_7; }
	inline Vector3_t3525329789 * get_address_of_deltaPos_7() { return &___deltaPos_7; }
	inline void set_deltaPos_7(Vector3_t3525329789  value)
	{
		___deltaPos_7 = value;
	}

	inline static int32_t get_offset_of_rudderPos_8() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___rudderPos_8)); }
	inline Vector3_t3525329789  get_rudderPos_8() const { return ___rudderPos_8; }
	inline Vector3_t3525329789 * get_address_of_rudderPos_8() { return &___rudderPos_8; }
	inline void set_rudderPos_8(Vector3_t3525329789  value)
	{
		___rudderPos_8 = value;
	}

	inline static int32_t get_offset_of_rudder_9() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___rudder_9)); }
	inline GameObject_t4012695102 * get_rudder_9() const { return ___rudder_9; }
	inline GameObject_t4012695102 ** get_address_of_rudder_9() { return &___rudder_9; }
	inline void set_rudder_9(GameObject_t4012695102 * value)
	{
		___rudder_9 = value;
		Il2CppCodeGenWriteBarrier(&___rudder_9, value);
	}

	inline static int32_t get_offset_of_autoRotateState_10() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___autoRotateState_10)); }
	inline int32_t get_autoRotateState_10() const { return ___autoRotateState_10; }
	inline int32_t* get_address_of_autoRotateState_10() { return &___autoRotateState_10; }
	inline void set_autoRotateState_10(int32_t value)
	{
		___autoRotateState_10 = value;
	}

	inline static int32_t get_offset_of_isAutoRotate_11() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___isAutoRotate_11)); }
	inline bool get_isAutoRotate_11() const { return ___isAutoRotate_11; }
	inline bool* get_address_of_isAutoRotate_11() { return &___isAutoRotate_11; }
	inline void set_isAutoRotate_11(bool value)
	{
		___isAutoRotate_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
