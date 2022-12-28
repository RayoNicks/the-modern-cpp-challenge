#include <limits>
#include <numeric>

#include "gtest/gtest.h"
#include "least_common_multiple.h"

TEST(test, least_common_multiple)
{
    for (uint64_t a = 1; a < 100; a++) {
        for (uint64_t b = 101; b < 200; b++) {
            EXPECT_EQ(least_common_multiple(a, b), std::lcm(a, b));
            EXPECT_EQ(least_common_multiple(b, a), std::lcm(b, a));
        }
    }

    EXPECT_EQ(least_common_multiple(1, -1), -1);
}

TEST(test, sequence)
{
    EXPECT_EQ(least_common_multiple({1, 2, 3, 4}), 12);
    EXPECT_EQ(least_common_multiple({5, 6, 7, 8}), 840);
}

TEST(test, illegal)
{
    EXPECT_THROW(least_common_multiple(2, 0), std::invalid_argument);
    EXPECT_THROW(least_common_multiple(0, 2), std::invalid_argument);
    EXPECT_THROW(least_common_multiple(0, 0), std::invalid_argument);

    EXPECT_THROW(least_common_multiple(std::numeric_limits<uint64_t>::max() - 1, std::numeric_limits<uint64_t>::max() - 3), std::overflow_error);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
