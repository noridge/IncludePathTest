#include <jni.h>
#include <string>

#include <A.h>
#include <H.h>
/*
 * Specifying full path works
 */
#include "../../../../Framework/Abcdefghijklmn/Bcdefghijklmno/Cdefghijklmnop/Defghijklmnopq/Efghijklmnopqr/Fghijklmnopqrs/Ghijklmnopqrst/Hijklmnopqrstu/3Dabcdefghijklmnopqrs/include/3Dabcdefghijklmnopqrs.h"
/*
 * Specifying just the file name does not work CLint complains and build error says 3Dabcdefghijklmnopqrs.h is missing
 */
//#include <3Dabcdefghijklmnopqrs.h>

extern "C"
jstring
Java_com_harkish_includepathtest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    int i = A;
    int j = H;
    int k = D3;
    return env->NewStringUTF(hello.c_str());
}
