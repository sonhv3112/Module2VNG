/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class HashTable */

#ifndef _Included_HashTable
#define _Included_HashTable
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     HashTable
 * Method:    insert
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_HashTable_insert
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     HashTable
 * Method:    search
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_HashTable_search
  (JNIEnv *, jobject, jstring);

/*
 * Class:     HashTable
 * Method:    delete
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_HashTable_delete
  (JNIEnv *, jobject, jstring);

/*
 * Class:     HashTable
 * Method:    newHashTable
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_HashTable_newHashTable
  (JNIEnv *, jobject);

/*
 * Class:     HashTable
 * Method:    deleteHashTable
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_HashTable_deleteHashTable
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
