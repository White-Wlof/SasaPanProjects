#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t2614635829;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoBoxesGui
struct  DemoBoxesGui_t2697408997  : public MonoBehaviour_t4025988718
{
public:
	// System.Boolean DemoBoxesGui::HideUI
	bool ___HideUI_5;
	// UnityEngine.GUIText DemoBoxesGui::GuiTextForTips
	GUIText_t2614635829 * ___GuiTextForTips_6;
	// System.Int32 DemoBoxesGui::tipsIndex
	int32_t ___tipsIndex_7;
	// System.String[] DemoBoxesGui::tips
	StringU5BU5D_t2956870243* ___tips_8;
	// System.Single DemoBoxesGui::timeSinceLastTip
	float ___timeSinceLastTip_9;

public:
	inline static int32_t get_offset_of_HideUI_5() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___HideUI_5)); }
	inline bool get_HideUI_5() const { return ___HideUI_5; }
	inline bool* get_address_of_HideUI_5() { return &___HideUI_5; }
	inline void set_HideUI_5(bool value)
	{
		___HideUI_5 = value;
	}

	inline static int32_t get_offset_of_GuiTextForTips_6() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___GuiTextForTips_6)); }
	inline GUIText_t2614635829 * get_GuiTextForTips_6() const { return ___GuiTextForTips_6; }
	inline GUIText_t2614635829 ** get_address_of_GuiTextForTips_6() { return &___GuiTextForTips_6; }
	inline void set_GuiTextForTips_6(GUIText_t2614635829 * value)
	{
		___GuiTextForTips_6 = value;
		Il2CppCodeGenWriteBarrier(&___GuiTextForTips_6, value);
	}

	inline static int32_t get_offset_of_tipsIndex_7() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___tipsIndex_7)); }
	inline int32_t get_tipsIndex_7() const { return ___tipsIndex_7; }
	inline int32_t* get_address_of_tipsIndex_7() { return &___tipsIndex_7; }
	inline void set_tipsIndex_7(int32_t value)
	{
		___tipsIndex_7 = value;
	}

	inline static int32_t get_offset_of_tips_8() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___tips_8)); }
	inline StringU5BU5D_t2956870243* get_tips_8() const { return ___tips_8; }
	inline StringU5BU5D_t2956870243** get_address_of_tips_8() { return &___tips_8; }
	inline void set_tips_8(StringU5BU5D_t2956870243* value)
	{
		___tips_8 = value;
		Il2CppCodeGenWriteBarrier(&___tips_8, value);
	}

	inline static int32_t get_offset_of_timeSinceLastTip_9() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t2697408997, ___timeSinceLastTip_9)); }
	inline float get_timeSinceLastTip_9() const { return ___timeSinceLastTip_9; }
	inline float* get_address_of_timeSinceLastTip_9() { return &___timeSinceLastTip_9; }
	inline void set_timeSinceLastTip_9(float value)
	{
		___timeSinceLastTip_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
