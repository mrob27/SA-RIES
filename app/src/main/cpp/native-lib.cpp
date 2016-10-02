#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_mrob_sa_1ries_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Use the blue search icon to begin a RIES search.";
    return env->NewStringUTF(hello.c_str());
}
