/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.1
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

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


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1,
  SWIG_JavaIOException,
  SWIG_JavaRuntimeException,
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError,
  SWIG_JavaIllegalStateException,
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { SWIG_JavaIllegalStateException, "java/lang/IllegalStateException" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else



#include "../Core/EffekseerBackendCore.h"
#include "../Core/EffekseerEffectCore.h"
#include "../Core/EffekseerManagerCore.h"



#include <stdint.h>		// Use the C99 official header


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_Effekseer_swig_EffekseerCoreJNI_new_1EffekseerBackendCore(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  EffekseerBackendCore *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (EffekseerBackendCore *)new EffekseerBackendCore();
  *(EffekseerBackendCore **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_delete_1EffekseerBackendCore(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  EffekseerBackendCore *arg1 = (EffekseerBackendCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(EffekseerBackendCore **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerBackendCore_1GetDevice(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  EffekseerCoreDeviceType result;
  
  (void)jenv;
  (void)jcls;
  result = (EffekseerCoreDeviceType)EffekseerBackendCore::GetDevice();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerBackendCore_1InitializeAsOpenGL(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)EffekseerBackendCore::InitializeAsOpenGL();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerBackendCore_1Terminate(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  EffekseerBackendCore::Terminate();
}


SWIGEXPORT jlong JNICALL Java_Effekseer_swig_EffekseerCoreJNI_new_1EffekseerEffectCore(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  EffekseerEffectCore *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (EffekseerEffectCore *)new EffekseerEffectCore();
  *(EffekseerEffectCore **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_delete_1EffekseerEffectCore(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(EffekseerEffectCore **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jboolean JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerEffectCore_1Load(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jbyteArray jarg2, jint jarg3, jfloat jarg4) {
  jboolean jresult = 0 ;
  EffekseerEffectCore *arg1 = (EffekseerEffectCore *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  float arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(EffekseerEffectCore **)&jarg1; 
  {
    arg2 = (char *) jenv->GetByteArrayElements(jarg2, 0); 
  }
  arg3 = (int)jarg3; 
  arg4 = (float)jarg4; 
  result = (bool)(arg1)->Load(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  {
    jenv->ReleaseByteArrayElements(jarg2, (jbyte *) arg2, 0); 
  }
  
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_Effekseer_swig_EffekseerCoreJNI_new_1EffekseerManagerCore(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  EffekseerManagerCore *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (EffekseerManagerCore *)new EffekseerManagerCore();
  *(EffekseerManagerCore **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_delete_1EffekseerManagerCore(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(EffekseerManagerCore **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jboolean JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerManagerCore_1Initialize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int32_t arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(EffekseerManagerCore **)&jarg1; 
  arg2 = (int32_t)jarg2; 
  result = (bool)(arg1)->Initialize(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerManagerCore_1Update(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  float arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(EffekseerManagerCore **)&jarg1; 
  arg2 = (float)jarg2; 
  (arg1)->Update(arg2);
}


SWIGEXPORT jint JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerManagerCore_1Play(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jint jresult = 0 ;
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  EffekseerEffectCore *arg2 = (EffekseerEffectCore *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(EffekseerManagerCore **)&jarg1; 
  arg2 = *(EffekseerEffectCore **)&jarg2; 
  result = (int)(arg1)->Play(arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerManagerCore_1DrawBack(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(EffekseerManagerCore **)&jarg1; 
  (arg1)->DrawBack();
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerManagerCore_1DrawFront(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(EffekseerManagerCore **)&jarg1; 
  (arg1)->DrawFront();
}


SWIGEXPORT void JNICALL Java_Effekseer_swig_EffekseerCoreJNI_EffekseerManagerCore_1SetViewProjectionMatrixWithSimpleWindow(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  EffekseerManagerCore *arg1 = (EffekseerManagerCore *) 0 ;
  int32_t arg2 ;
  int32_t arg3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(EffekseerManagerCore **)&jarg1; 
  arg2 = (int32_t)jarg2; 
  arg3 = (int32_t)jarg3; 
  (arg1)->SetViewProjectionMatrixWithSimpleWindow(arg2,arg3);
}


#ifdef __cplusplus
}
#endif

