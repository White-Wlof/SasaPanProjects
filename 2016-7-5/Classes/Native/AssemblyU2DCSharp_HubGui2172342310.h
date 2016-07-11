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
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "AssemblyU2DCSharp_HubGui_DemoBtn3216290137.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HubGui
struct  HubGui_t2172342310  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GUISkin HubGui::Skin
	GUISkin_t2614611333 * ___Skin_3;
	// UnityEngine.Vector2 HubGui::scrollPos
	Vector2_t3525329788  ___scrollPos_4;
	// System.String HubGui::demoDescription
	String_t* ___demoDescription_5;
	// HubGui/DemoBtn HubGui::demoBtn
	DemoBtn_t3216290137  ___demoBtn_6;
	// HubGui/DemoBtn HubGui::webLink
	DemoBtn_t3216290137  ___webLink_7;
	// UnityEngine.GUIStyle HubGui::m_Headline
	GUIStyle_t1006925219 * ___m_Headline_8;

public:
	inline static int32_t get_offset_of_Skin_3() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___Skin_3)); }
	inline GUISkin_t2614611333 * get_Skin_3() const { return ___Skin_3; }
	inline GUISkin_t2614611333 ** get_address_of_Skin_3() { return &___Skin_3; }
	inline void set_Skin_3(GUISkin_t2614611333 * value)
	{
		___Skin_3 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_3, value);
	}

	inline static int32_t get_offset_of_scrollPos_4() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___scrollPos_4)); }
	inline Vector2_t3525329788  get_scrollPos_4() const { return ___scrollPos_4; }
	inline Vector2_t3525329788 * get_address_of_scrollPos_4() { return &___scrollPos_4; }
	inline void set_scrollPos_4(Vector2_t3525329788  value)
	{
		___scrollPos_4 = value;
	}

	inline static int32_t get_offset_of_demoDescription_5() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___demoDescription_5)); }
	inline String_t* get_demoDescription_5() const { return ___demoDescription_5; }
	inline String_t** get_address_of_demoDescription_5() { return &___demoDescription_5; }
	inline void set_demoDescription_5(String_t* value)
	{
		___demoDescription_5 = value;
		Il2CppCodeGenWriteBarrier(&___demoDescription_5, value);
	}

	inline static int32_t get_offset_of_demoBtn_6() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___demoBtn_6)); }
	inline DemoBtn_t3216290137  get_demoBtn_6() const { return ___demoBtn_6; }
	inline DemoBtn_t3216290137 * get_address_of_demoBtn_6() { return &___demoBtn_6; }
	inline void set_demoBtn_6(DemoBtn_t3216290137  value)
	{
		___demoBtn_6 = value;
	}

	inline static int32_t get_offset_of_webLink_7() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___webLink_7)); }
	inline DemoBtn_t3216290137  get_webLink_7() const { return ___webLink_7; }
	inline DemoBtn_t3216290137 * get_address_of_webLink_7() { return &___webLink_7; }
	inline void set_webLink_7(DemoBtn_t3216290137  value)
	{
		___webLink_7 = value;
	}

	inline static int32_t get_offset_of_m_Headline_8() { return static_cast<int32_t>(offsetof(HubGui_t2172342310, ___m_Headline_8)); }
	inline GUIStyle_t1006925219 * get_m_Headline_8() const { return ___m_Headline_8; }
	inline GUIStyle_t1006925219 ** get_address_of_m_Headline_8() { return &___m_Headline_8; }
	inline void set_m_Headline_8(GUIStyle_t1006925219 * value)
	{
		___m_Headline_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Headline_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
