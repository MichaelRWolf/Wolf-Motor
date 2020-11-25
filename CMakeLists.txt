# Copied from https://gitlab.com/CLIUtils/modern-cmake/-/blob/master/examples/extended-project/CMakeLists.txt

# Works with 3.11 and tested through 3.19
cmake_minimum_required(VERSION 3.11...3.19)

# Project name and a few useful settings. Other commands can pick up the results
project(
   Motor
   VERSION 0.1
   DESCRIPTION "An example TS project with CMake"
   LANGUAGES C CXX)

add_executable(hello_c hello.c)
