#include "prime_factors_of_a_number.h"

#include "largest_prime_smaller_than_given_number.h"

std::vector<uint32_t> prime_factors(uint32_t num)
{
    std::vector<uint32_t> factors;

    for (uint32_t i = 2; num != 1; i++) {
        if (!is_prime(i)) {
            continue;
        }
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }

    return factors;
}
