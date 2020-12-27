# Initialized from https://gitlab.com/CLIUtils/modern-cmake/-/blob/master/examples/extended-project/CMakeLists.txt

cmake_minimum_required(VERSION 3.11)

# ================================================================

project(
    fizz-buzz_dojo
    VERSION      0.1
    DESCRIPTION  "FizzBuzz - Dojo to build fluency in CMake and Google Test"
    LANGUAGES    C CXX
)


add_executable(
    fizz-buzz_app
    fizz-buzz_app.c
)


add_library(
    fizz-buzz_stl
    STATIC
    fizz-buzz.c
)


target_link_libraries(
    fizz-buzz_app
    fizz-buzz_stl
)


target_include_directories(
    fizz-buzz_stl PUBLIC
    .
)


include(cmake/googletest.cmake)
include(CTest)
enable_testing()
include(GoogleTest)

add_executable(
    fizz-buzz_test
    fizz-buzz_test.cpp
)

target_link_libraries(
    fb_test
    ${GTEST_LIBRARIES} 
    pthread
)

## Gtest compatible withc ctest
set(TestArgs "")

gtest_add_tests(
    fb_test
    "${TestArgs}" 
    AUTO
)

# ================================================================

project(
   wolf_motor        # name
   VERSION 0.1       # version major.minor
   DESCRIPTION       "Some thing good"
   LANGUAGES         C CXX
)

set (CMAKE_VERBOSE_MAKEFILE false)

#include(cmake/googletest.cmake) 
include(cmake/motor.cmake)
include(CTest)
enable_testing()

add_subdirectory(unit_tests)



