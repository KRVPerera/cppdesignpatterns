cmake_minimum_required(VERSION 3.5)
project(cppdesignpatterns)

set(CMAKE_CXX_STANDARD 17)

set(INCLUDE_DIR include)
set(SRC_DIR src)

set(GCC_COVERAGE_COMPILE_FLAGS "-std=c++17 -Wall -Weffc++ -Wno-error=effc++ -pedantic \
 -Weverything -Wno-c++98-compat -Wno-c++98-compat-pedantic -Wno-newline-eof  \
-pedantic-errors -Wextra -Waggregate-return -Wcast-align \
-Wcast-qual -Wconversion \
-Wdisabled-optimization \
-Werror -Wfloat-equal -Wformat=2 \
-Wformat-nonliteral -Wformat-security  \
-Wformat-y2k \
-Wimplicit  -Wimport  -Winit-self  -Winline -Winvalid-pch   \
-Wlong-long \
-Wmissing-field-initializers -Wmissing-format-attribute   \
-Wmissing-include-dirs -Wmissing-noreturn \
-Wpacked  -Wpadded -Wpointer-arith \
-Wredundant-decls \
-Wshadow -Wstack-protector \
-Wstrict-aliasing=2 -Wswitch-default \
-Wswitch-enum \
-Wunreachable-code -Wunused \
-Wunused-parameter \
-Wvariadic-macros \
-Wwrite-strings")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

set(HEADER_FILES ${INCLUDE_DIR}/MySingleton.h ${INCLUDE_DIR}/IStrategy.h ${INCLUDE_DIR}/MyFactory.h)
set(SOURCE_FILES main.cpp ${SRC_DIR}/MySingleton.cpp ${SRC_DIR}/IStrategy.cpp  ${SRC_DIR}/MyFactory.cpp src/MembeInitilizer.cpp include/MemberInitializer.h)

include_directories(${INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})