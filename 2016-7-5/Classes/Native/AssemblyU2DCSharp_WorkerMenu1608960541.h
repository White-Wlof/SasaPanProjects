#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorkerMenu
struct  WorkerMenu_t1608960541  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GUISkin WorkerMenu::Skin
	GUISkin_t2614611333 * ___Skin_3;
	// UnityEngine.Vector2 WorkerMenu::WidthAndHeight
	Vector2_t3525329788  ___WidthAndHeight_4;
	// System.String WorkerMenu::roomName
	String_t* ___roomName_5;
	// UnityEngine.Vector2 WorkerMenu::scrollPos
	Vector2_t3525329788  ___scrollPos_6;
	// System.Boolean WorkerMenu::connectFailed
	bool ___connectFailed_7;
	// System.String WorkerMenu::errorDialog
	String_t* ___errorDialog_10;
	// System.Double WorkerMenu::timeToClearDialog
	double ___timeToClearDialog_11;

public:
	inline static int32_t get_offset_of_Skin_3() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___Skin_3)); }
	inline GUISkin_t2614611333 * get_Skin_3() const { return ___Skin_3; }
	inline GUISkin_t2614611333 ** get_address_of_Skin_3() { return &___Skin_3; }
	inline void set_Skin_3(GUISkin_t2614611333 * value)
	{
		___Skin_3 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_3, value);
	}

	inline static int32_t get_offset_of_WidthAndHeight_4() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___WidthAndHeight_4)); }
	inline Vector2_t3525329788  get_WidthAndHeight_4() const { return ___WidthAndHeight_4; }
	inline Vector2_t3525329788 * get_address_of_WidthAndHeight_4() { return &___WidthAndHeight_4; }
	inline void set_WidthAndHeight_4(Vector2_t3525329788  value)
	{
		___WidthAndHeight_4 = value;
	}

	inline static int32_t get_offset_of_roomName_5() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___roomName_5)); }
	inline String_t* get_roomName_5() const { return ___roomName_5; }
	inline String_t** get_address_of_roomName_5() { return &___roomName_5; }
	inline void set_roomName_5(String_t* value)
	{
		___roomName_5 = value;
		Il2CppCodeGenWriteBarrier(&___roomName_5, value);
	}

	inline static int32_t get_offset_of_scrollPos_6() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___scrollPos_6)); }
	inline Vector2_t3525329788  get_scrollPos_6() const { return ___scrollPos_6; }
	inline Vector2_t3525329788 * get_address_of_scrollPos_6() { return &___scrollPos_6; }
	inline void set_scrollPos_6(Vector2_t3525329788  value)
	{
		___scrollPos_6 = value;
	}

	inline static int32_t get_offset_of_connectFailed_7() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___connectFailed_7)); }
	inline bool get_connectFailed_7() const { return ___connectFailed_7; }
	inline bool* get_address_of_connectFailed_7() { return &___connectFailed_7; }
	inline void set_connectFailed_7(bool value)
	{
		___connectFailed_7 = value;
	}

	inline static int32_t get_offset_of_errorDialog_10() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___errorDialog_10)); }
	inline String_t* get_errorDialog_10() const { return ___errorDialog_10; }
	inline String_t** get_address_of_errorDialog_10() { return &___errorDialog_10; }
	inline void set_errorDialog_10(String_t* value)
	{
		___errorDialog_10 = value;
		Il2CppCodeGenWriteBarrier(&___errorDialog_10, value);
	}

	inline static int32_t get_offset_of_timeToClearDialog_11() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541, ___timeToClearDialog_11)); }
	inline double get_timeToClearDialog_11() const { return ___timeToClearDialog_11; }
	inline double* get_address_of_timeToClearDialog_11() { return &___timeToClearDialog_11; }
	inline void set_timeToClearDialog_11(double value)
	{
		___timeToClearDialog_11 = value;
	}
};

struct WorkerMenu_t1608960541_StaticFields
{
public:
	// System.String WorkerMenu::SceneNameMenu
	String_t* ___SceneNameMenu_8;
	// System.String WorkerMenu::SceneNameGame
	String_t* ___SceneNameGame_9;

public:
	inline static int32_t get_offset_of_SceneNameMenu_8() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541_StaticFields, ___SceneNameMenu_8)); }
	inline String_t* get_SceneNameMenu_8() const { return ___SceneNameMenu_8; }
	inline String_t** get_address_of_SceneNameMenu_8() { return &___SceneNameMenu_8; }
	inline void set_SceneNameMenu_8(String_t* value)
	{
		___SceneNameMenu_8 = value;
		Il2CppCodeGenWriteBarrier(&___SceneNameMenu_8, value);
	}

	inline static int32_t get_offset_of_SceneNameGame_9() { return static_cast<int32_t>(offsetof(WorkerMenu_t1608960541_StaticFields, ___SceneNameGame_9)); }
	inline String_t* get_SceneNameGame_9() const { return ___SceneNameGame_9; }
	inline String_t** get_address_of_SceneNameGame_9() { return &___SceneNameGame_9; }
	inline void set_SceneNameGame_9(String_t* value)
	{
		___SceneNameGame_9 = value;
		Il2CppCodeGenWriteBarrier(&___SceneNameGame_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
