#include <gtest/gtest.h>
#include <stdint.h>
extern "C" {
#include "fizz-buzz.h"
}

TEST_F(gt, sanity) {
    ASSERT_EQ(17, 18);
}
