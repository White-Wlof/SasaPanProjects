#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UniClipboard
struct UniClipboard_t3530431142;
// IBoard
struct IBoard_t2154284061;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UniClipboard::.ctor()
extern "C"  void UniClipboard__ctor_m1849062069 (UniClipboard_t3530431142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IBoard UniClipboard::get_board()
extern "C"  Il2CppObject * UniClipboard_get_board_m3702909680 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniClipboard::SetText(System.String)
extern "C"  void UniClipboard_SetText_m1176447488 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniClipboard::GetText()
extern "C"  String_t* UniClipboard_GetText_m4206938803 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
