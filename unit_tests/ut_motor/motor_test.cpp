#include <gtest/gtest.h>
#include <utility>
#include <stdint.h>
extern "C"{
#include "Motor.h"
};

#include "motor_test.h"

TEST_F(motor_test, isOK) { 
    motor_t motorValue = Motor_create();
    ASSERT_EQ(17, static_cast<uint16_t>(motorValue));
}
 
TEST_F(motor_test, isNotOK) {
    motor_t motorValue = Motor_create();
    ASSERT_NE(10, static_cast<uint16_t>(motorValue));
}