/**
 * @brief Test data comes from http://oeis.org/A259180.
 */

#include "amicable_numbers.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(test, amicable_numbers)
{
    EXPECT_THAT(amicable_numbers(100000),
                ::testing::ElementsAre(::testing::Pair(220, 284),
                                       ::testing::Pair(1184, 1210),
                                       ::testing::Pair(2620, 2924),
                                       ::testing::Pair(5020, 5564),
                                       ::testing::Pair(6232, 6368),
                                       ::testing::Pair(10744, 10856),
                                       ::testing::Pair(12285, 14595),
                                       ::testing::Pair(17296, 18416),
                                       ::testing::Pair(63020, 76084),
                                       ::testing::Pair(66928, 66992),
                                       ::testing::Pair(67095, 71145),
                                       ::testing::Pair(69615, 87633),
                                       ::testing::Pair(79750, 88730)));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
