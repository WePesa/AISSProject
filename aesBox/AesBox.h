/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class AesBox */

#ifndef _Included_AesBox
#define _Included_AesBox
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     AesBox
 * Method:    init
 * Signature: (I)C
 */
JNIEXPORT jchar JNICALL Java_AesBox_init
  (JNIEnv *, jobject, jint);

/*
 * Class:     AesBox
 * Method:    update
 * Signature: ([BI[B)C
 */
JNIEXPORT jchar JNICALL Java_AesBox_update
  (JNIEnv *, jobject, jbyteArray, jint, jbyteArray);

/*
 * Class:     AesBox
 * Method:    doFinal
 * Signature: ([BI[B)C
 */
JNIEXPORT jchar JNICALL Java_AesBox_doFinal
  (JNIEnv *, jobject, jbyteArray, jint, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
