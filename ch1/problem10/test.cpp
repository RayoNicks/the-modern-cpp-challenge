#include "gray_code.h"
#include "gtest/gtest.h"

TEST(test, gray_encoding)
{
    EXPECT_EQ(gray_encoding(0), 0);
    EXPECT_EQ(gray_encoding(1), 1);
    EXPECT_EQ(gray_encoding(2), 3);
    EXPECT_EQ(gray_encoding(3), 2);
    EXPECT_EQ(gray_encoding(4), 6);
    EXPECT_EQ(gray_encoding(5), 7);
    EXPECT_EQ(gray_encoding(6), 5);
    EXPECT_EQ(gray_encoding(7), 4);
    EXPECT_EQ(gray_encoding(8), 12);
    EXPECT_EQ(gray_encoding(9), 13);
    EXPECT_EQ(gray_encoding(10), 15);
    EXPECT_EQ(gray_encoding(11), 14);
    EXPECT_EQ(gray_encoding(12), 10);
    EXPECT_EQ(gray_encoding(13), 11);
    EXPECT_EQ(gray_encoding(14), 9);
    EXPECT_EQ(gray_encoding(15), 8);
}

TEST(test, gray_decoding)
{
    EXPECT_EQ(gray_decoding(0), 0);
    EXPECT_EQ(gray_decoding(1), 1);
    EXPECT_EQ(gray_decoding(2), 3);
    EXPECT_EQ(gray_decoding(3), 2);
    EXPECT_EQ(gray_decoding(4), 7);
    EXPECT_EQ(gray_decoding(5), 6);
    EXPECT_EQ(gray_decoding(6), 4);
    EXPECT_EQ(gray_decoding(7), 5);
    EXPECT_EQ(gray_decoding(8), 15);
    EXPECT_EQ(gray_decoding(9), 14);
    EXPECT_EQ(gray_decoding(10), 12);
    EXPECT_EQ(gray_decoding(11), 13);
    EXPECT_EQ(gray_decoding(12), 8);
    EXPECT_EQ(gray_decoding(13), 9);
    EXPECT_EQ(gray_decoding(14), 11);
    EXPECT_EQ(gray_decoding(15), 10);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
