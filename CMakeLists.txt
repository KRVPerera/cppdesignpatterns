cmake_minimum_required(VERSION 3.6)
project(cppdesignpatterns)

set(CMAKE_CXX_STANDARD 11)

set(INCLUDE_DIR include)
set(HEADER_FILES ${INCLUDE_DIR}/MySingleton.h)


set(SOURCE_FILES main.cpp src/MySingleton.cpp ${HEADER_FILES})
include_directories(${INCLUDE_DIR})
add_executable(cppdesignpatterns ${SOURCE_FILES})