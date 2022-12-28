#include "sexy_prime_pairs.h"

#include "largest_prime_smaller_than_given_number.h"

/**
 * @brief Sexy prime numbers are prime numbers that differ from each other by
 * six (for example 5 and 11, or 13 and 19).
 *
 * @param limit
 * @return std::vector<std::pair<uint32_t, uint32_t>>
 */
std::vector<std::pair<uint32_t, uint32_t>> sexy_prime_pairs(uint32_t limit)
{
    std::vector<std::pair<uint32_t, uint32_t>> pairs;

    for (uint32_t i = 3; i < limit && i + 6 < limit; i += 2) {
        if (is_prime(i) && is_prime(i + 6)) {
            pairs.push_back(std::make_pair(i, i + 6));
        }
    }

    return pairs;
}
