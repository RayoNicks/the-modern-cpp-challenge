#include "largest_prime_smaller_than_given_number.h"

bool is_prime(uint32_t num)
{
    if (num <= 3)
    {
        return num > 1;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        /**
         * @brief i is odd and equals 3k + 2, so we only need to determine i
         * and i + 2 if the step length is 6
         */
        for (uint32_t i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }
}

/**
 * @brief Starting from the given number, towards 1 until the first prime is
 * encountered
 *
 * @param limit
 * @return uint32_t
 */
uint32_t largest_prime(uint32_t limit)
{
    for (uint32_t i = limit - 1; i > 1; i--)
    {
        if (is_prime(i))
        {
            return i;
        }
    }

    return 2;
}
