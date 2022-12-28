#include "sum_of_naturals_divisible_by_3_and_5.h"

#include <stdexcept>

/**
 * @brief The solution to this problem is to iterate through all numbers from 3
 * up to the limit entered by the user. Use the modulo operation to check that
 * the rest of the division of a number by 3 and 5 is 0.
 *
 * @param limit
 * @return uint32_t
 */
uint32_t sum_of_naturals_divisible_by_3_and_5(uint16_t limit)
{
    uint32_t sum = 0;

    for (uint16_t i = 3; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}
