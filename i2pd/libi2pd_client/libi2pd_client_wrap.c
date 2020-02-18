/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/* source: libi2pd_client.i */

#define SWIGMODULE i2pdclient
#define SWIGGO_PREFIX go.i2pdclient
/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef int intgo;
typedef unsigned int uintgo;



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;



#define SWIGGO_GCCGO

#ifdef __cplusplus
extern "C" {
#endif
extern void *_cgo_allocate(size_t);
extern void _cgo_panic(const char *);
#ifdef __cplusplus
}
#endif

#define _swig_goallocate _cgo_allocate
#define _swig_gopanic _cgo_panic



/* Implementations of SwigCgocall and friends for different versions
   of gccgo.  The Go code will call these functions using C names with
   a prefix of the module name.  The implementations here call the
   routine in libgo.  The routines to call vary depending on the gccgo
   version.  We assume that the version of gcc used to compile this
   file is the same as the version of gccgo.  */

#ifdef __cplusplus
extern "C" {
#endif

#define SWIG_GCC_VERSION \
  (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)

#if SWIG_GCC_VERSION < 40700
#define SwigDoCgocall()
#define SwigDoCgocallDone()
#define SwigDoCgocallBack()
#define SwigDoCgocallBackDone()
#elif SWIG_GCC_VERSION == 40700
void SwigDoCgocall(void) __asm__("libgo_syscall.syscall.Entersyscall");
void SwigDoCgocallDone(void) __asm__("libgo_syscall.syscall.Exitsyscall");
void SwigDoCgocallBack(void) __asm__("libgo_syscall.syscall.Exitsyscall");
void SwigDoCgocallBackDone(void) __asm__("libgo_syscall.syscall.Entersyscall");
#else
void SwigDoCgocall(void) __asm__("syscall.Cgocall");
void SwigDoCgocallDone(void) __asm__("syscall.CgocallDone");
void SwigDoCgocallBack(void) __asm__("syscall.CgocallBack");
void SwigDoCgocallBackDone(void) __asm__("syscall.CgocallBackDone");
#endif

#define SWIGSTRINGIFY2(s) #s
#define SWIGSTRINGIFY(s) SWIGSTRINGIFY2(s)

void SwigCgocall()
  __asm__(SWIGSTRINGIFY(SWIGGO_PREFIX) ".SwigCgocall");
void SwigCgocall() {
  SwigDoCgocall();
}

void SwigCgocallDone()
  __asm__(SWIGSTRINGIFY(SWIGGO_PREFIX) ".SwigCgocallDone");
void SwigCgocallDone() {
  SwigDoCgocallDone();
}

void SwigCgocallBack()
  __asm__(SWIGSTRINGIFY(SWIGGO_PREFIX) ".SwigCgocallBack");
void SwigCgocallBack() {
  SwigDoCgocallBack();
}

void SwigCgocallBackDone()
  __asm__(SWIGSTRINGIFY(SWIGGO_PREFIX) ".SwigCgocallBackDone");
void SwigCgocallBackDone() {
  SwigDoCgocallBackDone();
}

#undef SWIGSTRINGIFY
#undef SWIGSTRINGIFY2

#ifdef __cplusplus
}
#endif




/* This is here for backward compatibility, but it will not work
   with Go 1.5 or later.  Do not use it in new code.  */
static _gostring_ _swig_makegostring(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)_swig_goallocate(l + 1);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


/* Includes the header in the wrapper code */
#include "AddressBook.h"
#include "BOB.h"
#include "ClientContext.h"
#include "HTTPProxy.h"
#include "I2CP.h"
#include "I2PService.h"
#include "I2PTunnel.h"
#include "MatchedDestination.h"
#include "SAM.h"
#include "SOCKS.h"
#include "Websocket.h"
#include "WebSocks.h"

#ifdef __cplusplus
extern "C" {
#endif

void go__wrap_Swig_free_i2pdclient_813fe33f58267b59(void *garg1) __asm__("go.i2pdclient__wrap_Swig_free_i2pdclient_813fe33f58267b59");
void go__wrap_Swig_free_i2pdclient_813fe33f58267b59(void *garg1) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&garg1; 
  
  Swig_free(arg1);
  
}


void *go__wrap_Swig_malloc_i2pdclient_813fe33f58267b59(intgo garg1) __asm__("go.i2pdclient__wrap_Swig_malloc_i2pdclient_813fe33f58267b59");
void *go__wrap_Swig_malloc_i2pdclient_813fe33f58267b59(intgo garg1) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)garg1; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


void go__wrap_i2p_set_i2pdclient_813fe33f58267b59(namespace *garg1) __asm__("go.i2pdclient__wrap_i2p_set_i2pdclient_813fe33f58267b59");
void go__wrap_i2p_set_i2pdclient_813fe33f58267b59(namespace *garg1) {
  namespace arg1 ;
  namespace *argp1 ;
  
  
  argp1 = (namespace *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null namespace");
  }
  arg1 = (namespace)*argp1;
  
  
  i2p = arg1;
  
}


namespace *go__wrap_i2p_get_i2pdclient_813fe33f58267b59() __asm__("go.i2pdclient__wrap_i2p_get_i2pdclient_813fe33f58267b59");
namespace *go__wrap_i2p_get_i2pdclient_813fe33f58267b59() {
  namespace result;
  namespace *_swig_go_result;
  
  
  result = i2p;
  {
    namespace * resultptr = (namespace *)malloc(sizeof(namespace));
    memmove(resultptr, &result, sizeof(namespace));
    *(namespace **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

