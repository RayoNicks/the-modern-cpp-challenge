#include "amicable_numbers.h"
#include "abundant_numbers.h"

#include <limits>

/**
 * @brief Two numbers are said to be amicable if the sum of the proper divisors
 * of one number is equal to that of the other number, 220 and 284 for example.
 *
 * @param limit
 * @return std::vector<std::pair<uint32_t, uint32_t>>
 */
std::vector<std::pair<uint32_t, uint32_t>> amicable_numbers(uint32_t limit)
{
    std::vector<std::pair<uint32_t, uint32_t>> pairs;

    for (uint64_t i = 2; i < static_cast<uint64_t>(limit); i++)
    {
        uint64_t sum = sum_of_proper_divisors(i);
        if (sum >= static_cast<uint64_t>(limit))
        {
            continue;
        }
        if (sum > i && i == sum_of_proper_divisors(sum))
        {
            pairs.push_back(std::make_pair<uint32_t, uint32_t>(i, sum));
        }
    }

    return pairs;
}
