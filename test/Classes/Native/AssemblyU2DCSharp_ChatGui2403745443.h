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
// System.String[]
struct StringU5BU5D_t2956870243;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t2443397041;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t2228911785;
// ChatGui
struct ChatGui_t2403745443;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatGui
struct  ChatGui_t2403745443  : public MonoBehaviour_t3012272455
{
public:
	// System.String ChatGui::ChatAppId
	String_t* ___ChatAppId_2;
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t2956870243* ___ChannelsToJoinOnConnect_3;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_4;
	// System.Boolean ChatGui::DemoPublishOnSubscribe
	bool ___DemoPublishOnSubscribe_5;
	// ExitGames.Client.Photon.Chat.ChatChannel ChatGui::selectedChannel
	ChatChannel_t2443397041 * ___selectedChannel_6;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName_7;
	// System.Int32 ChatGui::selectedChannelIndex
	int32_t ___selectedChannelIndex_8;
	// System.Boolean ChatGui::doingPrivateChat
	bool ___doingPrivateChat_9;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t2228911785 * ___chatClient_10;
	// UnityEngine.Rect ChatGui::GuiRect
	Rect_t1525428817  ___GuiRect_11;
	// System.Boolean ChatGui::IsVisible
	bool ___IsVisible_12;
	// System.Boolean ChatGui::AlignBottom
	bool ___AlignBottom_13;
	// System.Boolean ChatGui::FullScreen
	bool ___FullScreen_14;
	// System.String ChatGui::inputLine
	String_t* ___inputLine_15;
	// System.String ChatGui::userIdInput
	String_t* ___userIdInput_16;
	// UnityEngine.Vector2 ChatGui::scrollPos
	Vector2_t3525329788  ___scrollPos_17;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_ChatAppId_2() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChatAppId_2)); }
	inline String_t* get_ChatAppId_2() const { return ___ChatAppId_2; }
	inline String_t** get_address_of_ChatAppId_2() { return &___ChatAppId_2; }
	inline void set_ChatAppId_2(String_t* value)
	{
		___ChatAppId_2 = value;
		Il2CppCodeGenWriteBarrier(&___ChatAppId_2, value);
	}

	inline static int32_t get_offset_of_ChannelsToJoinOnConnect_3() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChannelsToJoinOnConnect_3)); }
	inline StringU5BU5D_t2956870243* get_ChannelsToJoinOnConnect_3() const { return ___ChannelsToJoinOnConnect_3; }
	inline StringU5BU5D_t2956870243** get_address_of_ChannelsToJoinOnConnect_3() { return &___ChannelsToJoinOnConnect_3; }
	inline void set_ChannelsToJoinOnConnect_3(StringU5BU5D_t2956870243* value)
	{
		___ChannelsToJoinOnConnect_3 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelsToJoinOnConnect_3, value);
	}

	inline static int32_t get_offset_of_HistoryLengthToFetch_4() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___HistoryLengthToFetch_4)); }
	inline int32_t get_HistoryLengthToFetch_4() const { return ___HistoryLengthToFetch_4; }
	inline int32_t* get_address_of_HistoryLengthToFetch_4() { return &___HistoryLengthToFetch_4; }
	inline void set_HistoryLengthToFetch_4(int32_t value)
	{
		___HistoryLengthToFetch_4 = value;
	}

	inline static int32_t get_offset_of_DemoPublishOnSubscribe_5() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___DemoPublishOnSubscribe_5)); }
	inline bool get_DemoPublishOnSubscribe_5() const { return ___DemoPublishOnSubscribe_5; }
	inline bool* get_address_of_DemoPublishOnSubscribe_5() { return &___DemoPublishOnSubscribe_5; }
	inline void set_DemoPublishOnSubscribe_5(bool value)
	{
		___DemoPublishOnSubscribe_5 = value;
	}

	inline static int32_t get_offset_of_selectedChannel_6() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannel_6)); }
	inline ChatChannel_t2443397041 * get_selectedChannel_6() const { return ___selectedChannel_6; }
	inline ChatChannel_t2443397041 ** get_address_of_selectedChannel_6() { return &___selectedChannel_6; }
	inline void set_selectedChannel_6(ChatChannel_t2443397041 * value)
	{
		___selectedChannel_6 = value;
		Il2CppCodeGenWriteBarrier(&___selectedChannel_6, value);
	}

	inline static int32_t get_offset_of_selectedChannelName_7() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannelName_7)); }
	inline String_t* get_selectedChannelName_7() const { return ___selectedChannelName_7; }
	inline String_t** get_address_of_selectedChannelName_7() { return &___selectedChannelName_7; }
	inline void set_selectedChannelName_7(String_t* value)
	{
		___selectedChannelName_7 = value;
		Il2CppCodeGenWriteBarrier(&___selectedChannelName_7, value);
	}

	inline static int32_t get_offset_of_selectedChannelIndex_8() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannelIndex_8)); }
	inline int32_t get_selectedChannelIndex_8() const { return ___selectedChannelIndex_8; }
	inline int32_t* get_address_of_selectedChannelIndex_8() { return &___selectedChannelIndex_8; }
	inline void set_selectedChannelIndex_8(int32_t value)
	{
		___selectedChannelIndex_8 = value;
	}

	inline static int32_t get_offset_of_doingPrivateChat_9() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___doingPrivateChat_9)); }
	inline bool get_doingPrivateChat_9() const { return ___doingPrivateChat_9; }
	inline bool* get_address_of_doingPrivateChat_9() { return &___doingPrivateChat_9; }
	inline void set_doingPrivateChat_9(bool value)
	{
		___doingPrivateChat_9 = value;
	}

	inline static int32_t get_offset_of_chatClient_10() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___chatClient_10)); }
	inline ChatClient_t2228911785 * get_chatClient_10() const { return ___chatClient_10; }
	inline ChatClient_t2228911785 ** get_address_of_chatClient_10() { return &___chatClient_10; }
	inline void set_chatClient_10(ChatClient_t2228911785 * value)
	{
		___chatClient_10 = value;
		Il2CppCodeGenWriteBarrier(&___chatClient_10, value);
	}

	inline static int32_t get_offset_of_GuiRect_11() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___GuiRect_11)); }
	inline Rect_t1525428817  get_GuiRect_11() const { return ___GuiRect_11; }
	inline Rect_t1525428817 * get_address_of_GuiRect_11() { return &___GuiRect_11; }
	inline void set_GuiRect_11(Rect_t1525428817  value)
	{
		___GuiRect_11 = value;
	}

	inline static int32_t get_offset_of_IsVisible_12() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___IsVisible_12)); }
	inline bool get_IsVisible_12() const { return ___IsVisible_12; }
	inline bool* get_address_of_IsVisible_12() { return &___IsVisible_12; }
	inline void set_IsVisible_12(bool value)
	{
		___IsVisible_12 = value;
	}

	inline static int32_t get_offset_of_AlignBottom_13() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___AlignBottom_13)); }
	inline bool get_AlignBottom_13() const { return ___AlignBottom_13; }
	inline bool* get_address_of_AlignBottom_13() { return &___AlignBottom_13; }
	inline void set_AlignBottom_13(bool value)
	{
		___AlignBottom_13 = value;
	}

	inline static int32_t get_offset_of_FullScreen_14() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___FullScreen_14)); }
	inline bool get_FullScreen_14() const { return ___FullScreen_14; }
	inline bool* get_address_of_FullScreen_14() { return &___FullScreen_14; }
	inline void set_FullScreen_14(bool value)
	{
		___FullScreen_14 = value;
	}

	inline static int32_t get_offset_of_inputLine_15() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___inputLine_15)); }
	inline String_t* get_inputLine_15() const { return ___inputLine_15; }
	inline String_t** get_address_of_inputLine_15() { return &___inputLine_15; }
	inline void set_inputLine_15(String_t* value)
	{
		___inputLine_15 = value;
		Il2CppCodeGenWriteBarrier(&___inputLine_15, value);
	}

	inline static int32_t get_offset_of_userIdInput_16() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___userIdInput_16)); }
	inline String_t* get_userIdInput_16() const { return ___userIdInput_16; }
	inline String_t** get_address_of_userIdInput_16() { return &___userIdInput_16; }
	inline void set_userIdInput_16(String_t* value)
	{
		___userIdInput_16 = value;
		Il2CppCodeGenWriteBarrier(&___userIdInput_16, value);
	}

	inline static int32_t get_offset_of_scrollPos_17() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___scrollPos_17)); }
	inline Vector2_t3525329788  get_scrollPos_17() const { return ___scrollPos_17; }
	inline Vector2_t3525329788 * get_address_of_scrollPos_17() { return &___scrollPos_17; }
	inline void set_scrollPos_17(Vector2_t3525329788  value)
	{
		___scrollPos_17 = value;
	}

	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___U3CUserNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_21() const { return ___U3CUserNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_21() { return &___U3CUserNameU3Ek__BackingField_21; }
	inline void set_U3CUserNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserNameU3Ek__BackingField_21, value);
	}
};

struct ChatGui_t2403745443_StaticFields
{
public:
	// System.String ChatGui::WelcomeText
	String_t* ___WelcomeText_18;
	// System.String ChatGui::HelpText
	String_t* ___HelpText_19;
	// ChatGui ChatGui::instance
	ChatGui_t2403745443 * ___instance_20;

public:
	inline static int32_t get_offset_of_WelcomeText_18() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___WelcomeText_18)); }
	inline String_t* get_WelcomeText_18() const { return ___WelcomeText_18; }
	inline String_t** get_address_of_WelcomeText_18() { return &___WelcomeText_18; }
	inline void set_WelcomeText_18(String_t* value)
	{
		___WelcomeText_18 = value;
		Il2CppCodeGenWriteBarrier(&___WelcomeText_18, value);
	}

	inline static int32_t get_offset_of_HelpText_19() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___HelpText_19)); }
	inline String_t* get_HelpText_19() const { return ___HelpText_19; }
	inline String_t** get_address_of_HelpText_19() { return &___HelpText_19; }
	inline void set_HelpText_19(String_t* value)
	{
		___HelpText_19 = value;
		Il2CppCodeGenWriteBarrier(&___HelpText_19, value);
	}

	inline static int32_t get_offset_of_instance_20() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___instance_20)); }
	inline ChatGui_t2403745443 * get_instance_20() const { return ___instance_20; }
	inline ChatGui_t2403745443 ** get_address_of_instance_20() { return &___instance_20; }
	inline void set_instance_20(ChatGui_t2403745443 * value)
	{
		___instance_20 = value;
		Il2CppCodeGenWriteBarrier(&___instance_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
