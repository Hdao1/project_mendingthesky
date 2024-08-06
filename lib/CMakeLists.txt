cmake_minimum_required(VERSION 3.10)
project(MTSLAB)

#添加第三方库
find_package(OpenCV REQUIRED)

#添加头文件路径
include_directories(include)
include_directories(${OpenCV_INCLUDE_DIRS})

#添加cpp文件为mts
aux_source_directory(src MTS)

#编译成静态库
add_library(MTSLAB STATIC ${MTS})

target_include_directories(MTSLAB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})