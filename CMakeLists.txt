# Initialized from https://gitlab.com/CLIUtils/modern-cmake/-/blob/master/examples/extended-project/CMakeLists.txt

cmake_minimum_required(VERSION 3.11)

# ================================================================

project(
    fizz-buzz_dojo
    VERSION      0.1
    DESCRIPTION  "FizzBuzz - Dojo to build fluency in CMake and Google Test"
    LANGUAGES    C
)


add_executable(
    fb_app
    fb_app.c
)


add_library(
    fb_stl
    STATIC
    fb.c
)


target_link_libraries(
    fb_app
    fb_stl
)


target_include_directories(
    fb_stl PUBLIC
    .
)


add_executable(
    fb_test
    fb_test.cpp
)


# ================================================================

project(
   wolf_motor        # name
   VERSION 0.1       # version major.minor
   DESCRIPTION       "Some thing good"
   LANGUAGES         C CXX
)

set (CMAKE_VERBOSE_MAKEFILE false)

include(cmake/googletest.cmake) 
include(cmake/motor.cmake)
include(CTest)
enable_testing()

add_subdirectory(unit_tests)



