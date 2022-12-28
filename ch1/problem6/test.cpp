/**
 * @brief Test data comes from http://oeis.org/A005101.
 */

#include <vector>

#include "abundant_numbers.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(test, is_abundant_number)
{
    // clang-format off
    std::vector<bool> matcher{
        false, false, false, false, false, false, false, false,
        false, false, false, false, true, false, false, false,
        false, false, true, false, true, false, false, false
    };
    // clang-format on

    for (uint32_t i = 2; i < matcher.size(); i++) {
        EXPECT_EQ(is_abundant_number(i), matcher[i]);
    }
}

TEST(test, abundant_numbers)
{
    EXPECT_THAT(abundant_numbers(100), ::testing::ElementsAre(12, 18, 20, 24, 30, 36, 40, 42, 48, 54, 56, 60, 66, 70, 72, 78, 80, 84, 88, 90, 96));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
