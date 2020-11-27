#include <gtest/gtest.h>
#include <stdint.h>
extern "C"{
#include "Motor.h"
};

TEST(motor_return, isOK) { 

    motor_t motorValue = Motor_create();
    ASSERT_EQ(17, static_cast<uint16_t>(motorValue));
}
 
TEST(motor_return, isNotOK) {
    motor_t motorValue = Motor_create();
    ASSERT_NE(10, static_cast<uint16_t>(motorValue));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}