#include <gtest/gtest.h>
#include <stdint.h>
extern "C" {
#include "fb.h"
}

TEST_F(gt, sanity) {
    ASSERT_EQ(17, 18);
}
