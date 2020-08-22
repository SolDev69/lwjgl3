#include <jni.h>
#include <dlfcn.h>

typedef int (*Main_Function_t)(int, char**);

char** convert_to_char(JNIEnv *env, jobjectArray jstringArray){
	int num_rows = (*env)->GetArrayLength(env, jstringArray);
	char **cArray = (char **) malloc(num_rows * sizeof(char*));
	jstring row;
	
	for (int i = 0; i < num_rows; i++) {
		row = (jstring) (*env)->GetObjectArrayElement(env, jstringArray, i);
		cArray[i] = (char*)(*env)->GetStringUTFChars(env, row, 0);
    }
		
    return cArray;
}

JNIEXPORT jint JNICALL Java_net_kdt_pojavlaunch_BinaryExecutor_executeBinary(JNIEnv *env, jclass clazz, jobjectArray cmdArgs) {
	jclass exception_cls = (*env)->FindClass(env, "java/lang/IllegalArgumentException");
	
	char *exec_file_c = (char*) (*env)->GetStringUTFChars(env, (*env)->GetObjectArrayElement(env, cmdArgs, 0), 0);
	void *exec_binary_handle = dlopen(exec_file_c, RTLD_LAZY);
	// (*env)->ReleaseUTFChars(env, exec_file_c);
	
	char *exec_error_c = dlerror();
	if (exec_error_c != NULL) {
		LOGE("dlopen error: %s", exec_error_c);
		(*env)->ThrowNew(env, exception_cls, "dlopen error! Check logcat for details");
		return -1;
	}
	
	Main_Function_t Main_Function;
	Main_Function = (Main_Function_t) dlsym(exec_binary_handle, "main");
	
	exec_error_c = dlerror();
	if (exec_error_c != NULL) {
		LOGE("dlsym error: %s", exec_error_c);
		(*env)->ThrowNew(env, exception_cls, "dlsym error! Check logcat for details");
		return -1;
	}
	
	int cmd_argv = (*env)->GetArrayLength(env, cmdArgs);
	return Main_Function(cmd_argv, convert_to_char(env, cmdArgs));
}
