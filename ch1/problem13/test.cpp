#include "computing_the_value_of_pi.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(test, collatz_sequence)
{
    EXPECT_THAT(compute_pi(), ::testing::DoubleNear(3.14, 1E-2));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
