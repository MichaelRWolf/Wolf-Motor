set(MOTOR_SRC_PATH ${CMAKE_SOURCE_DIR}/src)

set(MOTOR_SOURCES
    ${MOTOR_SRC_PATH}/Motor.c
)

add_library(motor_stl STATIC
    ${MOTOR_SOURCES}
)

target_include_directories(motor_stl PUBLIC 
    ${CMAKE_SOURCE_DIR}/include
)
