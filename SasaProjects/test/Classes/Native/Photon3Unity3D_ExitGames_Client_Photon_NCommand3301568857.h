#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.NCommand
struct  NCommand_t3301568857  : public Il2CppObject
{
public:
	// System.Byte ExitGames.Client.Photon.NCommand::commandFlags
	uint8_t ___commandFlags_0;
	// System.Byte ExitGames.Client.Photon.NCommand::commandType
	uint8_t ___commandType_6;
	// System.Byte ExitGames.Client.Photon.NCommand::commandChannelID
	uint8_t ___commandChannelID_17;
	// System.Int32 ExitGames.Client.Photon.NCommand::reliableSequenceNumber
	int32_t ___reliableSequenceNumber_18;
	// System.Int32 ExitGames.Client.Photon.NCommand::unreliableSequenceNumber
	int32_t ___unreliableSequenceNumber_19;
	// System.Int32 ExitGames.Client.Photon.NCommand::unsequencedGroupNumber
	int32_t ___unsequencedGroupNumber_20;
	// System.Byte ExitGames.Client.Photon.NCommand::reservedByte
	uint8_t ___reservedByte_21;
	// System.Int32 ExitGames.Client.Photon.NCommand::startSequenceNumber
	int32_t ___startSequenceNumber_22;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentCount
	int32_t ___fragmentCount_23;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentNumber
	int32_t ___fragmentNumber_24;
	// System.Int32 ExitGames.Client.Photon.NCommand::totalLength
	int32_t ___totalLength_25;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentOffset
	int32_t ___fragmentOffset_26;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentsRemaining
	int32_t ___fragmentsRemaining_27;
	// System.Byte[] ExitGames.Client.Photon.NCommand::Payload
	ByteU5BU5D_t58506160* ___Payload_28;
	// System.Int32 ExitGames.Client.Photon.NCommand::commandSentTime
	int32_t ___commandSentTime_29;
	// System.Byte ExitGames.Client.Photon.NCommand::commandSentCount
	uint8_t ___commandSentCount_30;
	// System.Int32 ExitGames.Client.Photon.NCommand::roundTripTimeout
	int32_t ___roundTripTimeout_31;
	// System.Int32 ExitGames.Client.Photon.NCommand::timeoutTime
	int32_t ___timeoutTime_32;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedReliableSequenceNumber
	int32_t ___ackReceivedReliableSequenceNumber_33;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedSentTime
	int32_t ___ackReceivedSentTime_34;
	// System.Byte[] ExitGames.Client.Photon.NCommand::completeCommand
	ByteU5BU5D_t58506160* ___completeCommand_46;
	// System.Int32 ExitGames.Client.Photon.NCommand::Size
	int32_t ___Size_47;

public:
	inline static int32_t get_offset_of_commandFlags_0() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandFlags_0)); }
	inline uint8_t get_commandFlags_0() const { return ___commandFlags_0; }
	inline uint8_t* get_address_of_commandFlags_0() { return &___commandFlags_0; }
	inline void set_commandFlags_0(uint8_t value)
	{
		___commandFlags_0 = value;
	}

	inline static int32_t get_offset_of_commandType_6() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandType_6)); }
	inline uint8_t get_commandType_6() const { return ___commandType_6; }
	inline uint8_t* get_address_of_commandType_6() { return &___commandType_6; }
	inline void set_commandType_6(uint8_t value)
	{
		___commandType_6 = value;
	}

	inline static int32_t get_offset_of_commandChannelID_17() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandChannelID_17)); }
	inline uint8_t get_commandChannelID_17() const { return ___commandChannelID_17; }
	inline uint8_t* get_address_of_commandChannelID_17() { return &___commandChannelID_17; }
	inline void set_commandChannelID_17(uint8_t value)
	{
		___commandChannelID_17 = value;
	}

	inline static int32_t get_offset_of_reliableSequenceNumber_18() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___reliableSequenceNumber_18)); }
	inline int32_t get_reliableSequenceNumber_18() const { return ___reliableSequenceNumber_18; }
	inline int32_t* get_address_of_reliableSequenceNumber_18() { return &___reliableSequenceNumber_18; }
	inline void set_reliableSequenceNumber_18(int32_t value)
	{
		___reliableSequenceNumber_18 = value;
	}

	inline static int32_t get_offset_of_unreliableSequenceNumber_19() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___unreliableSequenceNumber_19)); }
	inline int32_t get_unreliableSequenceNumber_19() const { return ___unreliableSequenceNumber_19; }
	inline int32_t* get_address_of_unreliableSequenceNumber_19() { return &___unreliableSequenceNumber_19; }
	inline void set_unreliableSequenceNumber_19(int32_t value)
	{
		___unreliableSequenceNumber_19 = value;
	}

	inline static int32_t get_offset_of_unsequencedGroupNumber_20() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___unsequencedGroupNumber_20)); }
	inline int32_t get_unsequencedGroupNumber_20() const { return ___unsequencedGroupNumber_20; }
	inline int32_t* get_address_of_unsequencedGroupNumber_20() { return &___unsequencedGroupNumber_20; }
	inline void set_unsequencedGroupNumber_20(int32_t value)
	{
		___unsequencedGroupNumber_20 = value;
	}

	inline static int32_t get_offset_of_reservedByte_21() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___reservedByte_21)); }
	inline uint8_t get_reservedByte_21() const { return ___reservedByte_21; }
	inline uint8_t* get_address_of_reservedByte_21() { return &___reservedByte_21; }
	inline void set_reservedByte_21(uint8_t value)
	{
		___reservedByte_21 = value;
	}

	inline static int32_t get_offset_of_startSequenceNumber_22() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___startSequenceNumber_22)); }
	inline int32_t get_startSequenceNumber_22() const { return ___startSequenceNumber_22; }
	inline int32_t* get_address_of_startSequenceNumber_22() { return &___startSequenceNumber_22; }
	inline void set_startSequenceNumber_22(int32_t value)
	{
		___startSequenceNumber_22 = value;
	}

	inline static int32_t get_offset_of_fragmentCount_23() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentCount_23)); }
	inline int32_t get_fragmentCount_23() const { return ___fragmentCount_23; }
	inline int32_t* get_address_of_fragmentCount_23() { return &___fragmentCount_23; }
	inline void set_fragmentCount_23(int32_t value)
	{
		___fragmentCount_23 = value;
	}

	inline static int32_t get_offset_of_fragmentNumber_24() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentNumber_24)); }
	inline int32_t get_fragmentNumber_24() const { return ___fragmentNumber_24; }
	inline int32_t* get_address_of_fragmentNumber_24() { return &___fragmentNumber_24; }
	inline void set_fragmentNumber_24(int32_t value)
	{
		___fragmentNumber_24 = value;
	}

	inline static int32_t get_offset_of_totalLength_25() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___totalLength_25)); }
	inline int32_t get_totalLength_25() const { return ___totalLength_25; }
	inline int32_t* get_address_of_totalLength_25() { return &___totalLength_25; }
	inline void set_totalLength_25(int32_t value)
	{
		___totalLength_25 = value;
	}

	inline static int32_t get_offset_of_fragmentOffset_26() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentOffset_26)); }
	inline int32_t get_fragmentOffset_26() const { return ___fragmentOffset_26; }
	inline int32_t* get_address_of_fragmentOffset_26() { return &___fragmentOffset_26; }
	inline void set_fragmentOffset_26(int32_t value)
	{
		___fragmentOffset_26 = value;
	}

	inline static int32_t get_offset_of_fragmentsRemaining_27() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___fragmentsRemaining_27)); }
	inline int32_t get_fragmentsRemaining_27() const { return ___fragmentsRemaining_27; }
	inline int32_t* get_address_of_fragmentsRemaining_27() { return &___fragmentsRemaining_27; }
	inline void set_fragmentsRemaining_27(int32_t value)
	{
		___fragmentsRemaining_27 = value;
	}

	inline static int32_t get_offset_of_Payload_28() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___Payload_28)); }
	inline ByteU5BU5D_t58506160* get_Payload_28() const { return ___Payload_28; }
	inline ByteU5BU5D_t58506160** get_address_of_Payload_28() { return &___Payload_28; }
	inline void set_Payload_28(ByteU5BU5D_t58506160* value)
	{
		___Payload_28 = value;
		Il2CppCodeGenWriteBarrier(&___Payload_28, value);
	}

	inline static int32_t get_offset_of_commandSentTime_29() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandSentTime_29)); }
	inline int32_t get_commandSentTime_29() const { return ___commandSentTime_29; }
	inline int32_t* get_address_of_commandSentTime_29() { return &___commandSentTime_29; }
	inline void set_commandSentTime_29(int32_t value)
	{
		___commandSentTime_29 = value;
	}

	inline static int32_t get_offset_of_commandSentCount_30() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___commandSentCount_30)); }
	inline uint8_t get_commandSentCount_30() const { return ___commandSentCount_30; }
	inline uint8_t* get_address_of_commandSentCount_30() { return &___commandSentCount_30; }
	inline void set_commandSentCount_30(uint8_t value)
	{
		___commandSentCount_30 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeout_31() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___roundTripTimeout_31)); }
	inline int32_t get_roundTripTimeout_31() const { return ___roundTripTimeout_31; }
	inline int32_t* get_address_of_roundTripTimeout_31() { return &___roundTripTimeout_31; }
	inline void set_roundTripTimeout_31(int32_t value)
	{
		___roundTripTimeout_31 = value;
	}

	inline static int32_t get_offset_of_timeoutTime_32() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___timeoutTime_32)); }
	inline int32_t get_timeoutTime_32() const { return ___timeoutTime_32; }
	inline int32_t* get_address_of_timeoutTime_32() { return &___timeoutTime_32; }
	inline void set_timeoutTime_32(int32_t value)
	{
		___timeoutTime_32 = value;
	}

	inline static int32_t get_offset_of_ackReceivedReliableSequenceNumber_33() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___ackReceivedReliableSequenceNumber_33)); }
	inline int32_t get_ackReceivedReliableSequenceNumber_33() const { return ___ackReceivedReliableSequenceNumber_33; }
	inline int32_t* get_address_of_ackReceivedReliableSequenceNumber_33() { return &___ackReceivedReliableSequenceNumber_33; }
	inline void set_ackReceivedReliableSequenceNumber_33(int32_t value)
	{
		___ackReceivedReliableSequenceNumber_33 = value;
	}

	inline static int32_t get_offset_of_ackReceivedSentTime_34() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___ackReceivedSentTime_34)); }
	inline int32_t get_ackReceivedSentTime_34() const { return ___ackReceivedSentTime_34; }
	inline int32_t* get_address_of_ackReceivedSentTime_34() { return &___ackReceivedSentTime_34; }
	inline void set_ackReceivedSentTime_34(int32_t value)
	{
		___ackReceivedSentTime_34 = value;
	}

	inline static int32_t get_offset_of_completeCommand_46() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___completeCommand_46)); }
	inline ByteU5BU5D_t58506160* get_completeCommand_46() const { return ___completeCommand_46; }
	inline ByteU5BU5D_t58506160** get_address_of_completeCommand_46() { return &___completeCommand_46; }
	inline void set_completeCommand_46(ByteU5BU5D_t58506160* value)
	{
		___completeCommand_46 = value;
		Il2CppCodeGenWriteBarrier(&___completeCommand_46, value);
	}

	inline static int32_t get_offset_of_Size_47() { return static_cast<int32_t>(offsetof(NCommand_t3301568857, ___Size_47)); }
	inline int32_t get_Size_47() const { return ___Size_47; }
	inline int32_t* get_address_of_Size_47() { return &___Size_47; }
	inline void set_Size_47(int32_t value)
	{
		___Size_47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
