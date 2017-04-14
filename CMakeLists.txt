cmake_minimum_required(VERSION 3.5)
project(cppdesignpatterns)

set(CMAKE_CXX_STANDARD 11)

set(INCLUDE_DIR include)
set(SRC_DIR src)

set(HEADER_FILES ${INCLUDE_DIR}/MySingleton.h ${INCLUDE_DIR}/IStrategy.h ${INCLUDE_DIR}/MyFactory.h)
set(SOURCE_FILES main.cpp ${SRC_DIR}/MySingleton.cpp ${SRC_DIR}/IStrategy.cpp  ${SRC_DIR}/MyFactory.cpp )

include_directories(${INCLUDE_DIR})

add_executable(cppdesignpatterns ${SOURCE_FILES} ${HEADER_FILES})