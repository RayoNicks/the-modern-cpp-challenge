#include "converting_numerical_values_to_roman.h"

#include "gtest/gtest.h"

TEST(test, roman_encoding)
{
    EXPECT_EQ(roman_encoding(0), "nulla");
    EXPECT_EQ(roman_encoding(1), "I");
    EXPECT_EQ(roman_encoding(2), "II");
    EXPECT_EQ(roman_encoding(3), "III");
    EXPECT_EQ(roman_encoding(4), "IV");
    EXPECT_EQ(roman_encoding(5), "V");
    EXPECT_EQ(roman_encoding(6), "VI");
    EXPECT_EQ(roman_encoding(7), "VII");
    EXPECT_EQ(roman_encoding(8), "VIII");
    EXPECT_EQ(roman_encoding(9), "IX");
    EXPECT_EQ(roman_encoding(10), "X");
    EXPECT_EQ(roman_encoding(42), "XLII");
    EXPECT_EQ(roman_encoding(1994), "MCMXCIV");
}

TEST(test, roman_decoding)
{
    EXPECT_EQ(roman_decoding("nulla"), 0);
    EXPECT_EQ(roman_decoding("I"), 1);
    EXPECT_EQ(roman_decoding("II"), 2);
    EXPECT_EQ(roman_decoding("III"), 3);
    EXPECT_EQ(roman_decoding("IV"), 4);
    EXPECT_EQ(roman_decoding("V"), 5);
    EXPECT_EQ(roman_decoding("VI"), 6);
    EXPECT_EQ(roman_decoding("VII"), 7);
    EXPECT_EQ(roman_decoding("VIII"), 8);
    EXPECT_EQ(roman_decoding("IX"), 9);
    EXPECT_EQ(roman_decoding("X"), 10);
    EXPECT_EQ(roman_decoding("XLII"), 42);
    EXPECT_EQ(roman_decoding("MCMXCIV"), 1994);
}

TEST(test, invalid_decoding)
{
    EXPECT_ANY_THROW(roman_decoding("abc"));
    EXPECT_ANY_THROW(roman_decoding("IIII"));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
