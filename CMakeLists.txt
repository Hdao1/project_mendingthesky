cmake_minimum_required(VERSION 3.10)

project(MendSky VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

#添加子目录
#add_subdirectory(mtlib)
add_subdirectory(lib)

find_package(OpenCV REQUIRED)

include_directories(include)
include_directories(${OpenCV_INCLUDE_DIRS})

aux_source_directory(src MS_LIST)

add_executable(test test.cpp ${MS_LIST})

#target_link_libraries(test ${OpenCV_LIBS} MT2MENDINGTEST)

target_link_libraries(test ${OpenCV_LIBS} MTSLAB)