#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.StackTraceUtility
struct StackTraceUtility_t5_117;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Diagnostics.StackTrace
struct StackTrace_t1_195;
// UnityEngine.UnityException
struct UnityException_t5_118;
// System.Exception
struct Exception_t1_33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t5_119;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t5_120;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t5_121;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t5_124;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t5_125;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t5_126;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t5_127;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5_128;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t5_129;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t5_130;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t5_131;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t5_133;
// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t5_70;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackTrace.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
#include "mscorlib_System_Exception.h"
#include "mscorlib_System_Text_StringBuilder.h"
#include "mscorlib_System_ArgumentException.h"
#include "mscorlib_System_ExceptionMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_Reflection_MemberInfo.h"
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Char.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackFrame.h"
#include "mscorlib_System_Reflection_MethodBase.h"
#include "mscorlib_System_Reflection_ParameterInfo.h"
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_UnityException.h"
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"
#include "mscorlib_System_AttributeMethodDeclarations.h"
#include "mscorlib_System_Attribute.h"
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
#include "mscorlib_System_Enum.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_AsyncCallback.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m5_536 (Range_t5_108 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m5_537 (StackTraceUtility_t5_117 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t5_117_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m5_538 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		StackTraceUtility_t5_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t5_117_StaticFields*)StackTraceUtility_t5_117_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t5_117_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m5_539 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t5_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		((StackTraceUtility_t5_117_StaticFields*)StackTraceUtility_t5_117_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t1_195_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t5_117_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m5_540 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t1_195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		StackTraceUtility_t5_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t1_195 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t1_195 * L_0 = (StackTrace_t1_195 *)il2cpp_codegen_object_new (StackTrace_t1_195_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1_1839(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t1_195 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m5_545(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m1_405(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2541;
extern Il2CppCodeGenString* _stringLiteral2542;
extern Il2CppCodeGenString* _stringLiteral2543;
extern Il2CppCodeGenString* _stringLiteral2544;
extern Il2CppCodeGenString* _stringLiteral2545;
extern Il2CppCodeGenString* _stringLiteral2546;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m5_541 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral2541 = il2cpp_codegen_string_literal_from_index(2541);
		_stringLiteral2542 = il2cpp_codegen_string_literal_from_index(2542);
		_stringLiteral2543 = il2cpp_codegen_string_literal_from_index(2543);
		_stringLiteral2544 = il2cpp_codegen_string_literal_from_index(2544);
		_stringLiteral2545 = il2cpp_codegen_string_literal_from_index(2545);
		_stringLiteral2546 = il2cpp_codegen_string_literal_from_index(2546);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m1_396(L_1, _stringLiteral2541, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m1_396(L_3, _stringLiteral2542, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m1_396(L_5, _stringLiteral2543, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m1_396(L_7, _stringLiteral2544, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m1_396(L_9, _stringLiteral2545, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m1_396(L_11, _stringLiteral2546, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t5_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2547;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m5_542 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		StackTraceUtility_t5_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		_stringLiteral2547 = il2cpp_codegen_string_literal_from_index(2547);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m5_543(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m1_416(NULL /*static, unused*/, L_3, _stringLiteral2547, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t1_634_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t1_144_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t1_195_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t5_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2548;
extern Il2CppCodeGenString* _stringLiteral2549;
extern Il2CppCodeGenString* _stringLiteral2547;
extern Il2CppCodeGenString* _stringLiteral225;
extern Il2CppCodeGenString* _stringLiteral2550;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m5_543 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1_634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		StringBuilder_t1_144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		StackTrace_t1_195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		StackTraceUtility_t5_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		_stringLiteral2548 = il2cpp_codegen_string_literal_from_index(2548);
		_stringLiteral2549 = il2cpp_codegen_string_literal_from_index(2549);
		_stringLiteral2547 = il2cpp_codegen_string_literal_from_index(2547);
		_stringLiteral225 = il2cpp_codegen_string_literal_from_index(225);
		_stringLiteral2550 = il2cpp_codegen_string_literal_from_index(2550);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1_33 * V_0 = {0};
	StringBuilder_t1_144 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t1_195 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t1_634 * L_1 = (ArgumentException_t1_634 *)il2cpp_codegen_object_new (ArgumentException_t1_634_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1_4536(L_1, _stringLiteral2548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t1_33 *)IsInstClass(L_2, Exception_t1_33_il2cpp_TypeInfo_var));
		Exception_t1_33 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t1_634 * L_4 = (ArgumentException_t1_634 *)il2cpp_codegen_object_new (ArgumentException_t1_634_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1_4536(L_4, _stringLiteral2549, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		Exception_t1_33 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t1_33 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1_425(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t1_144 * L_10 = (StringBuilder_t1_144 *)il2cpp_codegen_object_new (StringBuilder_t1_144_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1_4268(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1_425(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t1_33 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t1_33 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1_416(NULL /*static, unused*/, L_19, _stringLiteral2547, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t1_33 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t1_33 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t1_33 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m1_354(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1_425(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1_415(NULL /*static, unused*/, L_33, _stringLiteral225, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m1_415(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t1_33 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t1_33 * L_41 = (Exception_t1_33 *)VirtFuncInvoker0< Exception_t1_33 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1_417(NULL /*static, unused*/, _stringLiteral2550, L_42, _stringLiteral2547, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t1_33 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t1_33 * L_46 = (Exception_t1_33 *)VirtFuncInvoker0< Exception_t1_33 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t1_33 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t1_144 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m1_415(NULL /*static, unused*/, L_49, _stringLiteral2547, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m1_4284(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t1_195 * L_51 = (StackTrace_t1_195 *)il2cpp_codegen_object_new (StackTrace_t1_195_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1_1839(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t1_144 * L_52 = V_1;
		StackTrace_t1_195 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m5_545(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m1_4284(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t1_144 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m1_4279(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t1_16_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t1_144_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t5_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2551;
extern Il2CppCodeGenString* _stringLiteral2552;
extern Il2CppCodeGenString* _stringLiteral2553;
extern Il2CppCodeGenString* _stringLiteral2554;
extern Il2CppCodeGenString* _stringLiteral2555;
extern Il2CppCodeGenString* _stringLiteral2556;
extern Il2CppCodeGenString* _stringLiteral228;
extern Il2CppCodeGenString* _stringLiteral230;
extern Il2CppCodeGenString* _stringLiteral2557;
extern Il2CppCodeGenString* _stringLiteral2558;
extern Il2CppCodeGenString* _stringLiteral2559;
extern Il2CppCodeGenString* _stringLiteral2560;
extern Il2CppCodeGenString* _stringLiteral2561;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral2547;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m5_544 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		CharU5BU5D_t1_16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		StringBuilder_t1_144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		StackTraceUtility_t5_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		_stringLiteral2551 = il2cpp_codegen_string_literal_from_index(2551);
		_stringLiteral2552 = il2cpp_codegen_string_literal_from_index(2552);
		_stringLiteral2553 = il2cpp_codegen_string_literal_from_index(2553);
		_stringLiteral2554 = il2cpp_codegen_string_literal_from_index(2554);
		_stringLiteral2555 = il2cpp_codegen_string_literal_from_index(2555);
		_stringLiteral2556 = il2cpp_codegen_string_literal_from_index(2556);
		_stringLiteral228 = il2cpp_codegen_string_literal_from_index(228);
		_stringLiteral230 = il2cpp_codegen_string_literal_from_index(230);
		_stringLiteral2557 = il2cpp_codegen_string_literal_from_index(2557);
		_stringLiteral2558 = il2cpp_codegen_string_literal_from_index(2558);
		_stringLiteral2559 = il2cpp_codegen_string_literal_from_index(2559);
		_stringLiteral2560 = il2cpp_codegen_string_literal_from_index(2560);
		_stringLiteral2561 = il2cpp_codegen_string_literal_from_index(2561);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		_stringLiteral2547 = il2cpp_codegen_string_literal_from_index(2547);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t1_198* V_0 = {0};
	StringBuilder_t1_144 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t1_16* L_3 = ((CharU5BU5D_t1_16*)SZArrayNew(CharU5BU5D_t1_16_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t1_198* L_4 = String_Split_m1_346(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1_425(L_5, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_7 = (StringBuilder_t1_144 *)il2cpp_codegen_object_new (StringBuilder_t1_144_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1_4268(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t1_198* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t1_198* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m1_354((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9, sizeof(String_t*))) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t1_198* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_16)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t1_198* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19, sizeof(String_t*)));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1_425(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1_341(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m1_396(L_24, _stringLiteral2551, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m1_396(L_27, _stringLiteral2552, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t1_198* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_31)->max_length))))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m5_541(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t1_198* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m5_541(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36, sizeof(String_t*))), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m1_383(L_38, _stringLiteral2553, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1_352(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m1_383(L_44, _stringLiteral2554, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m1_383(L_46, _stringLiteral2555, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m1_383(L_48, _stringLiteral2556, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m1_396(L_51, _stringLiteral228, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m1_369(L_53, _stringLiteral230, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m1_396(L_55, _stringLiteral2557, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1_401(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m1_383(L_59, _stringLiteral2558, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m1_384(L_62, _stringLiteral230, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1_401(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m1_398(L_73, _stringLiteral2559, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t5_117_StaticFields*)StackTraceUtility_t5_117_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m1_398(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m1_397(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m1_392(L_82, _stringLiteral2560, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1_401(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1_421(L_88, L_89, _stringLiteral2561, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m1_425(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1_421(L_91, L_93, _stringLiteral93, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t1_144 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m1_415(NULL /*static, unused*/, L_96, _stringLiteral2547, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m1_4284(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t1_198* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_100)->max_length)))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t1_144 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m1_4279(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t1_144_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t5_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral49;
extern Il2CppCodeGenString* _stringLiteral620;
extern Il2CppCodeGenString* _stringLiteral583;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral93;
extern Il2CppCodeGenString* _stringLiteral2562;
extern Il2CppCodeGenString* _stringLiteral2563;
extern Il2CppCodeGenString* _stringLiteral2561;
extern Il2CppCodeGenString* _stringLiteral2547;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m5_545 (Object_t * __this /* static, unused */, StackTrace_t1_195 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t1_144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		StackTraceUtility_t5_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(893);
		_stringLiteral49 = il2cpp_codegen_string_literal_from_index(49);
		_stringLiteral620 = il2cpp_codegen_string_literal_from_index(620);
		_stringLiteral583 = il2cpp_codegen_string_literal_from_index(583);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral93 = il2cpp_codegen_string_literal_from_index(93);
		_stringLiteral2562 = il2cpp_codegen_string_literal_from_index(2562);
		_stringLiteral2563 = il2cpp_codegen_string_literal_from_index(2563);
		_stringLiteral2561 = il2cpp_codegen_string_literal_from_index(2561);
		_stringLiteral2547 = il2cpp_codegen_string_literal_from_index(2547);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t1_144 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t1_193 * V_2 = {0};
	MethodBase_t1_194 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t1_799* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t1_144 * L_0 = (StringBuilder_t1_144 *)il2cpp_codegen_object_new (StringBuilder_t1_144_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1_4268(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t1_195 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t1_193 * L_3 = (StackFrame_t1_193 *)VirtFuncInvoker1< StackFrame_t1_193 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t1_193 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t1_194 * L_5 = (MethodBase_t1_194 *)VirtFuncInvoker0< MethodBase_t1_194 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t1_194 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t1_194 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1_425(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t1_144 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m1_4284(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1_4284(L_17, _stringLiteral49, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t1_144 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m1_4284(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m1_4284(L_21, _stringLiteral620, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_22 = V_0;
		MethodBase_t1_194 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m1_4284(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1_4284(L_25, _stringLiteral583, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t1_194 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t1_799* L_27 = (ParameterInfoU5BU5D_t1_799*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1_799* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t1_144 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m1_4284(L_29, _stringLiteral141, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t1_144 * L_30 = V_0;
		ParameterInfoU5BU5D_t1_799* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t1_344 **)(ParameterInfo_t1_344 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t1_344 *))));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1_344 **)(ParameterInfo_t1_344 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t1_344 *))));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m1_4284(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t1_799* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_38)->max_length)))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t1_144 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m1_4284(L_39, _stringLiteral93, /*hidden argument*/NULL);
		StackFrame_t1_193 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1_451(NULL /*static, unused*/, L_44, _stringLiteral2562, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m1_451(NULL /*static, unused*/, L_47, _stringLiteral2563, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t1_144 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m1_4284(L_49, _stringLiteral2561, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t5_117_StaticFields*)StackTraceUtility_t5_117_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m1_396(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t5_117_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t5_117_StaticFields*)StackTraceUtility_t5_117_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m1_425(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1_425(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t5_117_StaticFields*)StackTraceUtility_t5_117_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m1_425(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1_352(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t1_144 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m1_4284(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m1_4284(L_63, _stringLiteral620, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_64 = V_0;
		StackFrame_t1_193 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m1_63((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m1_4284(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t1_144 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m1_4284(L_68, _stringLiteral93, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t1_144 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m1_4284(L_69, _stringLiteral2547, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t1_195 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t1_144 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m1_4279(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Void UnityEngine.UnityException::.ctor()
extern Il2CppCodeGenString* _stringLiteral2564;
extern "C" void UnityException__ctor_m5_546 (UnityException_t5_118 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2564 = il2cpp_codegen_string_literal_from_index(2564);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m1_927(__this, _stringLiteral2564, /*hidden argument*/NULL);
		Exception_set_HResult_m1_931(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m5_547 (UnityException_t5_118 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1_927(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m1_931(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m5_548 (UnityException_t5_118 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t1_33 * L_1 = ___innerException;
		Exception__ctor_m1_929(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m1_931(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m5_549 (UnityException_t5_118 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1_176 * L_0 = ___info;
		StreamingContext_t1_502  L_1 = ___context;
		Exception__ctor_m1_928(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m5_550 (SharedBetweenAnimatorsAttribute_t5_119 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m5_551 (StateMachineBehaviour_t5_120 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m5_15(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m5_552 (ArgumentCache_t5_121 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t2_88_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2565;
extern Il2CppCodeGenString* _stringLiteral2566;
extern Il2CppCodeGenString* _stringLiteral2567;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m5_553 (ArgumentCache_t5_121 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Regex_t2_88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(638);
		_stringLiteral2565 = il2cpp_codegen_string_literal_from_index(2565);
		_stringLiteral2566 = il2cpp_codegen_string_literal_from_index(2566);
		_stringLiteral2567 = il2cpp_codegen_string_literal_from_index(2567);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1_394(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t2_88_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m2_493(NULL /*static, unused*/, L_2, _stringLiteral2565, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m2_493(NULL /*static, unused*/, L_5, _stringLiteral2566, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m2_493(NULL /*static, unused*/, L_8, _stringLiteral2567, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m5_554 (ArgumentCache_t5_121 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m5_553(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m5_555 (ArgumentCache_t5_121 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m5_553(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t5_121_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m5_556 (PersistentCall_t5_124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t5_121_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(894);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t5_121 * L_0 = (ArgumentCache_t5_121 *)il2cpp_codegen_object_new (ArgumentCache_t5_121_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m5_552(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_0 = L_0;
		__this->___m_CallState_1 = 2;
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t1_877_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1_5462_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m5_557 (PersistentCallGroup_t5_125 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(896);
		List_1__ctor_m1_5462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		List_1_t1_877 * L_0 = (List_1_t1_877 *)il2cpp_codegen_object_new (List_1_t1_877_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5462(L_0, /*hidden argument*/List_1__ctor_m1_5462_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t1_878_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1_5463_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m5_558 (InvokableCallList_t5_126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(898);
		List_1__ctor_m1_5463_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1_878 * L_0 = (List_1_t1_878 *)il2cpp_codegen_object_new (List_1_t1_878_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5463(L_0, /*hidden argument*/List_1__ctor_m1_5463_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t1_878 * L_1 = (List_1_t1_878 *)il2cpp_codegen_object_new (List_1_t1_878_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5463(L_1, /*hidden argument*/List_1__ctor_m1_5463_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t1_878 * L_2 = (List_1_t1_878 *)il2cpp_codegen_object_new (List_1_t1_878_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5463(L_2, /*hidden argument*/List_1__ctor_m1_5463_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m5_559 (InvokableCallList_t5_126 * __this, const MethodInfo* method)
{
	{
		List_1_t1_878 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t5_126_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t5_125_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m5_560 (UnityEventBase_t5_127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t5_126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(899);
		PersistentCallGroup_t5_125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(900);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		InvokableCallList_t5_126 * L_0 = (InvokableCallList_t5_126 *)il2cpp_codegen_object_new (InvokableCallList_t5_126_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m5_558(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t5_125 * L_1 = (PersistentCallGroup_t5_125 *)il2cpp_codegen_object_new (PersistentCallGroup_t5_125_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m5_557(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1_5(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5_561 (UnityEventBase_t5_127 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5_562 (UnityEventBase_t5_127 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m5_563(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1_5(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m5_563 (UnityEventBase_t5_127 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t5_126 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m5_559(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral232;
extern "C" String_t* UnityEventBase_ToString_m5_564 (UnityEventBase_t5_127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral232 = il2cpp_codegen_string_literal_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m1_7(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1_5(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1_416(NULL /*static, unused*/, L_0, _stringLiteral232, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m5_565 (UnityEvent_t5_128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t1_156*)SZArrayNew(ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m5_560(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m5_566 (DefaultValueAttribute_t5_129 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m5_567 (DefaultValueAttribute_t5_129 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t5_129_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m5_568 (DefaultValueAttribute_t5_129 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t5_129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t5_129 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t5_129 *)IsInstClass(L_0, DefaultValueAttribute_t5_129_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t5_129 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t5_129 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m5_567(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t5_129 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m5_567(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m5_569 (DefaultValueAttribute_t5_129 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m1_21(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m5_570 (ExcludeFromDocsAttribute_t5_130 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m5_571 (FormerlySerializedAsAttribute_t5_131 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t5_132_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m5_572 (TypeInferenceRuleAttribute_t5_133 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t5_132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(902);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t5_132_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m5_573(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m5_573 (TypeInferenceRuleAttribute_t5_133 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m5_574 (TypeInferenceRuleAttribute_t5_133 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate__ctor_m5_575 (UnityAdsDelegate_t5_70 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m5_576 (UnityAdsDelegate_t5_70 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_Invoke_m5_576((UnityAdsDelegate_t5_70 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t5_70(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m5_577 (UnityAdsDelegate_t5_70 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m5_578 (UnityAdsDelegate_t5_70 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
