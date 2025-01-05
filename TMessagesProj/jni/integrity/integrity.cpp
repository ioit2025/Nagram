#include "meth.h"
#include "openat.h"
#include "read_cert.h"
#include "SHA1.h"

extern "C" {
int verifySign(JNIEnv *env) {
    jobject application = getApplication(env);
    if (application == nullptr) {
        return JNI_ERR;
    }
    const char *resourcePath = getApkPath(env, application);
    env->DeleteLocalRef(application);
    intptr_t fd = openAt(AT_FDCWD, resourcePath, O_RDONLY);
    if (fd < 0) {
        return JNI_ERR;
    }
    close(fd);
    return JNI_OK;
}
}