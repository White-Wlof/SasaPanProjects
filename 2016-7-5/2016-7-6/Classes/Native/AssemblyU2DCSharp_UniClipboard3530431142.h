#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IBoard
struct IBoard_t2154284061;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniClipboard
struct  UniClipboard_t3530431142  : public Il2CppObject
{
public:

public:
};

struct UniClipboard_t3530431142_StaticFields
{
public:
	// IBoard UniClipboard::_board
	Il2CppObject * ____board_0;

public:
	inline static int32_t get_offset_of__board_0() { return static_cast<int32_t>(offsetof(UniClipboard_t3530431142_StaticFields, ____board_0)); }
	inline Il2CppObject * get__board_0() const { return ____board_0; }
	inline Il2CppObject ** get_address_of__board_0() { return &____board_0; }
	inline void set__board_0(Il2CppObject * value)
	{
		____board_0 = value;
		Il2CppCodeGenWriteBarrier(&____board_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
