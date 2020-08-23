#include <jni.h>
#include <dlfcn.h>
#include <stdlib.h>

#include "log.h"
#include "binary_custom_dlopen.h"

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

JNIEXPORT jint JNICALL Java_net_kdt_pojavlaunch_BinaryExecutor_executeBinary(JNIEnv *env, jclass clazz, jstring ldLibraryPath, jobjectArray cmdArgs) {
	jclass exception_cls = (*env)->FindClass(env, "java/lang/UnsatisfiedLinkError");
	
	jstring execFile = (*env)->GetObjectArrayElement(env, cmdArgs, 0);
	
	char *exec_file_c = (char*) (*env)->GetStringUTFChars(env, execFile, 0);
	char *ld_library_path_c = (char*) (*env)->GetStringUTFChars(env, ldLibraryPath, 0);
	
	void *exec_binary_handle = dlopen_ext(ld_library_path_c, exec_file_c, RTLD_LAZY);
	
	(*env)->ReleaseStringUTFChars(env, ldLibraryPath, ld_library_path_c);
	(*env)->ReleaseStringUTFChars(env, execFile, exec_file_c);
	
	char *exec_error_c = dlerror();
	if (exec_error_c != NULL) {
		LOGE("Error: %s", exec_error_c);
		(*env)->ThrowNew(env, exception_cls, exec_error_c);
		return -1;
	}
	
	Main_Function_t Main_Function;
	Main_Function = (Main_Function_t) dlsym(exec_binary_handle, "main");
	
	exec_error_c = dlerror();
	if (exec_error_c != NULL) {
		LOGE("Error: %s", exec_error_c);
		(*env)->ThrowNew(env, exception_cls, exec_error_c);
		return -1;
	}
	
	int cmd_argv = (*env)->GetArrayLength(env, cmdArgs);
	return Main_Function(cmd_argv, convert_to_char(env, cmdArgs));
}
