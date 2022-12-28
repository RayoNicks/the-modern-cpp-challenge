#include "gtest/gtest.h"
#include "largest_prime_smaller_than_given_number.h"

TEST(test, is_prime)
{
    EXPECT_TRUE(is_prime(2));
    EXPECT_TRUE(is_prime(3));
    EXPECT_FALSE(is_prime(4));
    EXPECT_TRUE(is_prime(5));
    EXPECT_FALSE(is_prime(6));
    EXPECT_TRUE(is_prime(7));
    EXPECT_FALSE(is_prime(8));
    EXPECT_FALSE(is_prime(9));
    EXPECT_FALSE(is_prime(10));
}

TEST(test, largest_prime)
{
    EXPECT_EQ(largest_prime(60), 59);
    EXPECT_EQ(largest_prime(70), 67);
    EXPECT_EQ(largest_prime(80), 79);
    EXPECT_EQ(largest_prime(90), 89);
    EXPECT_EQ(largest_prime(100), 97);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
