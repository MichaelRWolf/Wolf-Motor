# Initialized from https://gitlab.com/CLIUtils/modern-cmake/-/blob/master/examples/extended-project/CMakeLists.txt

cmake_minimum_required(VERSION 3.11)

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
