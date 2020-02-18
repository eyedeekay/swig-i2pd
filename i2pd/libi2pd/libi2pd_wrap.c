/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/* source: libi2pd.i */

#define SWIGMODULE i2pd
#define SWIGGO_PREFIX go.i2pd
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
#include "api.h"
#include "Base.h"
#include "Blinding.h"
#include "BloomFilter.h"
#include "ChaCha20.h"
#include "Config.h"
#include "CPU.h"
#include "Crypto.h"
#include "CryptoKey.h"
#include "CryptoWorker.h"
#include "Datagram.h"
#include "Destination.h"
#include "Ed25519.h"
#include "Event.h"
#include "Family.h"
#include "FS.h"
#include "Garlic.h"
#include "Gost.h"
#include "Gzip.h"
#include "HTTP.h"
#include "I2NPProtocol.h"
#include "I2PEndian.h"
#include "Identity.h"
#include "LeaseSet.h"
#include "NetDbRequests.h"
#include "NTCP2.h"
#include "NTCPSession.h"
#include "Poly1305.h"
#include "Profiling.h"
#include "Queue.h"
#include "Reseed.h"
#include "RouterContext.h"
#include "RouterInfo.h"
#include "Signature.h"
#include "Siphash.h"
#include "SSUData.h"
#include "SSU.h"
#include "SSUSession.h"
#include "Streaming.h"
#include "Tag.h"
#include "Timestamp.h"
#include "TransitTunnel.h"
#include "TransportSession.h"
#include "Transports.h"
#include "TunnelBase.h"
#include "TunnelConfig.h"
#include "TunnelEndpoint.h"
#include "TunnelGateway.h"
#include "Tunnel.h"
#include "TunnelPool.h"
#include "util.h"
#include "version.h"

#ifdef __cplusplus
extern "C" {
#endif

void go__wrap_Swig_free_i2pd_1dc115fabc28a9e4(void *garg1) __asm__("go.i2pd__wrap_Swig_free_i2pd_1dc115fabc28a9e4");
void go__wrap_Swig_free_i2pd_1dc115fabc28a9e4(void *garg1) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&garg1; 
  
  Swig_free(arg1);
  
}


void *go__wrap_Swig_malloc_i2pd_1dc115fabc28a9e4(intgo garg1) __asm__("go.i2pd__wrap_Swig_malloc_i2pd_1dc115fabc28a9e4");
void *go__wrap_Swig_malloc_i2pd_1dc115fabc28a9e4(intgo garg1) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)garg1; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


void go__wrap_i2p_set_i2pd_1dc115fabc28a9e4(namespace *garg1) __asm__("go.i2pd__wrap_i2p_set_i2pd_1dc115fabc28a9e4");
void go__wrap_i2p_set_i2pd_1dc115fabc28a9e4(namespace *garg1) {
  namespace arg1 ;
  namespace *argp1 ;
  
  
  argp1 = (namespace *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null namespace");
  }
  arg1 = (namespace)*argp1;
  
  
  i2p = arg1;
  
}


namespace *go__wrap_i2p_get_i2pd_1dc115fabc28a9e4() __asm__("go.i2pd__wrap_i2p_get_i2pd_1dc115fabc28a9e4");
namespace *go__wrap_i2p_get_i2pd_1dc115fabc28a9e4() {
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


intgo go__wrap_DSA_set0_pqg_i2pd_1dc115fabc28a9e4(DSA *garg1, BIGNUM *garg2, BIGNUM *garg3, BIGNUM *garg4) __asm__("go.i2pd__wrap_DSA_set0_pqg_i2pd_1dc115fabc28a9e4");
intgo go__wrap_DSA_set0_pqg_i2pd_1dc115fabc28a9e4(DSA *garg1, BIGNUM *garg2, BIGNUM *garg3, BIGNUM *garg4) {
  DSA *arg1 = (DSA *) 0 ;
  BIGNUM *arg2 = (BIGNUM *) 0 ;
  BIGNUM *arg3 = (BIGNUM *) 0 ;
  BIGNUM *arg4 = (BIGNUM *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(DSA **)&garg1; 
  arg2 = *(BIGNUM **)&garg2; 
  arg3 = *(BIGNUM **)&garg3; 
  arg4 = *(BIGNUM **)&garg4; 
  
  result = (int)DSA_set0_pqg(arg1,arg2,arg3,arg4);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo go__wrap_DSA_set0_key_i2pd_1dc115fabc28a9e4(DSA *garg1, BIGNUM *garg2, BIGNUM *garg3) __asm__("go.i2pd__wrap_DSA_set0_key_i2pd_1dc115fabc28a9e4");
intgo go__wrap_DSA_set0_key_i2pd_1dc115fabc28a9e4(DSA *garg1, BIGNUM *garg2, BIGNUM *garg3) {
  DSA *arg1 = (DSA *) 0 ;
  BIGNUM *arg2 = (BIGNUM *) 0 ;
  BIGNUM *arg3 = (BIGNUM *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(DSA **)&garg1; 
  arg2 = *(BIGNUM **)&garg2; 
  arg3 = *(BIGNUM **)&garg3; 
  
  result = (int)DSA_set0_key(arg1,arg2,arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


void go__wrap_DSA_get0_key_i2pd_1dc115fabc28a9e4(DSA *garg1, BIGNUM **garg2, BIGNUM **garg3) __asm__("go.i2pd__wrap_DSA_get0_key_i2pd_1dc115fabc28a9e4");
void go__wrap_DSA_get0_key_i2pd_1dc115fabc28a9e4(DSA *garg1, BIGNUM **garg2, BIGNUM **garg3) {
  DSA *arg1 = (DSA *) 0 ;
  BIGNUM **arg2 = (BIGNUM **) 0 ;
  BIGNUM **arg3 = (BIGNUM **) 0 ;
  
  arg1 = *(DSA **)&garg1; 
  arg2 = *(BIGNUM ***)&garg2; 
  arg3 = *(BIGNUM ***)&garg3; 
  
  DSA_get0_key((DSA const *)arg1,(BIGNUM const **)arg2,(BIGNUM const **)arg3);
  
}


intgo go__wrap_DSA_SIG_set0_i2pd_1dc115fabc28a9e4(DSA_SIG *garg1, BIGNUM *garg2, BIGNUM *garg3) __asm__("go.i2pd__wrap_DSA_SIG_set0_i2pd_1dc115fabc28a9e4");
intgo go__wrap_DSA_SIG_set0_i2pd_1dc115fabc28a9e4(DSA_SIG *garg1, BIGNUM *garg2, BIGNUM *garg3) {
  DSA_SIG *arg1 = (DSA_SIG *) 0 ;
  BIGNUM *arg2 = (BIGNUM *) 0 ;
  BIGNUM *arg3 = (BIGNUM *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(DSA_SIG **)&garg1; 
  arg2 = *(BIGNUM **)&garg2; 
  arg3 = *(BIGNUM **)&garg3; 
  
  result = (int)DSA_SIG_set0(arg1,arg2,arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


void go__wrap_DSA_SIG_get0_i2pd_1dc115fabc28a9e4(DSA_SIG *garg1, BIGNUM **garg2, BIGNUM **garg3) __asm__("go.i2pd__wrap_DSA_SIG_get0_i2pd_1dc115fabc28a9e4");
void go__wrap_DSA_SIG_get0_i2pd_1dc115fabc28a9e4(DSA_SIG *garg1, BIGNUM **garg2, BIGNUM **garg3) {
  DSA_SIG *arg1 = (DSA_SIG *) 0 ;
  BIGNUM **arg2 = (BIGNUM **) 0 ;
  BIGNUM **arg3 = (BIGNUM **) 0 ;
  
  arg1 = *(DSA_SIG **)&garg1; 
  arg2 = *(BIGNUM ***)&garg2; 
  arg3 = *(BIGNUM ***)&garg3; 
  
  DSA_SIG_get0((DSA_SIG const *)arg1,(BIGNUM const **)arg2,(BIGNUM const **)arg3);
  
}


intgo go__wrap_ECDSA_SIG_set0_i2pd_1dc115fabc28a9e4(ECDSA_SIG *garg1, BIGNUM *garg2, BIGNUM *garg3) __asm__("go.i2pd__wrap_ECDSA_SIG_set0_i2pd_1dc115fabc28a9e4");
intgo go__wrap_ECDSA_SIG_set0_i2pd_1dc115fabc28a9e4(ECDSA_SIG *garg1, BIGNUM *garg2, BIGNUM *garg3) {
  ECDSA_SIG *arg1 = (ECDSA_SIG *) 0 ;
  BIGNUM *arg2 = (BIGNUM *) 0 ;
  BIGNUM *arg3 = (BIGNUM *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(ECDSA_SIG **)&garg1; 
  arg2 = *(BIGNUM **)&garg2; 
  arg3 = *(BIGNUM **)&garg3; 
  
  result = (int)ECDSA_SIG_set0(arg1,arg2,arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


void go__wrap_ECDSA_SIG_get0_i2pd_1dc115fabc28a9e4(ECDSA_SIG *garg1, BIGNUM **garg2, BIGNUM **garg3) __asm__("go.i2pd__wrap_ECDSA_SIG_get0_i2pd_1dc115fabc28a9e4");
void go__wrap_ECDSA_SIG_get0_i2pd_1dc115fabc28a9e4(ECDSA_SIG *garg1, BIGNUM **garg2, BIGNUM **garg3) {
  ECDSA_SIG *arg1 = (ECDSA_SIG *) 0 ;
  BIGNUM **arg2 = (BIGNUM **) 0 ;
  BIGNUM **arg3 = (BIGNUM **) 0 ;
  
  arg1 = *(ECDSA_SIG **)&garg1; 
  arg2 = *(BIGNUM ***)&garg2; 
  arg3 = *(BIGNUM ***)&garg3; 
  
  ECDSA_SIG_get0((ECDSA_SIG const *)arg1,(BIGNUM const **)arg2,(BIGNUM const **)arg3);
  
}


intgo go__wrap_RSA_set0_key_i2pd_1dc115fabc28a9e4(RSA *garg1, BIGNUM *garg2, BIGNUM *garg3, BIGNUM *garg4) __asm__("go.i2pd__wrap_RSA_set0_key_i2pd_1dc115fabc28a9e4");
intgo go__wrap_RSA_set0_key_i2pd_1dc115fabc28a9e4(RSA *garg1, BIGNUM *garg2, BIGNUM *garg3, BIGNUM *garg4) {
  RSA *arg1 = (RSA *) 0 ;
  BIGNUM *arg2 = (BIGNUM *) 0 ;
  BIGNUM *arg3 = (BIGNUM *) 0 ;
  BIGNUM *arg4 = (BIGNUM *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(RSA **)&garg1; 
  arg2 = *(BIGNUM **)&garg2; 
  arg3 = *(BIGNUM **)&garg3; 
  arg4 = *(BIGNUM **)&garg4; 
  
  result = (int)RSA_set0_key(arg1,arg2,arg3,arg4);
  _swig_go_result = result; 
  return _swig_go_result;
}


void go__wrap_RSA_get0_key_i2pd_1dc115fabc28a9e4(RSA *garg1, BIGNUM **garg2, BIGNUM **garg3, BIGNUM **garg4) __asm__("go.i2pd__wrap_RSA_get0_key_i2pd_1dc115fabc28a9e4");
void go__wrap_RSA_get0_key_i2pd_1dc115fabc28a9e4(RSA *garg1, BIGNUM **garg2, BIGNUM **garg3, BIGNUM **garg4) {
  RSA *arg1 = (RSA *) 0 ;
  BIGNUM **arg2 = (BIGNUM **) 0 ;
  BIGNUM **arg3 = (BIGNUM **) 0 ;
  BIGNUM **arg4 = (BIGNUM **) 0 ;
  
  arg1 = *(RSA **)&garg1; 
  arg2 = *(BIGNUM ***)&garg2; 
  arg3 = *(BIGNUM ***)&garg3; 
  arg4 = *(BIGNUM ***)&garg4; 
  
  RSA_get0_key((RSA const *)arg1,(BIGNUM const **)arg2,(BIGNUM const **)arg3,(BIGNUM const **)arg4);
  
}


intgo go__wrap_DH_set0_pqg_i2pd_1dc115fabc28a9e4(DH *garg1, BIGNUM *garg2, BIGNUM *garg3, BIGNUM *garg4) __asm__("go.i2pd__wrap_DH_set0_pqg_i2pd_1dc115fabc28a9e4");
intgo go__wrap_DH_set0_pqg_i2pd_1dc115fabc28a9e4(DH *garg1, BIGNUM *garg2, BIGNUM *garg3, BIGNUM *garg4) {
  DH *arg1 = (DH *) 0 ;
  BIGNUM *arg2 = (BIGNUM *) 0 ;
  BIGNUM *arg3 = (BIGNUM *) 0 ;
  BIGNUM *arg4 = (BIGNUM *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(DH **)&garg1; 
  arg2 = *(BIGNUM **)&garg2; 
  arg3 = *(BIGNUM **)&garg3; 
  arg4 = *(BIGNUM **)&garg4; 
  
  result = (int)DH_set0_pqg(arg1,arg2,arg3,arg4);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo go__wrap_DH_set0_key_i2pd_1dc115fabc28a9e4(DH *garg1, BIGNUM *garg2, BIGNUM *garg3) __asm__("go.i2pd__wrap_DH_set0_key_i2pd_1dc115fabc28a9e4");
intgo go__wrap_DH_set0_key_i2pd_1dc115fabc28a9e4(DH *garg1, BIGNUM *garg2, BIGNUM *garg3) {
  DH *arg1 = (DH *) 0 ;
  BIGNUM *arg2 = (BIGNUM *) 0 ;
  BIGNUM *arg3 = (BIGNUM *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(DH **)&garg1; 
  arg2 = *(BIGNUM **)&garg2; 
  arg3 = *(BIGNUM **)&garg3; 
  
  result = (int)DH_set0_key(arg1,arg2,arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


void go__wrap_DH_get0_key_i2pd_1dc115fabc28a9e4(DH *garg1, BIGNUM **garg2, BIGNUM **garg3) __asm__("go.i2pd__wrap_DH_get0_key_i2pd_1dc115fabc28a9e4");
void go__wrap_DH_get0_key_i2pd_1dc115fabc28a9e4(DH *garg1, BIGNUM **garg2, BIGNUM **garg3) {
  DH *arg1 = (DH *) 0 ;
  BIGNUM **arg2 = (BIGNUM **) 0 ;
  BIGNUM **arg3 = (BIGNUM **) 0 ;
  
  arg1 = *(DH **)&garg1; 
  arg2 = *(BIGNUM ***)&garg2; 
  arg3 = *(BIGNUM ***)&garg3; 
  
  DH_get0_key((DH const *)arg1,(BIGNUM const **)arg2,(BIGNUM const **)arg3);
  
}


RSA *go__wrap_EVP_PKEY_get0_RSA_i2pd_1dc115fabc28a9e4(EVP_PKEY *garg1) __asm__("go.i2pd__wrap_EVP_PKEY_get0_RSA_i2pd_1dc115fabc28a9e4");
RSA *go__wrap_EVP_PKEY_get0_RSA_i2pd_1dc115fabc28a9e4(EVP_PKEY *garg1) {
  EVP_PKEY *arg1 = (EVP_PKEY *) 0 ;
  RSA *result = 0 ;
  RSA *_swig_go_result;
  
  arg1 = *(EVP_PKEY **)&garg1; 
  
  result = (RSA *)EVP_PKEY_get0_RSA(arg1);
  *(RSA **)&_swig_go_result = (RSA *)result; 
  return _swig_go_result;
}


EVP_MD_CTX *go__wrap_EVP_MD_CTX_new_i2pd_1dc115fabc28a9e4() __asm__("go.i2pd__wrap_EVP_MD_CTX_new_i2pd_1dc115fabc28a9e4");
EVP_MD_CTX *go__wrap_EVP_MD_CTX_new_i2pd_1dc115fabc28a9e4() {
  EVP_MD_CTX *result = 0 ;
  EVP_MD_CTX *_swig_go_result;
  
  
  result = (EVP_MD_CTX *)EVP_MD_CTX_new();
  *(EVP_MD_CTX **)&_swig_go_result = (EVP_MD_CTX *)result; 
  return _swig_go_result;
}


void go__wrap_EVP_MD_CTX_free_i2pd_1dc115fabc28a9e4(EVP_MD_CTX *garg1) __asm__("go.i2pd__wrap_EVP_MD_CTX_free_i2pd_1dc115fabc28a9e4");
void go__wrap_EVP_MD_CTX_free_i2pd_1dc115fabc28a9e4(EVP_MD_CTX *garg1) {
  EVP_MD_CTX *arg1 = (EVP_MD_CTX *) 0 ;
  
  arg1 = *(EVP_MD_CTX **)&garg1; 
  
  EVP_MD_CTX_free(arg1);
  
}


void go__wrap_QueueIntEvent_i2pd_1dc115fabc28a9e4(std::string *garg1, std::string *garg2, uint64_t *garg3) __asm__("go.i2pd__wrap_QueueIntEvent_i2pd_1dc115fabc28a9e4");
void go__wrap_QueueIntEvent_i2pd_1dc115fabc28a9e4(std::string *garg1, std::string *garg2, uint64_t *garg3) {
  std::string *arg1 = 0 ;
  std::string *arg2 = 0 ;
  uint64_t arg3 ;
  uint64_t *argp3 ;
  
  arg1 = *(std::string **)&garg1; 
  arg2 = *(std::string **)&garg2; 
  
  argp3 = (uint64_t *)garg3;
  if (argp3 == NULL) {
    _swig_gopanic("Attempt to dereference null uint64_t");
  }
  arg3 = (uint64_t)*argp3;
  
  
  QueueIntEvent((std::string const &)*arg1,(std::string const &)*arg2,arg3);
  
}


void go__wrap_EmitEvent_i2pd_1dc115fabc28a9e4(std::map< std::string,std::string > *garg1) __asm__("go.i2pd__wrap_EmitEvent_i2pd_1dc115fabc28a9e4");
void go__wrap_EmitEvent_i2pd_1dc115fabc28a9e4(std::map< std::string,std::string > *garg1) {
  EventType *arg1 = 0 ;
  
  arg1 = *(EventType **)&garg1; 
  
  EmitEvent((std::map< std::string,std::string > const &)*arg1);
  
}


uint16_t *go__wrap_htobe16_i2pd_1dc115fabc28a9e4(uint16_t *garg1) __asm__("go.i2pd__wrap_htobe16_i2pd_1dc115fabc28a9e4");
uint16_t *go__wrap_htobe16_i2pd_1dc115fabc28a9e4(uint16_t *garg1) {
  uint16_t arg1 ;
  uint16_t *argp1 ;
  uint16_t result;
  uint16_t *_swig_go_result;
  
  
  argp1 = (uint16_t *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null uint16_t");
  }
  arg1 = (uint16_t)*argp1;
  
  
  result = htobe16(arg1);
  {
    uint16_t * resultptr = (uint16_t *)malloc(sizeof(uint16_t));
    memmove(resultptr, &result, sizeof(uint16_t));
    *(uint16_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint32_t *go__wrap_htobe32_i2pd_1dc115fabc28a9e4(uint32_t *garg1) __asm__("go.i2pd__wrap_htobe32_i2pd_1dc115fabc28a9e4");
uint32_t *go__wrap_htobe32_i2pd_1dc115fabc28a9e4(uint32_t *garg1) {
  uint32_t arg1 ;
  uint32_t *argp1 ;
  uint32_t result;
  uint32_t *_swig_go_result;
  
  
  argp1 = (uint32_t *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null uint32_t");
  }
  arg1 = (uint32_t)*argp1;
  
  
  result = htobe32(arg1);
  {
    uint32_t * resultptr = (uint32_t *)malloc(sizeof(uint32_t));
    memmove(resultptr, &result, sizeof(uint32_t));
    *(uint32_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint64_t *go__wrap_htobe64_i2pd_1dc115fabc28a9e4(uint64_t *garg1) __asm__("go.i2pd__wrap_htobe64_i2pd_1dc115fabc28a9e4");
uint64_t *go__wrap_htobe64_i2pd_1dc115fabc28a9e4(uint64_t *garg1) {
  uint64_t arg1 ;
  uint64_t *argp1 ;
  uint64_t result;
  uint64_t *_swig_go_result;
  
  
  argp1 = (uint64_t *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null uint64_t");
  }
  arg1 = (uint64_t)*argp1;
  
  
  result = htobe64(arg1);
  {
    uint64_t * resultptr = (uint64_t *)malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint16_t *go__wrap_be16toh_i2pd_1dc115fabc28a9e4(uint16_t *garg1) __asm__("go.i2pd__wrap_be16toh_i2pd_1dc115fabc28a9e4");
uint16_t *go__wrap_be16toh_i2pd_1dc115fabc28a9e4(uint16_t *garg1) {
  uint16_t arg1 ;
  uint16_t *argp1 ;
  uint16_t result;
  uint16_t *_swig_go_result;
  
  
  argp1 = (uint16_t *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null uint16_t");
  }
  arg1 = (uint16_t)*argp1;
  
  
  result = be16toh(arg1);
  {
    uint16_t * resultptr = (uint16_t *)malloc(sizeof(uint16_t));
    memmove(resultptr, &result, sizeof(uint16_t));
    *(uint16_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint32_t *go__wrap_be32toh_i2pd_1dc115fabc28a9e4(uint32_t *garg1) __asm__("go.i2pd__wrap_be32toh_i2pd_1dc115fabc28a9e4");
uint32_t *go__wrap_be32toh_i2pd_1dc115fabc28a9e4(uint32_t *garg1) {
  uint32_t arg1 ;
  uint32_t *argp1 ;
  uint32_t result;
  uint32_t *_swig_go_result;
  
  
  argp1 = (uint32_t *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null uint32_t");
  }
  arg1 = (uint32_t)*argp1;
  
  
  result = be32toh(arg1);
  {
    uint32_t * resultptr = (uint32_t *)malloc(sizeof(uint32_t));
    memmove(resultptr, &result, sizeof(uint32_t));
    *(uint32_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint64_t *go__wrap_be64toh_i2pd_1dc115fabc28a9e4(uint64_t *garg1) __asm__("go.i2pd__wrap_be64toh_i2pd_1dc115fabc28a9e4");
uint64_t *go__wrap_be64toh_i2pd_1dc115fabc28a9e4(uint64_t *garg1) {
  uint64_t arg1 ;
  uint64_t *argp1 ;
  uint64_t result;
  uint64_t *_swig_go_result;
  
  
  argp1 = (uint64_t *)garg1;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null uint64_t");
  }
  arg1 = (uint64_t)*argp1;
  
  
  result = be64toh(arg1);
  {
    uint64_t * resultptr = (uint64_t *)malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint16_t *go__wrap_buf16toh_i2pd_1dc115fabc28a9e4(void *garg1) __asm__("go.i2pd__wrap_buf16toh_i2pd_1dc115fabc28a9e4");
uint16_t *go__wrap_buf16toh_i2pd_1dc115fabc28a9e4(void *garg1) {
  void *arg1 = (void *) 0 ;
  uint16_t result;
  uint16_t *_swig_go_result;
  
  arg1 = *(void **)&garg1; 
  
  result = buf16toh((void const *)arg1);
  {
    uint16_t * resultptr = (uint16_t *)malloc(sizeof(uint16_t));
    memmove(resultptr, &result, sizeof(uint16_t));
    *(uint16_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint32_t *go__wrap_buf32toh_i2pd_1dc115fabc28a9e4(void *garg1) __asm__("go.i2pd__wrap_buf32toh_i2pd_1dc115fabc28a9e4");
uint32_t *go__wrap_buf32toh_i2pd_1dc115fabc28a9e4(void *garg1) {
  void *arg1 = (void *) 0 ;
  uint32_t result;
  uint32_t *_swig_go_result;
  
  arg1 = *(void **)&garg1; 
  
  result = buf32toh((void const *)arg1);
  {
    uint32_t * resultptr = (uint32_t *)malloc(sizeof(uint32_t));
    memmove(resultptr, &result, sizeof(uint32_t));
    *(uint32_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint64_t *go__wrap_buf64toh_i2pd_1dc115fabc28a9e4(void *garg1) __asm__("go.i2pd__wrap_buf64toh_i2pd_1dc115fabc28a9e4");
uint64_t *go__wrap_buf64toh_i2pd_1dc115fabc28a9e4(void *garg1) {
  void *arg1 = (void *) 0 ;
  uint64_t result;
  uint64_t *_swig_go_result;
  
  arg1 = *(void **)&garg1; 
  
  result = buf64toh((void const *)arg1);
  {
    uint64_t * resultptr = (uint64_t *)malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint16_t *go__wrap_bufbe16toh_i2pd_1dc115fabc28a9e4(void *garg1) __asm__("go.i2pd__wrap_bufbe16toh_i2pd_1dc115fabc28a9e4");
uint16_t *go__wrap_bufbe16toh_i2pd_1dc115fabc28a9e4(void *garg1) {
  void *arg1 = (void *) 0 ;
  uint16_t result;
  uint16_t *_swig_go_result;
  
  arg1 = *(void **)&garg1; 
  
  result = bufbe16toh((void const *)arg1);
  {
    uint16_t * resultptr = (uint16_t *)malloc(sizeof(uint16_t));
    memmove(resultptr, &result, sizeof(uint16_t));
    *(uint16_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint32_t *go__wrap_bufbe32toh_i2pd_1dc115fabc28a9e4(void *garg1) __asm__("go.i2pd__wrap_bufbe32toh_i2pd_1dc115fabc28a9e4");
uint32_t *go__wrap_bufbe32toh_i2pd_1dc115fabc28a9e4(void *garg1) {
  void *arg1 = (void *) 0 ;
  uint32_t result;
  uint32_t *_swig_go_result;
  
  arg1 = *(void **)&garg1; 
  
  result = bufbe32toh((void const *)arg1);
  {
    uint32_t * resultptr = (uint32_t *)malloc(sizeof(uint32_t));
    memmove(resultptr, &result, sizeof(uint32_t));
    *(uint32_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


uint64_t *go__wrap_bufbe64toh_i2pd_1dc115fabc28a9e4(void *garg1) __asm__("go.i2pd__wrap_bufbe64toh_i2pd_1dc115fabc28a9e4");
uint64_t *go__wrap_bufbe64toh_i2pd_1dc115fabc28a9e4(void *garg1) {
  void *arg1 = (void *) 0 ;
  uint64_t result;
  uint64_t *_swig_go_result;
  
  arg1 = *(void **)&garg1; 
  
  result = bufbe64toh((void const *)arg1);
  {
    uint64_t * resultptr = (uint64_t *)malloc(sizeof(uint64_t));
    memmove(resultptr, &result, sizeof(uint64_t));
    *(uint64_t **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


void go__wrap_htobuf16_i2pd_1dc115fabc28a9e4(void *garg1, uint16_t *garg2) __asm__("go.i2pd__wrap_htobuf16_i2pd_1dc115fabc28a9e4");
void go__wrap_htobuf16_i2pd_1dc115fabc28a9e4(void *garg1, uint16_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint16_t arg2 ;
  uint16_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint16_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint16_t");
  }
  arg2 = (uint16_t)*argp2;
  
  
  htobuf16(arg1,arg2);
  
}


void go__wrap_htobuf32_i2pd_1dc115fabc28a9e4(void *garg1, uint32_t *garg2) __asm__("go.i2pd__wrap_htobuf32_i2pd_1dc115fabc28a9e4");
void go__wrap_htobuf32_i2pd_1dc115fabc28a9e4(void *garg1, uint32_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint32_t arg2 ;
  uint32_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint32_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint32_t");
  }
  arg2 = (uint32_t)*argp2;
  
  
  htobuf32(arg1,arg2);
  
}


void go__wrap_htobuf64_i2pd_1dc115fabc28a9e4(void *garg1, uint64_t *garg2) __asm__("go.i2pd__wrap_htobuf64_i2pd_1dc115fabc28a9e4");
void go__wrap_htobuf64_i2pd_1dc115fabc28a9e4(void *garg1, uint64_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint64_t arg2 ;
  uint64_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint64_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint64_t");
  }
  arg2 = (uint64_t)*argp2;
  
  
  htobuf64(arg1,arg2);
  
}


void go__wrap_htobe16buf_i2pd_1dc115fabc28a9e4(void *garg1, uint16_t *garg2) __asm__("go.i2pd__wrap_htobe16buf_i2pd_1dc115fabc28a9e4");
void go__wrap_htobe16buf_i2pd_1dc115fabc28a9e4(void *garg1, uint16_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint16_t arg2 ;
  uint16_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint16_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint16_t");
  }
  arg2 = (uint16_t)*argp2;
  
  
  htobe16buf(arg1,arg2);
  
}


void go__wrap_htobe32buf_i2pd_1dc115fabc28a9e4(void *garg1, uint32_t *garg2) __asm__("go.i2pd__wrap_htobe32buf_i2pd_1dc115fabc28a9e4");
void go__wrap_htobe32buf_i2pd_1dc115fabc28a9e4(void *garg1, uint32_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint32_t arg2 ;
  uint32_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint32_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint32_t");
  }
  arg2 = (uint32_t)*argp2;
  
  
  htobe32buf(arg1,arg2);
  
}


void go__wrap_htobe64buf_i2pd_1dc115fabc28a9e4(void *garg1, uint64_t *garg2) __asm__("go.i2pd__wrap_htobe64buf_i2pd_1dc115fabc28a9e4");
void go__wrap_htobe64buf_i2pd_1dc115fabc28a9e4(void *garg1, uint64_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint64_t arg2 ;
  uint64_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint64_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint64_t");
  }
  arg2 = (uint64_t)*argp2;
  
  
  htobe64buf(arg1,arg2);
  
}


void go__wrap_htole16buf_i2pd_1dc115fabc28a9e4(void *garg1, uint16_t *garg2) __asm__("go.i2pd__wrap_htole16buf_i2pd_1dc115fabc28a9e4");
void go__wrap_htole16buf_i2pd_1dc115fabc28a9e4(void *garg1, uint16_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint16_t arg2 ;
  uint16_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint16_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint16_t");
  }
  arg2 = (uint16_t)*argp2;
  
  
  htole16buf(arg1,arg2);
  
}


void go__wrap_htole32buf_i2pd_1dc115fabc28a9e4(void *garg1, uint32_t *garg2) __asm__("go.i2pd__wrap_htole32buf_i2pd_1dc115fabc28a9e4");
void go__wrap_htole32buf_i2pd_1dc115fabc28a9e4(void *garg1, uint32_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint32_t arg2 ;
  uint32_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint32_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint32_t");
  }
  arg2 = (uint32_t)*argp2;
  
  
  htole32buf(arg1,arg2);
  
}


void go__wrap_htole64buf_i2pd_1dc115fabc28a9e4(void *garg1, uint64_t *garg2) __asm__("go.i2pd__wrap_htole64buf_i2pd_1dc115fabc28a9e4");
void go__wrap_htole64buf_i2pd_1dc115fabc28a9e4(void *garg1, uint64_t *garg2) {
  void *arg1 = (void *) 0 ;
  uint64_t arg2 ;
  uint64_t *argp2 ;
  
  arg1 = *(void **)&garg1; 
  
  argp2 = (uint64_t *)garg2;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null uint64_t");
  }
  arg2 = (uint64_t)*argp2;
  
  
  htole64buf(arg1,arg2);
  
}


#ifdef __cplusplus
}
#endif

