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

#include "AssemblyU2DCSharp_Game_CharactorOperationMaster3360730064.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.BoatDirectionSystem
struct  BoatDirectionSystem_t992795764  : public CharactorOperationMaster_t3360730064
{
public:
	// PlayerStateManager Game.BoatDirectionSystem::state
	PlayerStateManager_t4277940093 * ___state_5;
	// UnityEngine.Vector3 Game.BoatDirectionSystem::touchPos
	Vector3_t3525329789  ___touchPos_6;
	// UnityEngine.Vector3 Game.BoatDirectionSystem::detachPos
	Vector3_t3525329789  ___detachPos_7;
	// UnityEngine.Vector3 Game.BoatDirectionSystem::deltaPos
	Vector3_t3525329789  ___deltaPos_8;
	// UnityEngine.Vector3 Game.BoatDirectionSystem::rudderPos
	Vector3_t3525329789  ___rudderPos_9;
	// UnityEngine.GameObject Game.BoatDirectionSystem::rudder
	GameObject_t4012695102 * ___rudder_10;
	// System.Int32 Game.BoatDirectionSystem::autoRotateState
	int32_t ___autoRotateState_11;
	// System.Boolean Game.BoatDirectionSystem::isAutoRotate
	bool ___isAutoRotate_12;

public:
	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___state_5)); }
	inline PlayerStateManager_t4277940093 * get_state_5() const { return ___state_5; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(PlayerStateManager_t4277940093 * value)
	{
		___state_5 = value;
		Il2CppCodeGenWriteBarrier(&___state_5, value);
	}

	inline static int32_t get_offset_of_touchPos_6() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___touchPos_6)); }
	inline Vector3_t3525329789  get_touchPos_6() const { return ___touchPos_6; }
	inline Vector3_t3525329789 * get_address_of_touchPos_6() { return &___touchPos_6; }
	inline void set_touchPos_6(Vector3_t3525329789  value)
	{
		___touchPos_6 = value;
	}

	inline static int32_t get_offset_of_detachPos_7() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___detachPos_7)); }
	inline Vector3_t3525329789  get_detachPos_7() const { return ___detachPos_7; }
	inline Vector3_t3525329789 * get_address_of_detachPos_7() { return &___detachPos_7; }
	inline void set_detachPos_7(Vector3_t3525329789  value)
	{
		___detachPos_7 = value;
	}

	inline static int32_t get_offset_of_deltaPos_8() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___deltaPos_8)); }
	inline Vector3_t3525329789  get_deltaPos_8() const { return ___deltaPos_8; }
	inline Vector3_t3525329789 * get_address_of_deltaPos_8() { return &___deltaPos_8; }
	inline void set_deltaPos_8(Vector3_t3525329789  value)
	{
		___deltaPos_8 = value;
	}

	inline static int32_t get_offset_of_rudderPos_9() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___rudderPos_9)); }
	inline Vector3_t3525329789  get_rudderPos_9() const { return ___rudderPos_9; }
	inline Vector3_t3525329789 * get_address_of_rudderPos_9() { return &___rudderPos_9; }
	inline void set_rudderPos_9(Vector3_t3525329789  value)
	{
		___rudderPos_9 = value;
	}

	inline static int32_t get_offset_of_rudder_10() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___rudder_10)); }
	inline GameObject_t4012695102 * get_rudder_10() const { return ___rudder_10; }
	inline GameObject_t4012695102 ** get_address_of_rudder_10() { return &___rudder_10; }
	inline void set_rudder_10(GameObject_t4012695102 * value)
	{
		___rudder_10 = value;
		Il2CppCodeGenWriteBarrier(&___rudder_10, value);
	}

	inline static int32_t get_offset_of_autoRotateState_11() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___autoRotateState_11)); }
	inline int32_t get_autoRotateState_11() const { return ___autoRotateState_11; }
	inline int32_t* get_address_of_autoRotateState_11() { return &___autoRotateState_11; }
	inline void set_autoRotateState_11(int32_t value)
	{
		___autoRotateState_11 = value;
	}

	inline static int32_t get_offset_of_isAutoRotate_12() { return static_cast<int32_t>(offsetof(BoatDirectionSystem_t992795764, ___isAutoRotate_12)); }
	inline bool get_isAutoRotate_12() const { return ___isAutoRotate_12; }
	inline bool* get_address_of_isAutoRotate_12() { return &___isAutoRotate_12; }
	inline void set_isAutoRotate_12(bool value)
	{
		___isAutoRotate_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
