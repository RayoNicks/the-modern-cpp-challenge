#include <numeric>

#include "greatest_common_divisor.h"
#include "gtest/gtest.h"

TEST(test, greatest_common_divisor)
{
    for (uint64_t a = 1; a < 100; a++) {
        for (uint64_t b = 101; b < 200; b++) {
            EXPECT_EQ(greatest_common_divisor(a, b), std::gcd(a, b));
            EXPECT_EQ(greatest_common_divisor(b, a), std::gcd(b, a));
        }
    }

    EXPECT_EQ(greatest_common_divisor(1, -1), 1);
}

TEST(test, illegal)
{
    EXPECT_THROW(greatest_common_divisor(2, 0), std::invalid_argument);
    EXPECT_THROW(greatest_common_divisor(0, 2), std::invalid_argument);
    EXPECT_THROW(greatest_common_divisor(0, 0), std::invalid_argument);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
