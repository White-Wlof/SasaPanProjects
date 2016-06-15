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
// ChatGui
struct ChatGui_t2403745443;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NamePickGui
struct  NamePickGui_t1262517295  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Vector2 NamePickGui::GuiSize
	Vector2_t3525329788  ___GuiSize_4;
	// System.String NamePickGui::InputLine
	String_t* ___InputLine_5;
	// UnityEngine.Rect NamePickGui::guiCenteredRect
	Rect_t1525428817  ___guiCenteredRect_6;
	// ChatGui NamePickGui::chatComponent
	ChatGui_t2403745443 * ___chatComponent_7;
	// System.String NamePickGui::helpText
	String_t* ___helpText_8;

public:
	inline static int32_t get_offset_of_GuiSize_4() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___GuiSize_4)); }
	inline Vector2_t3525329788  get_GuiSize_4() const { return ___GuiSize_4; }
	inline Vector2_t3525329788 * get_address_of_GuiSize_4() { return &___GuiSize_4; }
	inline void set_GuiSize_4(Vector2_t3525329788  value)
	{
		___GuiSize_4 = value;
	}

	inline static int32_t get_offset_of_InputLine_5() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___InputLine_5)); }
	inline String_t* get_InputLine_5() const { return ___InputLine_5; }
	inline String_t** get_address_of_InputLine_5() { return &___InputLine_5; }
	inline void set_InputLine_5(String_t* value)
	{
		___InputLine_5 = value;
		Il2CppCodeGenWriteBarrier(&___InputLine_5, value);
	}

	inline static int32_t get_offset_of_guiCenteredRect_6() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___guiCenteredRect_6)); }
	inline Rect_t1525428817  get_guiCenteredRect_6() const { return ___guiCenteredRect_6; }
	inline Rect_t1525428817 * get_address_of_guiCenteredRect_6() { return &___guiCenteredRect_6; }
	inline void set_guiCenteredRect_6(Rect_t1525428817  value)
	{
		___guiCenteredRect_6 = value;
	}

	inline static int32_t get_offset_of_chatComponent_7() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___chatComponent_7)); }
	inline ChatGui_t2403745443 * get_chatComponent_7() const { return ___chatComponent_7; }
	inline ChatGui_t2403745443 ** get_address_of_chatComponent_7() { return &___chatComponent_7; }
	inline void set_chatComponent_7(ChatGui_t2403745443 * value)
	{
		___chatComponent_7 = value;
		Il2CppCodeGenWriteBarrier(&___chatComponent_7, value);
	}

	inline static int32_t get_offset_of_helpText_8() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___helpText_8)); }
	inline String_t* get_helpText_8() const { return ___helpText_8; }
	inline String_t** get_address_of_helpText_8() { return &___helpText_8; }
	inline void set_helpText_8(String_t* value)
	{
		___helpText_8 = value;
		Il2CppCodeGenWriteBarrier(&___helpText_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
