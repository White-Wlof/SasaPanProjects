#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UserDataManager
struct UserDataManager_t271735736;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Button
struct Button_t990034267;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrowView
struct  GrowView_t572087672  : public MonoBehaviour_t3012272455
{
public:
	// UserDataManager GrowView::data
	UserDataManager_t271735736 * ___data_2;
	// UnityEngine.UI.Text GrowView::userName
	Text_t3286458198 * ___userName_3;
	// UnityEngine.UI.Text GrowView::newUserName
	Text_t3286458198 * ___newUserName_4;
	// UnityEngine.UI.Button GrowView::save
	Button_t990034267 * ___save_5;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(GrowView_t572087672, ___data_2)); }
	inline UserDataManager_t271735736 * get_data_2() const { return ___data_2; }
	inline UserDataManager_t271735736 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(UserDataManager_t271735736 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}

	inline static int32_t get_offset_of_userName_3() { return static_cast<int32_t>(offsetof(GrowView_t572087672, ___userName_3)); }
	inline Text_t3286458198 * get_userName_3() const { return ___userName_3; }
	inline Text_t3286458198 ** get_address_of_userName_3() { return &___userName_3; }
	inline void set_userName_3(Text_t3286458198 * value)
	{
		___userName_3 = value;
		Il2CppCodeGenWriteBarrier(&___userName_3, value);
	}

	inline static int32_t get_offset_of_newUserName_4() { return static_cast<int32_t>(offsetof(GrowView_t572087672, ___newUserName_4)); }
	inline Text_t3286458198 * get_newUserName_4() const { return ___newUserName_4; }
	inline Text_t3286458198 ** get_address_of_newUserName_4() { return &___newUserName_4; }
	inline void set_newUserName_4(Text_t3286458198 * value)
	{
		___newUserName_4 = value;
		Il2CppCodeGenWriteBarrier(&___newUserName_4, value);
	}

	inline static int32_t get_offset_of_save_5() { return static_cast<int32_t>(offsetof(GrowView_t572087672, ___save_5)); }
	inline Button_t990034267 * get_save_5() const { return ___save_5; }
	inline Button_t990034267 ** get_address_of_save_5() { return &___save_5; }
	inline void set_save_5(Button_t990034267 * value)
	{
		___save_5 = value;
		Il2CppCodeGenWriteBarrier(&___save_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
