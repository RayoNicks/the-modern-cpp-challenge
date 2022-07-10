#include "largest_collatz_sequence.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <algorithm>
#include <vector>

TEST(test, collatz_sequence)
{
    EXPECT_THAT(collatz_sequence(1),
                ::testing::ElementsAreArray({1}));
    EXPECT_THAT(collatz_sequence(2),
                ::testing::ElementsAreArray({2, 1}));
    EXPECT_THAT(collatz_sequence(3),
                ::testing::ElementsAreArray({3, 10, 5, 16, 8, 4, 2, 1}));
    EXPECT_THAT(collatz_sequence(4),
                ::testing::ElementsAreArray({4, 2, 1}));
    EXPECT_THAT(collatz_sequence(5),
                ::testing::ElementsAreArray({5, 16, 8, 4, 2, 1}));
    EXPECT_THAT(collatz_sequence(6),
                ::testing::ElementsAreArray({6, 3, 10, 5, 16, 8, 4, 2, 1}));
    EXPECT_THAT(collatz_sequence(7),
                ::testing::ElementsAreArray({7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1}));
    EXPECT_THAT(collatz_sequence(8),
                ::testing::ElementsAreArray({8, 4, 2, 1}));
    EXPECT_THAT(collatz_sequence(9),
                ::testing::ElementsAreArray({9, 28, 14, 7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1}));
}

TEST(test, largest_collatz_sequence)
{
    std::vector<uint64_t> collatz_length_cache(1, 0);
    std::vector<uint64_t> range_left{1, 10, 100, 1000, 10000, 100000};

    for (uint32_t i = 1; i < range_left.back(); i++)
    {
        collatz_length_cache.push_back(collatz_sequence_length(i));
    }

    auto max_ele_iter = collatz_length_cache.begin();
    for (uint32_t i = 0; i < range_left.size() - 1; i++)
    {
        auto iter = std::max_element(collatz_length_cache.begin() + range_left[i],
                                     collatz_length_cache.begin() + range_left[i + 1]);
        /* Update longest collatz */
        if ((*iter > *max_ele_iter))
        {
            max_ele_iter = iter;
        }

        EXPECT_THAT(largest_collatz_sequence(range_left[i + 1]),
                    ::testing::Pair(static_cast<uint32_t>(max_ele_iter - collatz_length_cache.begin()),
                                    *max_ele_iter));
    }
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
