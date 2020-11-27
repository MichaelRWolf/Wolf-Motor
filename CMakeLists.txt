# Initialized from https://gitlab.com/CLIUtils/modern-cmake/-/blob/master/examples/extended-project/CMakeLists.txt

cmake_minimum_required(VERSION 3.11...3.19)

set(CMAKE_C_COMPILER     "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

set(CMAKE_CXX_STANDARD 11) 

project(
   Motor
   VERSION 0.1
   DESCRIPTION "An example TS project with CMake"
   LANGUAGES C CXX
)

include(CTest)
enable_testing()

add_subdirectory("${PROJECT_SOURCE_DIR}/extern/googletest" "extern/googletest") 

# hello_c -- Hello World, written in C
add_executable(hello_c hello.c) 

# hello_c -- Hello World, written in C++
# add_executable(hello_cpp hello.cpp) 

# MotorTest
add_executable(                 MotorTest  MotorTest.c Motor.c)
target_link_libraries(          MotorTest gtest)
target_include_directories(MotorTest PUBLIC ${UNIT_UNDER_TEST_INCLUDE_DIR})

# add_test(smoke MotorTest)
