#include "sum_of_naturals_divisible_by_3_and_5.h"

#include <stdexcept>

uint32_t solution(uint16_t limit)
{
    uint32_t sum = 0;

    for (uint16_t i = 3; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}
