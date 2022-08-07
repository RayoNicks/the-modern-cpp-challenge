#include "validating_isbns.h"

#include "gtest/gtest.h"

TEST(test, valid_isbn_10)
{
    EXPECT_TRUE(valid_isbn10("7-309-04547-5"));
    EXPECT_TRUE(valid_isbn10("0-130-31997-X"));
    EXPECT_TRUE(valid_isbn10("0-136-01267-1"));
}

TEST(test, invalid_isbn_10)
{
    EXPECT_FALSE(valid_isbn10("0123456789"));
    EXPECT_FALSE(valid_isbn10("0123456789---"));
    EXPECT_FALSE(valid_isbn10("0-123-456-78A"));
    EXPECT_FALSE(valid_isbn10("3-161-48410-1"));
}

TEST(test, valid_isbn_13)
{
    EXPECT_TRUE(valid_isbn13("978-7-111-68608-8"));
}

TEST(test, invalid_isbn_13)
{
    EXPECT_FALSE(valid_isbn13("0123456789"));
    EXPECT_FALSE(valid_isbn13("977-7-111-68608-9"));
    EXPECT_FALSE(valid_isbn13("0123456789-------"));
    EXPECT_FALSE(valid_isbn13("978-7-111-68608-a"));
    EXPECT_FALSE(valid_isbn13("978-7-111-68608-9"));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
