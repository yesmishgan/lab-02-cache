# Copyright (c) 2015-2018, Ruslan Baratov
# Copyright (c) 2017-2018, Robert Nitsch
# Copyright (c) 2018, David Hirvonen
# All rights reserved.

if(DEFINED POLLY_ANDROID_NDK_R18b_API_28_ARM64_V8A_CLANG_LIBCXX11_CMAKE_)
  return()
else()
  set(POLLY_ANDROID_NDK_R18b_API_28_ARM64_V8A_CLANG_LIBCXX11_CMAKE_ 1)
endif()

include("${CMAKE_CURRENT_LIST_DIR}/utilities/polly_clear_environment_variables.cmake")

include("${CMAKE_CURRENT_LIST_DIR}/utilities/polly_init.cmake")

set(ANDROID_NDK_VERSION "r18b")
set(CMAKE_SYSTEM_VERSION "28")
set(CMAKE_ANDROID_ARCH_ABI "arm64-v8a")
set(CMAKE_ANDROID_NDK_TOOLCHAIN_VERSION "clang")
set(CMAKE_ANDROID_STL_TYPE "c++_static") # LLVM libc++ static

polly_init(
    "Android NDK ${ANDROID_NDK_VERSION} / \
API ${CMAKE_SYSTEM_VERSION} / ${CMAKE_ANDROID_ARCH_ABI} / \
Clang / c++11 support / libc++ static"
    "Unix Makefiles"
)

include("${CMAKE_CURRENT_LIST_DIR}/utilities/polly_common.cmake")

include("${CMAKE_CURRENT_LIST_DIR}/flags/cxx11.cmake") # before toolchain!

include("${CMAKE_CURRENT_LIST_DIR}/os/android.cmake")