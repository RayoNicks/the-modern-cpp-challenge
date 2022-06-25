#include "greatest_common_divisor.h"

#include <stdexcept>

uint64_t greatest_common_divisor(uint64_t a, uint64_t b)
{
    if (a == 0 || b == 0)
    {
        throw std::invalid_argument("Arguments must be non-zero");
    }

    while (b != 0)
    {
        uint64_t r = a % b;
        a = b;
        b = r;
    }

    return a;
}
