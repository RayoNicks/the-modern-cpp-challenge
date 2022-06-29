#include "sum_of_naturals_divisible_by_3_and_5.h"

#include "gtest/gtest.h"

TEST(test, sum_of_naturals_divisible_by_3_and_5)
{
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(0), 0);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(1), 0);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(2), 0);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(3), 0);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(4), 3);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(5), 3);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(6), 8);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(7), 14);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(8), 14);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(9), 14);
    EXPECT_EQ(sum_of_naturals_divisible_by_3_and_5(10), 23);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
