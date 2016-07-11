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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.UI.Image
struct Image_t3354615620;
// PlayerStateManager
struct PlayerStateManager_t4277940093;
// PlayerHpView
struct PlayerHpView_t3887621678;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game.PlayerCollider
struct  PlayerCollider_t3332416891  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Game.PlayerCollider::offPanda
	GameObject_t4012695102 * ___offPanda_8;
	// UnityEngine.GameObject Game.PlayerCollider::wallow
	GameObject_t4012695102 * ___wallow_9;
	// UnityEngine.BoxCollider Game.PlayerCollider::ownCollider
	BoxCollider_t131631884 * ___ownCollider_10;
	// UnityEngine.Rigidbody Game.PlayerCollider::playerRb
	Rigidbody_t1972007546 * ___playerRb_11;
	// UnityEngine.GameObject[] Game.PlayerCollider::children
	GameObjectU5BU5D_t3499186955* ___children_12;
	// UnityEngine.UI.Image Game.PlayerCollider::panel
	Image_t3354615620 * ___panel_13;
	// PlayerStateManager Game.PlayerCollider::state
	PlayerStateManager_t4277940093 * ___state_14;
	// PlayerHpView Game.PlayerCollider::hp
	PlayerHpView_t3887621678 * ___hp_15;
	// UnityEngine.Vector3 Game.PlayerCollider::onRiver
	Vector3_t3525329789  ___onRiver_16;
	// System.Boolean Game.PlayerCollider::isField
	bool ___isField_17;
	// System.Boolean Game.PlayerCollider::isRide
	bool ___isRide_18;
	// System.Single Game.PlayerCollider::isFieldTimer
	float ___isFieldTimer_19;
	// UnityEngine.AudioSource Game.PlayerCollider::itemAudio
	AudioSource_t3628549054 * ___itemAudio_20;
	// System.Int32 Game.PlayerCollider::ballDamage
	int32_t ___ballDamage_21;
	// System.Int32 Game.PlayerCollider::fieldDamage
	int32_t ___fieldDamage_22;

public:
	inline static int32_t get_offset_of_offPanda_8() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___offPanda_8)); }
	inline GameObject_t4012695102 * get_offPanda_8() const { return ___offPanda_8; }
	inline GameObject_t4012695102 ** get_address_of_offPanda_8() { return &___offPanda_8; }
	inline void set_offPanda_8(GameObject_t4012695102 * value)
	{
		___offPanda_8 = value;
		Il2CppCodeGenWriteBarrier(&___offPanda_8, value);
	}

	inline static int32_t get_offset_of_wallow_9() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___wallow_9)); }
	inline GameObject_t4012695102 * get_wallow_9() const { return ___wallow_9; }
	inline GameObject_t4012695102 ** get_address_of_wallow_9() { return &___wallow_9; }
	inline void set_wallow_9(GameObject_t4012695102 * value)
	{
		___wallow_9 = value;
		Il2CppCodeGenWriteBarrier(&___wallow_9, value);
	}

	inline static int32_t get_offset_of_ownCollider_10() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___ownCollider_10)); }
	inline BoxCollider_t131631884 * get_ownCollider_10() const { return ___ownCollider_10; }
	inline BoxCollider_t131631884 ** get_address_of_ownCollider_10() { return &___ownCollider_10; }
	inline void set_ownCollider_10(BoxCollider_t131631884 * value)
	{
		___ownCollider_10 = value;
		Il2CppCodeGenWriteBarrier(&___ownCollider_10, value);
	}

	inline static int32_t get_offset_of_playerRb_11() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___playerRb_11)); }
	inline Rigidbody_t1972007546 * get_playerRb_11() const { return ___playerRb_11; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRb_11() { return &___playerRb_11; }
	inline void set_playerRb_11(Rigidbody_t1972007546 * value)
	{
		___playerRb_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerRb_11, value);
	}

	inline static int32_t get_offset_of_children_12() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___children_12)); }
	inline GameObjectU5BU5D_t3499186955* get_children_12() const { return ___children_12; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_children_12() { return &___children_12; }
	inline void set_children_12(GameObjectU5BU5D_t3499186955* value)
	{
		___children_12 = value;
		Il2CppCodeGenWriteBarrier(&___children_12, value);
	}

	inline static int32_t get_offset_of_panel_13() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___panel_13)); }
	inline Image_t3354615620 * get_panel_13() const { return ___panel_13; }
	inline Image_t3354615620 ** get_address_of_panel_13() { return &___panel_13; }
	inline void set_panel_13(Image_t3354615620 * value)
	{
		___panel_13 = value;
		Il2CppCodeGenWriteBarrier(&___panel_13, value);
	}

	inline static int32_t get_offset_of_state_14() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___state_14)); }
	inline PlayerStateManager_t4277940093 * get_state_14() const { return ___state_14; }
	inline PlayerStateManager_t4277940093 ** get_address_of_state_14() { return &___state_14; }
	inline void set_state_14(PlayerStateManager_t4277940093 * value)
	{
		___state_14 = value;
		Il2CppCodeGenWriteBarrier(&___state_14, value);
	}

	inline static int32_t get_offset_of_hp_15() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___hp_15)); }
	inline PlayerHpView_t3887621678 * get_hp_15() const { return ___hp_15; }
	inline PlayerHpView_t3887621678 ** get_address_of_hp_15() { return &___hp_15; }
	inline void set_hp_15(PlayerHpView_t3887621678 * value)
	{
		___hp_15 = value;
		Il2CppCodeGenWriteBarrier(&___hp_15, value);
	}

	inline static int32_t get_offset_of_onRiver_16() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___onRiver_16)); }
	inline Vector3_t3525329789  get_onRiver_16() const { return ___onRiver_16; }
	inline Vector3_t3525329789 * get_address_of_onRiver_16() { return &___onRiver_16; }
	inline void set_onRiver_16(Vector3_t3525329789  value)
	{
		___onRiver_16 = value;
	}

	inline static int32_t get_offset_of_isField_17() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___isField_17)); }
	inline bool get_isField_17() const { return ___isField_17; }
	inline bool* get_address_of_isField_17() { return &___isField_17; }
	inline void set_isField_17(bool value)
	{
		___isField_17 = value;
	}

	inline static int32_t get_offset_of_isRide_18() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___isRide_18)); }
	inline bool get_isRide_18() const { return ___isRide_18; }
	inline bool* get_address_of_isRide_18() { return &___isRide_18; }
	inline void set_isRide_18(bool value)
	{
		___isRide_18 = value;
	}

	inline static int32_t get_offset_of_isFieldTimer_19() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___isFieldTimer_19)); }
	inline float get_isFieldTimer_19() const { return ___isFieldTimer_19; }
	inline float* get_address_of_isFieldTimer_19() { return &___isFieldTimer_19; }
	inline void set_isFieldTimer_19(float value)
	{
		___isFieldTimer_19 = value;
	}

	inline static int32_t get_offset_of_itemAudio_20() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___itemAudio_20)); }
	inline AudioSource_t3628549054 * get_itemAudio_20() const { return ___itemAudio_20; }
	inline AudioSource_t3628549054 ** get_address_of_itemAudio_20() { return &___itemAudio_20; }
	inline void set_itemAudio_20(AudioSource_t3628549054 * value)
	{
		___itemAudio_20 = value;
		Il2CppCodeGenWriteBarrier(&___itemAudio_20, value);
	}

	inline static int32_t get_offset_of_ballDamage_21() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___ballDamage_21)); }
	inline int32_t get_ballDamage_21() const { return ___ballDamage_21; }
	inline int32_t* get_address_of_ballDamage_21() { return &___ballDamage_21; }
	inline void set_ballDamage_21(int32_t value)
	{
		___ballDamage_21 = value;
	}

	inline static int32_t get_offset_of_fieldDamage_22() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891, ___fieldDamage_22)); }
	inline int32_t get_fieldDamage_22() const { return ___fieldDamage_22; }
	inline int32_t* get_address_of_fieldDamage_22() { return &___fieldDamage_22; }
	inline void set_fieldDamage_22(int32_t value)
	{
		___fieldDamage_22 = value;
	}
};

struct PlayerCollider_t3332416891_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.PlayerCollider::<>f__switch$map4
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map4_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.PlayerCollider::<>f__switch$map5
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map5_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.PlayerCollider::<>f__switch$map6
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map6_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.PlayerCollider::<>f__switch$map7
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map7_26;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Game.PlayerCollider::<>f__switch$map8
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map8_27;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_23() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891_StaticFields, ___U3CU3Ef__switchU24map4_23)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map4_23() const { return ___U3CU3Ef__switchU24map4_23; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map4_23() { return &___U3CU3Ef__switchU24map4_23; }
	inline void set_U3CU3Ef__switchU24map4_23(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map4_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_24() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891_StaticFields, ___U3CU3Ef__switchU24map5_24)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map5_24() const { return ___U3CU3Ef__switchU24map5_24; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map5_24() { return &___U3CU3Ef__switchU24map5_24; }
	inline void set_U3CU3Ef__switchU24map5_24(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map5_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_25() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891_StaticFields, ___U3CU3Ef__switchU24map6_25)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map6_25() const { return ___U3CU3Ef__switchU24map6_25; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map6_25() { return &___U3CU3Ef__switchU24map6_25; }
	inline void set_U3CU3Ef__switchU24map6_25(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map6_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map6_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_26() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891_StaticFields, ___U3CU3Ef__switchU24map7_26)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map7_26() const { return ___U3CU3Ef__switchU24map7_26; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map7_26() { return &___U3CU3Ef__switchU24map7_26; }
	inline void set_U3CU3Ef__switchU24map7_26(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map7_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map7_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_27() { return static_cast<int32_t>(offsetof(PlayerCollider_t3332416891_StaticFields, ___U3CU3Ef__switchU24map8_27)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map8_27() const { return ___U3CU3Ef__switchU24map8_27; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map8_27() { return &___U3CU3Ef__switchU24map8_27; }
	inline void set_U3CU3Ef__switchU24map8_27(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map8_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
