#include "sexy_prime_pairs.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(test, sexy_prime_pairs)
{
    EXPECT_THAT(sexy_prime_pairs(12),
                ::testing::ElementsAre(::testing::Pair(5, 11)));
    EXPECT_THAT(sexy_prime_pairs(20),
                ::testing::ElementsAre(::testing::Pair(5, 11),
                                       ::testing::Pair(7, 13),
                                       ::testing::Pair(11, 17),
                                       ::testing::Pair(13, 19)));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
