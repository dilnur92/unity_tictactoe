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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t3_80;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.IO.Stream
struct Stream_t1_217;
// System.Exception
struct Exception_t1_33;
// System.Threading.WaitHandle
struct WaitHandle_t1_430;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3_554 (ReceiveRecordAsyncResult_t3_80 * __this, AsyncCallback_t1_28 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1_70* ___initialBuffer, Stream_t1_217 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1_217 * ReceiveRecordAsyncResult_get_Record_m3_555 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t1_70* ReceiveRecordAsyncResult_get_ResultingBuffer_m3_556 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t1_70* ReceiveRecordAsyncResult_get_InitialBuffer_m3_557 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3_558 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t1_33 * ReceiveRecordAsyncResult_get_AsyncException_m3_559 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3_560 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_430 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3_561 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3_562 (ReceiveRecordAsyncResult_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3_563 (ReceiveRecordAsyncResult_t3_80 * __this, Exception_t1_33 * ___ex, ByteU5BU5D_t1_70* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3_564 (ReceiveRecordAsyncResult_t3_80 * __this, Exception_t1_33 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3_565 (ReceiveRecordAsyncResult_t3_80 * __this, ByteU5BU5D_t1_70* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
