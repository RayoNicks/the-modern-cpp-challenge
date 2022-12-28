#include "computing_the_value_of_pi.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(test, approximate_pi)
{
    EXPECT_THAT(compute_pi(), ::testing::DoubleNear(3.14, 1E-2));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
