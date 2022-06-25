#include "sum_of_naturals_divisible_by_3_and_5.h"

#include "gtest/gtest.h"

TEST(test, positive)
{
    EXPECT_EQ(solution(0), 0);
    EXPECT_EQ(solution(1), 0);
    EXPECT_EQ(solution(2), 0);
    EXPECT_EQ(solution(3), 0);
    EXPECT_EQ(solution(4), 3);
    EXPECT_EQ(solution(5), 3);
    EXPECT_EQ(solution(6), 8);
    EXPECT_EQ(solution(7), 14);
    EXPECT_EQ(solution(8), 14);
    EXPECT_EQ(solution(9), 14);
    EXPECT_EQ(solution(10), 23);
}

TEST(test, illegal)
{
    EXPECT_NO_THROW(solution(-1));
    EXPECT_NO_THROW(solution(-2));
    EXPECT_NO_THROW(solution(-3));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
