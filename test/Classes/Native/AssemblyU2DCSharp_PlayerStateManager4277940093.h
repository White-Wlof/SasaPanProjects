﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerStateManager
struct PlayerStateManager_t4277940093;
// UserDataManager
struct UserDataManager_t271735736;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerStateManager
struct  PlayerStateManager_t4277940093  : public MonoBehaviour_t3012272455
{
public:
	// UserDataManager PlayerStateManager::data
	UserDataManager_t271735736 * ___data_3;
	// System.Single PlayerStateManager::<ownHp>k__BackingField
	float ___U3CownHpU3Ek__BackingField_4;
	// System.Single PlayerStateManager::<ownAtk>k__BackingField
	float ___U3CownAtkU3Ek__BackingField_5;
	// System.String PlayerStateManager::<rivalName>k__BackingField
	String_t* ___U3CrivalNameU3Ek__BackingField_6;
	// System.Single PlayerStateManager::<rivalHp>k__BackingField
	float ___U3CrivalHpU3Ek__BackingField_7;
	// System.Single PlayerStateManager::<rivalAtk>k__BackingField
	float ___U3CrivalAtkU3Ek__BackingField_8;
	// System.Boolean PlayerStateManager::<cannonMode>k__BackingField
	bool ___U3CcannonModeU3Ek__BackingField_9;
	// System.Boolean PlayerStateManager::<boostFrag>k__BackingField
	bool ___U3CboostFragU3Ek__BackingField_10;
	// System.Int32 PlayerStateManager::<boostLevel>k__BackingField
	int32_t ___U3CboostLevelU3Ek__BackingField_11;
	// System.Single PlayerStateManager::<revivalBoost>k__BackingField
	float ___U3CrevivalBoostU3Ek__BackingField_12;
	// System.Boolean PlayerStateManager::<cannonFrag>k__BackingField
	bool ___U3CcannonFragU3Ek__BackingField_13;
	// System.Single PlayerStateManager::<initialVelocityCannon>k__BackingField
	float ___U3CinitialVelocityCannonU3Ek__BackingField_14;
	// System.Int32 PlayerStateManager::<operability>k__BackingField
	int32_t ___U3CoperabilityU3Ek__BackingField_15;
	// System.Int32 PlayerStateManager::<maxSuccessionCannon>k__BackingField
	int32_t ___U3CmaxSuccessionCannonU3Ek__BackingField_16;
	// System.Int32 PlayerStateManager::<revivalCannon>k__BackingField
	int32_t ___U3CrevivalCannonU3Ek__BackingField_17;
	// System.Int32 PlayerStateManager::<leafCount>k__BackingField
	int32_t ___U3CleafCountU3Ek__BackingField_18;
	// System.Int32 PlayerStateManager::<deadPlayers>k__BackingField
	int32_t ___U3CdeadPlayersU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___data_3)); }
	inline UserDataManager_t271735736 * get_data_3() const { return ___data_3; }
	inline UserDataManager_t271735736 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(UserDataManager_t271735736 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier(&___data_3, value);
	}

	inline static int32_t get_offset_of_U3CownHpU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CownHpU3Ek__BackingField_4)); }
	inline float get_U3CownHpU3Ek__BackingField_4() const { return ___U3CownHpU3Ek__BackingField_4; }
	inline float* get_address_of_U3CownHpU3Ek__BackingField_4() { return &___U3CownHpU3Ek__BackingField_4; }
	inline void set_U3CownHpU3Ek__BackingField_4(float value)
	{
		___U3CownHpU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CownAtkU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CownAtkU3Ek__BackingField_5)); }
	inline float get_U3CownAtkU3Ek__BackingField_5() const { return ___U3CownAtkU3Ek__BackingField_5; }
	inline float* get_address_of_U3CownAtkU3Ek__BackingField_5() { return &___U3CownAtkU3Ek__BackingField_5; }
	inline void set_U3CownAtkU3Ek__BackingField_5(float value)
	{
		___U3CownAtkU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrivalNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CrivalNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CrivalNameU3Ek__BackingField_6() const { return ___U3CrivalNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CrivalNameU3Ek__BackingField_6() { return &___U3CrivalNameU3Ek__BackingField_6; }
	inline void set_U3CrivalNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CrivalNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrivalNameU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CrivalHpU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CrivalHpU3Ek__BackingField_7)); }
	inline float get_U3CrivalHpU3Ek__BackingField_7() const { return ___U3CrivalHpU3Ek__BackingField_7; }
	inline float* get_address_of_U3CrivalHpU3Ek__BackingField_7() { return &___U3CrivalHpU3Ek__BackingField_7; }
	inline void set_U3CrivalHpU3Ek__BackingField_7(float value)
	{
		___U3CrivalHpU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrivalAtkU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CrivalAtkU3Ek__BackingField_8)); }
	inline float get_U3CrivalAtkU3Ek__BackingField_8() const { return ___U3CrivalAtkU3Ek__BackingField_8; }
	inline float* get_address_of_U3CrivalAtkU3Ek__BackingField_8() { return &___U3CrivalAtkU3Ek__BackingField_8; }
	inline void set_U3CrivalAtkU3Ek__BackingField_8(float value)
	{
		___U3CrivalAtkU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CcannonModeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CcannonModeU3Ek__BackingField_9)); }
	inline bool get_U3CcannonModeU3Ek__BackingField_9() const { return ___U3CcannonModeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CcannonModeU3Ek__BackingField_9() { return &___U3CcannonModeU3Ek__BackingField_9; }
	inline void set_U3CcannonModeU3Ek__BackingField_9(bool value)
	{
		___U3CcannonModeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CboostFragU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CboostFragU3Ek__BackingField_10)); }
	inline bool get_U3CboostFragU3Ek__BackingField_10() const { return ___U3CboostFragU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CboostFragU3Ek__BackingField_10() { return &___U3CboostFragU3Ek__BackingField_10; }
	inline void set_U3CboostFragU3Ek__BackingField_10(bool value)
	{
		___U3CboostFragU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CboostLevelU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CboostLevelU3Ek__BackingField_11)); }
	inline int32_t get_U3CboostLevelU3Ek__BackingField_11() const { return ___U3CboostLevelU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CboostLevelU3Ek__BackingField_11() { return &___U3CboostLevelU3Ek__BackingField_11; }
	inline void set_U3CboostLevelU3Ek__BackingField_11(int32_t value)
	{
		___U3CboostLevelU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CrevivalBoostU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CrevivalBoostU3Ek__BackingField_12)); }
	inline float get_U3CrevivalBoostU3Ek__BackingField_12() const { return ___U3CrevivalBoostU3Ek__BackingField_12; }
	inline float* get_address_of_U3CrevivalBoostU3Ek__BackingField_12() { return &___U3CrevivalBoostU3Ek__BackingField_12; }
	inline void set_U3CrevivalBoostU3Ek__BackingField_12(float value)
	{
		___U3CrevivalBoostU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CcannonFragU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CcannonFragU3Ek__BackingField_13)); }
	inline bool get_U3CcannonFragU3Ek__BackingField_13() const { return ___U3CcannonFragU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CcannonFragU3Ek__BackingField_13() { return &___U3CcannonFragU3Ek__BackingField_13; }
	inline void set_U3CcannonFragU3Ek__BackingField_13(bool value)
	{
		___U3CcannonFragU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CinitialVelocityCannonU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CinitialVelocityCannonU3Ek__BackingField_14)); }
	inline float get_U3CinitialVelocityCannonU3Ek__BackingField_14() const { return ___U3CinitialVelocityCannonU3Ek__BackingField_14; }
	inline float* get_address_of_U3CinitialVelocityCannonU3Ek__BackingField_14() { return &___U3CinitialVelocityCannonU3Ek__BackingField_14; }
	inline void set_U3CinitialVelocityCannonU3Ek__BackingField_14(float value)
	{
		___U3CinitialVelocityCannonU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CoperabilityU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CoperabilityU3Ek__BackingField_15)); }
	inline int32_t get_U3CoperabilityU3Ek__BackingField_15() const { return ___U3CoperabilityU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CoperabilityU3Ek__BackingField_15() { return &___U3CoperabilityU3Ek__BackingField_15; }
	inline void set_U3CoperabilityU3Ek__BackingField_15(int32_t value)
	{
		___U3CoperabilityU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CmaxSuccessionCannonU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CmaxSuccessionCannonU3Ek__BackingField_16)); }
	inline int32_t get_U3CmaxSuccessionCannonU3Ek__BackingField_16() const { return ___U3CmaxSuccessionCannonU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CmaxSuccessionCannonU3Ek__BackingField_16() { return &___U3CmaxSuccessionCannonU3Ek__BackingField_16; }
	inline void set_U3CmaxSuccessionCannonU3Ek__BackingField_16(int32_t value)
	{
		___U3CmaxSuccessionCannonU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CrevivalCannonU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CrevivalCannonU3Ek__BackingField_17)); }
	inline int32_t get_U3CrevivalCannonU3Ek__BackingField_17() const { return ___U3CrevivalCannonU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CrevivalCannonU3Ek__BackingField_17() { return &___U3CrevivalCannonU3Ek__BackingField_17; }
	inline void set_U3CrevivalCannonU3Ek__BackingField_17(int32_t value)
	{
		___U3CrevivalCannonU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CleafCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CleafCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CleafCountU3Ek__BackingField_18() const { return ___U3CleafCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CleafCountU3Ek__BackingField_18() { return &___U3CleafCountU3Ek__BackingField_18; }
	inline void set_U3CleafCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CleafCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CdeadPlayersU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093, ___U3CdeadPlayersU3Ek__BackingField_19)); }
	inline int32_t get_U3CdeadPlayersU3Ek__BackingField_19() const { return ___U3CdeadPlayersU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CdeadPlayersU3Ek__BackingField_19() { return &___U3CdeadPlayersU3Ek__BackingField_19; }
	inline void set_U3CdeadPlayersU3Ek__BackingField_19(int32_t value)
	{
		___U3CdeadPlayersU3Ek__BackingField_19 = value;
	}
};

struct PlayerStateManager_t4277940093_StaticFields
{
public:
	// PlayerStateManager PlayerStateManager::_singleInstance
	PlayerStateManager_t4277940093 * ____singleInstance_2;

public:
	inline static int32_t get_offset_of__singleInstance_2() { return static_cast<int32_t>(offsetof(PlayerStateManager_t4277940093_StaticFields, ____singleInstance_2)); }
	inline PlayerStateManager_t4277940093 * get__singleInstance_2() const { return ____singleInstance_2; }
	inline PlayerStateManager_t4277940093 ** get_address_of__singleInstance_2() { return &____singleInstance_2; }
	inline void set__singleInstance_2(PlayerStateManager_t4277940093 * value)
	{
		____singleInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&____singleInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
