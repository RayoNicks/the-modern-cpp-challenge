#include "armstrong_numbers.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(test, armstrong_numbers)
{
    EXPECT_THAT(armstrong_numbers(), ::testing::ElementsAre(153, 370, 371, 407));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
