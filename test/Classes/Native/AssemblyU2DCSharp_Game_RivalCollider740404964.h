#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// PlayerStateManager
struct PlayerStateManager_t4277940093;
// PlayerHpView
struct PlayerHpView_t3887621678;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.RivalCollider
struct  RivalCollider_t740404964  : public MonoBehaviour_t3012272455
{
public:
	// PlayerStateManager Game.RivalCollider::state
	PlayerStateManager_t4277940093 * ___state_5;
	// PlayerHpView Game.RivalCollider::hp
	PlayerHpView_t3887621678 * ___hp_6;
	// System.Int32 Game.RivalCollider::ballDamage
	int32_t ___ballDamage_7;
	// System.Int32 Game.RivalCollider::fieldDamage
	int32_t ___fieldDamage_8;

public:
	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(RivalCollider_t740404964, ___state_5)); }
	inline PlayerStateManager_t4277940093 * get_state_5() const { return ___state_5; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(PlayerStateManager_t4277940093 * value)
	{
		___state_5 = value;
		Il2CppCodeGenWriteBarrier(&___state_5, value);
	}

	inline static int32_t get_offset_of_hp_6() { return static_cast<int32_t>(offsetof(RivalCollider_t740404964, ___hp_6)); }
	inline PlayerHpView_t3887621678 * get_hp_6() const { return ___hp_6; }
	inline PlayerHpView_t3887621678 ** get_address_of_hp_6() { return &___hp_6; }
	inline void set_hp_6(PlayerHpView_t3887621678 * value)
	{
		___hp_6 = value;
		Il2CppCodeGenWriteBarrier(&___hp_6, value);
	}

	inline static int32_t get_offset_of_ballDamage_7() { return static_cast<int32_t>(offsetof(RivalCollider_t740404964, ___ballDamage_7)); }
	inline int32_t get_ballDamage_7() const { return ___ballDamage_7; }
	inline int32_t* get_address_of_ballDamage_7() { return &___ballDamage_7; }
	inline void set_ballDamage_7(int32_t value)
	{
		___ballDamage_7 = value;
	}

	inline static int32_t get_offset_of_fieldDamage_8() { return static_cast<int32_t>(offsetof(RivalCollider_t740404964, ___fieldDamage_8)); }
	inline int32_t get_fieldDamage_8() const { return ___fieldDamage_8; }
	inline int32_t* get_address_of_fieldDamage_8() { return &___fieldDamage_8; }
	inline void set_fieldDamage_8(int32_t value)
	{
		___fieldDamage_8 = value;
	}
};

struct RivalCollider_t740404964_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.RivalCollider::<>f__switch$map7
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map7_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.RivalCollider::<>f__switch$map8
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map8_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_9() { return static_cast<int32_t>(offsetof(RivalCollider_t740404964_StaticFields, ___U3CU3Ef__switchU24map7_9)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map7_9() const { return ___U3CU3Ef__switchU24map7_9; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map7_9() { return &___U3CU3Ef__switchU24map7_9; }
	inline void set_U3CU3Ef__switchU24map7_9(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map7_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map7_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_10() { return static_cast<int32_t>(offsetof(RivalCollider_t740404964_StaticFields, ___U3CU3Ef__switchU24map8_10)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map8_10() const { return ___U3CU3Ef__switchU24map8_10; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map8_10() { return &___U3CU3Ef__switchU24map8_10; }
	inline void set_U3CU3Ef__switchU24map8_10(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
