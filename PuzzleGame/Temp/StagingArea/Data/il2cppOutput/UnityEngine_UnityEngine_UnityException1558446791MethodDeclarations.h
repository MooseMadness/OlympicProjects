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

// UnityEngine.UnityException
struct UnityException_t1558446791;
// System.String
struct String_t;
// System.Exception
struct Exception_t1145979430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void UnityEngine.UnityException::.ctor()
extern "C"  void UnityException__ctor_m3650417185 (UnityException_t1558446791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C"  void UnityException__ctor_m1554762831 (UnityException_t1558446791 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C"  void UnityException__ctor_m2835958127 (UnityException_t1558446791 * __this, String_t* ___message0, Exception_t1145979430 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
