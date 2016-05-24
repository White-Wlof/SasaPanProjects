#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Point
struct Point_t77292912;

#include "mscorlib_System_Array2840145358.h"
#include "RiverTools_Point77292912.h"

#pragma once
// Point[]
struct PointU5BU5D_t2525013713  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Point_t77292912 * m_Items[1];

public:
	inline Point_t77292912 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Point_t77292912 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Point_t77292912 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
