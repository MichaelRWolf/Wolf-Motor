#include "gtest/gtest.h"

#include "Motor.h"


TEST(sanity, manitee) {
    ASSERT_EQ(1+1, 3);
}




int main() {
    motor_t m;
    m = Motor_create();
    return m;
}
