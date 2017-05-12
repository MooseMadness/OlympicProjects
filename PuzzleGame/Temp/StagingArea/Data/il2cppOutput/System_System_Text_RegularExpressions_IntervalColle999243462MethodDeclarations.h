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

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t999243462;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t1747369530;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval2175215420.h"
#include "System_System_Text_RegularExpressions_IntervalColl1747369530.h"
#include "System_System_Text_RegularExpressions_IntervalColle999243462.h"
#include "mscorlib_System_Array4136897760.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern "C"  void IntervalCollection__ctor_m761408702 (IntervalCollection_t999243462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern "C"  Interval_t2175215420  IntervalCollection_get_Item_m1667788970 (IntervalCollection_t999243462 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern "C"  void IntervalCollection_Add_m474325761 (IntervalCollection_t999243462 * __this, Interval_t2175215420  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern "C"  void IntervalCollection_Normalize_m538796191 (IntervalCollection_t999243462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C"  IntervalCollection_t999243462 * IntervalCollection_GetMetaCollection_m3859513527 (IntervalCollection_t999243462 * __this, CostDelegate_t1747369530 * ___cost_del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C"  void IntervalCollection_Optimize_m2229933552 (IntervalCollection_t999243462 * __this, int32_t ___begin0, int32_t ___end1, IntervalCollection_t999243462 * ___meta2, CostDelegate_t1747369530 * ___cost_del3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern "C"  int32_t IntervalCollection_get_Count_m2594835678 (IntervalCollection_t999243462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern "C"  bool IntervalCollection_get_IsSynchronized_m3275151195 (IntervalCollection_t999243462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern "C"  Il2CppObject * IntervalCollection_get_SyncRoot_m1793599803 (IntervalCollection_t999243462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern "C"  void IntervalCollection_CopyTo_m3977468795 (IntervalCollection_t999243462 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern "C"  Il2CppObject * IntervalCollection_GetEnumerator_m1653952170 (IntervalCollection_t999243462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
