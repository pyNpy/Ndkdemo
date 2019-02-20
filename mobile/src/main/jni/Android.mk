LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE     := native-lib
LOCAL_SRC_FILES  := native-lib.cpp
LOCAL_C_INCLUDES += $(LOCAL_PATH)

LOCAL_LDLIBS     += -llog  -ldl
LOCAL_CPP_EXTENSION: =.cpp .c

include $(BUILD_SHARED_LIBRARY)
