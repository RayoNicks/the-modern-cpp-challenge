#include "prime_factors_of_a_number.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(test, prime_factors)
{
    EXPECT_THAT(prime_factors(42), ::testing::ElementsAre(2, 3, 7));
    EXPECT_THAT(prime_factors(600), ::testing::ElementsAre(2, 2, 2, 3, 5, 5));
    EXPECT_THAT(prime_factors(851), ::testing::ElementsAre(23, 37));
    EXPECT_THAT(prime_factors(475), ::testing::ElementsAre(5,5,19));
    EXPECT_THAT(prime_factors(143), ::testing::ElementsAre(11, 13));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
