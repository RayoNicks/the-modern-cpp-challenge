#include "least_common_multiple.h"
#include "greatest_common_divisor.h"

#include <numeric>
#include <stdexcept>

uint64_t least_common_multiple(uint64_t a, uint64_t b)
{
    if (a == 0 || b == 0)
    {
        throw std::invalid_argument("Arguments must be non-zero");
    }

    uint64_t gcd = greatest_common_divisor(a, b), lcm = a / gcd * b;
    if (lcm / b != a / gcd)
    {
        throw std::overflow_error("Detect overflow");
    }

    return lcm;
}

uint64_t least_common_multiple(const std::vector<uint64_t> &vec)
{
    uint64_t lcm{1};
    for (uint64_t i : vec)
    {
        lcm = least_common_multiple(lcm, i);
    }

    return lcm;
}
