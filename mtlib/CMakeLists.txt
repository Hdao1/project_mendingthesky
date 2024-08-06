cmake_minimum_required(VERSION 3.10)
project(MT2MENDINGTEST)

find_package(OpenCV REQUIRED)

include_directories(include)
include_directories(${OpenCV_INCLUDE_DIRS})

aux_source_directory(src MS_TESTING)

add_library(MT2MENDINGTEST STATIC ${MS_TESTING})

target_include_directories(MT2MENDINGTEST PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
