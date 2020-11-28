cmake_minimum_required(VERSION 3.16)

project(ut C CXX)

include(CTest)
enable_testing()
include(GoogleTest)

set(TEST_MOTOR_PATH ${CMAKE_CURRENT_SOURCE_DIR}/ut_motor/)
set(TEST_MOTOR_SOURCES
	${TEST_MOTOR_PATH}/Motor_test.cpp
)

# Link GoogleTests
add_executable(${PROJECT_NAME}
	main.cpp
	${SOURCES_Common_Elements}
)

target_link_libraries(${PROJECT_NAME}
	motor_stl
	${GTEST_LIBRARIES} 
	pthread 
)
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../inc
)
## Gtest compatible withc ctest
set(TestArgs "")

gtest_add_tests(${PROJECT_NAME} 
	"${TestArgs}" 
	AUTO
)