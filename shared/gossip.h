#pragma once
#pragma warning (disable: 4996)
#include <common/commonDefines.h> // for max_message_size
#include <unordered_map>
#include <vector>
#include <atomic>
/* Code generated by cmd/cgo; DO NOT EDIT. */
// We've modified the original header generated by Go to link to the dll.
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
/* package gossip */
typedef void(*DataHandler)(const char*);

#line 1 "cgo-builtin-prolog"

#include <stddef.h> /* for ptrdiff_t below */
#define __SIZE_TYPE__ long unsigned int
#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

typedef struct { const char *p; ptrdiff_t n; } _GoString_;

#endif

/* Start of preamble from import "C" comments.  */

/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

typedef _GoString_ GoString;
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

typedef void(*func_ptr_GoInt)(GoInt) ;
typedef void(*func_ptr_GoUint8)(GoUint8);
typedef void(*func_ptr_GoString)(GoString);
typedef void(*func_ptr_Void)();
typedef void(*func_ptr_DataHandler)(DataHandler);

// Note: This function allocates new memory for the string. To delete it, delete RETURN.p.
GoString toGoString(const std::string& str);
void SetListenPort(GoInt p0);
// Spawns a new thread to run the listener.
void Begin();
void SetHeartbeatMillis(GoInt p0);
void SetListenIP(GoString p0);
void SetBootstrapNode(GoString p0);
void SetMaxBroadcastBytes(GoInt p0);
void BroadcastString(GoString p0);
void SetMulticastEnabled(GoUint8 p0);
void SetLogThreshold(const std::string& level);
void initializeGossip(DataHandler handler, GoInt listenPort, std::string bootstrapNode = "");
void SetDataCallback(DataHandler handler);