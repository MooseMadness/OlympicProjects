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

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t676570721;
// System.Text.RegularExpressions.Match
struct Match_t2000248932;
// System.Text.RegularExpressions.Regex
struct Regex_t272817006;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex272817006.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C"  void BaseMachine__ctor_m2327544039 (BaseMachine_t676570721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t2000248932 * BaseMachine_Scan_m122450399 (BaseMachine_t676570721 * __this, Regex_t272817006 * ___regex0, String_t* ___text1, int32_t ___start2, int32_t ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
