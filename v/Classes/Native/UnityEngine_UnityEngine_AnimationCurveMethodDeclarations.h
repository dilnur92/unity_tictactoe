﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AnimationCurve
struct AnimationCurve_t5_81;
struct AnimationCurve_t5_81_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t5_140;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5_445 (AnimationCurve_t5_81 * __this, KeyframeU5BU5D_t5_140* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5_446 (AnimationCurve_t5_81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5_447 (AnimationCurve_t5_81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5_448 (AnimationCurve_t5_81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5_449 (AnimationCurve_t5_81 * __this, KeyframeU5BU5D_t5_140* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t5_81_marshal(const AnimationCurve_t5_81& unmarshaled, AnimationCurve_t5_81_marshaled& marshaled);
extern "C" void AnimationCurve_t5_81_marshal_back(const AnimationCurve_t5_81_marshaled& marshaled, AnimationCurve_t5_81& unmarshaled);
extern "C" void AnimationCurve_t5_81_marshal_cleanup(AnimationCurve_t5_81_marshaled& marshaled);