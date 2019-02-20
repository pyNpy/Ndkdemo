#include <jni.h>
#include <string>
#include <android/log.h>
#define LOG_TAG "NATIVE_OUTPUT"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__))
extern "C" JNIEXPORT jstring JNICALL
Java_example_demo_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    LOGI("123456789.987654321");
    std::string hello = "...Hello from C++...";
    printf("%s","12314235435");

    return env->NewStringUTF(hello.c_str());
}
void test()
{

}