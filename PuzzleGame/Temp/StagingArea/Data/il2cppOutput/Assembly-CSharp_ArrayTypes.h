#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// SinglePuzzleScript
struct SinglePuzzleScript_t1743205231;
// PuzzlePieceScript
struct PuzzlePieceScript_t3397438075;
// PuzzleConnectionScript
struct PuzzleConnectionScript_t135406863;

#include "mscorlib_System_Array4136897760.h"
#include "AssemblyU2DCSharp_SinglePuzzleScript1743205231.h"
#include "AssemblyU2DCSharp_PuzzlePieceScript3397438075.h"
#include "AssemblyU2DCSharp_PuzzleConnectionScript135406863.h"

#pragma once
// SinglePuzzleScript[]
struct SinglePuzzleScriptU5BU5D_t2411412982  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) SinglePuzzleScript_t1743205231 * m_Items[1];

public:
	inline SinglePuzzleScript_t1743205231 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SinglePuzzleScript_t1743205231 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SinglePuzzleScript_t1743205231 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// PuzzlePieceScript[]
struct PuzzlePieceScriptU5BU5D_t3966569786  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PuzzlePieceScript_t3397438075 * m_Items[1];

public:
	inline PuzzlePieceScript_t3397438075 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PuzzlePieceScript_t3397438075 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PuzzlePieceScript_t3397438075 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// PuzzleConnectionScript[]
struct PuzzleConnectionScriptU5BU5D_t933179862  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PuzzleConnectionScript_t135406863 * m_Items[1];

public:
	inline PuzzleConnectionScript_t135406863 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PuzzleConnectionScript_t135406863 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PuzzleConnectionScript_t135406863 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
