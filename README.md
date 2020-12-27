# Wolf Motor
The project will create the next breathtaking breakthrough in this planet's history.

# How to build

## Generate a Project Buildsystem
``` 
cmake -S  . -B build -G  'Unix Makefiles'
```
(N.B.: The _-H_ internal flag was replaced in 3.13 with the officially supported _-S_ flag.  )

## Build a Project
```
cmake --build build -- <build-tool-options>
cmake --build build -- fizz-buzz_app  
cmake --build build -- clean 
cmake --build build -- test
```

## Run a Command-Line Tool
```
cmake -E env buid/fizz-buzz_test 
```

## One-liner for edit-build-run cycle
```
cmake --build build -- fizz-buzz_app && cmake -E env build/fizz-buzz_app
```

# Folder Structure

The organization of folders is as below

| Path | Description |
| :--- | :--- |
|```./.vscode ``` | _Folder for VSCode debugging and environment_ |
|```./build ```   | _Folder for build artefacts_ |
|```./cmake ```   | _Folder for subject specific recepies in CMake_ |
|```./include ``` | _Folder for source include header files_ |
|```./src ``` | _Folder for source c/c++ files_ |
|```./unit_tests ``` | _Folder for all unit tests_ |
|```./unit_tests/ut_motor ``` | _Folder for all motor related unit tests in Google Tests with include files_ |
|```./.gitignore ``` | _file to list all other parts of project ignored in git index_ |
|```./CMakeLists.txt ``` | _Master CMake recepie_ |
|```./CMakeSettings.json ``` | _JSON file for setting up VS_ |
|```./README.md ``` | _This file_ |
|```./test_plan.org ``` | _Future plans for this project_ |

## Google Test
Google test is used in this project as an 
### _ExternalProject_Add_ 
using the CMake functionality 
```
include(ExternalProject)
```
as part of the ```googletesthelper.cmake```.

### CTest

All the google tests are linked to CTest using the 
```
include(CTest)
enable_testing()
include(GoogleTest)
...
gtest_add_tests(...)
```
as part of ```./unit_tests/CMakeLists.txt ```.

You may run the ```ctest``` by 
```
$ cd ./build && ctest
```
