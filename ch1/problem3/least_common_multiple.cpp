#include "least_common_multiple.h"

#include <numeric>
#include <stdexcept>

#include "greatest_common_divisor.h"

/**
 * @brief The least common multiple (lcm) of two or more non-zero integers, is
 * the smallest positive integer that is divisible by all of them. A possible
 * way to compute the least common multiple is by reducing the problem to
 * computing the greatest common divisor.
 */
uint64_t least_common_multiple(uint64_t a, uint64_t b)
{
    if (a == 0 || b == 0) {
        throw std::invalid_argument("Arguments must be non-zero.");
    }

    uint64_t gcd = greatest_common_divisor(a, b), lcm = a / gcd * b;
    if (lcm / b != a / gcd) {
        throw std::overflow_error("Detect overflow.");
    }

    return lcm;
}

/**
 * @brief To compute the lcs for more than two integers, computer the first two
 * number's lcm first, then compute the lcm of the last and the third number
 * and so on.
 */
uint64_t least_common_multiple(const std::vector<uint64_t> &vec)
{
    uint64_t lcm{1};
    for (uint64_t i : vec) {
        lcm = least_common_multiple(lcm, i);
    }

    return lcm;
}
