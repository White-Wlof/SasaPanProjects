#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UserDataManager
struct UserDataManager_t271735736;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserInfo
struct  UserInfo_t4092807993  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text UserInfo::level
	Text_t3286458198 * ___level_2;
	// UnityEngine.UI.Text UserInfo::userName
	Text_t3286458198 * ___userName_3;
	// UnityEngine.UI.Text UserInfo::goldSasa
	Text_t3286458198 * ___goldSasa_4;
	// UnityEngine.UI.Text UserInfo::normalSasa
	Text_t3286458198 * ___normalSasa_5;
	// UnityEngine.UI.Image UserInfo::experience
	Image_t3354615620 * ___experience_6;
	// UserDataManager UserInfo::data
	UserDataManager_t271735736 * ___data_7;

public:
	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(UserInfo_t4092807993, ___level_2)); }
	inline Text_t3286458198 * get_level_2() const { return ___level_2; }
	inline Text_t3286458198 ** get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(Text_t3286458198 * value)
	{
		___level_2 = value;
		Il2CppCodeGenWriteBarrier(&___level_2, value);
	}

	inline static int32_t get_offset_of_userName_3() { return static_cast<int32_t>(offsetof(UserInfo_t4092807993, ___userName_3)); }
	inline Text_t3286458198 * get_userName_3() const { return ___userName_3; }
	inline Text_t3286458198 ** get_address_of_userName_3() { return &___userName_3; }
	inline void set_userName_3(Text_t3286458198 * value)
	{
		___userName_3 = value;
		Il2CppCodeGenWriteBarrier(&___userName_3, value);
	}

	inline static int32_t get_offset_of_goldSasa_4() { return static_cast<int32_t>(offsetof(UserInfo_t4092807993, ___goldSasa_4)); }
	inline Text_t3286458198 * get_goldSasa_4() const { return ___goldSasa_4; }
	inline Text_t3286458198 ** get_address_of_goldSasa_4() { return &___goldSasa_4; }
	inline void set_goldSasa_4(Text_t3286458198 * value)
	{
		___goldSasa_4 = value;
		Il2CppCodeGenWriteBarrier(&___goldSasa_4, value);
	}

	inline static int32_t get_offset_of_normalSasa_5() { return static_cast<int32_t>(offsetof(UserInfo_t4092807993, ___normalSasa_5)); }
	inline Text_t3286458198 * get_normalSasa_5() const { return ___normalSasa_5; }
	inline Text_t3286458198 ** get_address_of_normalSasa_5() { return &___normalSasa_5; }
	inline void set_normalSasa_5(Text_t3286458198 * value)
	{
		___normalSasa_5 = value;
		Il2CppCodeGenWriteBarrier(&___normalSasa_5, value);
	}

	inline static int32_t get_offset_of_experience_6() { return static_cast<int32_t>(offsetof(UserInfo_t4092807993, ___experience_6)); }
	inline Image_t3354615620 * get_experience_6() const { return ___experience_6; }
	inline Image_t3354615620 ** get_address_of_experience_6() { return &___experience_6; }
	inline void set_experience_6(Image_t3354615620 * value)
	{
		___experience_6 = value;
		Il2CppCodeGenWriteBarrier(&___experience_6, value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(UserInfo_t4092807993, ___data_7)); }
	inline UserDataManager_t271735736 * get_data_7() const { return ___data_7; }
	inline UserDataManager_t271735736 ** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(UserDataManager_t271735736 * value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier(&___data_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
