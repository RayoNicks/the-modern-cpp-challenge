#include "largest_collatz_sequence.h"

/**
 * @brief The Collatz conjecture is an unproven conjecture that states that a
 * sequence defined as explained in the following always reaches 1. Start with
 * any positive integer n and obtain each new term from the previous one: if
 * the previous term is even, the next term is half the previous term, or else
 * it is 3 times the previous term plus 1.
 *
 * @param num
 * @return std::vector<uint64_t>
 */
std::vector<uint64_t> collatz_sequence(uint32_t num)
{
    std::vector<uint64_t> sequence(1, num);

    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = 3 * num + 1;
        }
        sequence.push_back(num);
    }

    return sequence;
}

uint64_t collatz_sequence_length(uint32_t num)
{
    return collatz_sequence(num).size();
}

/**
 * @brief Although we could apply brute force to generate the sequence for each
 * number and count its length, a faster solution would be to save the length
 * of all the number that have already appeared. Remember to avoid accessing
 * out of bound since the Collatz sequence may grow larger than upper limit.
 *
 * @param upper_limit
 * @return std::pair<uint32_t, uint32_t>
 */
std::pair<uint32_t, uint64_t> largest_collatz_sequence(uint32_t upper_limit)
{
    std::vector<uint64_t> length_cache(upper_limit, 0);
    std::pair<uint32_t, uint64_t> largest(1, 1);

    length_cache[1] = 1;
    for (uint32_t i = 1; i < upper_limit; i++)
    {
        uint32_t num = i;

        /* It has already been cached. */
        if (length_cache[i] != 0)
        {
            continue;
        }

        std::vector<uint64_t> collatz_sequence(1, num);

        while (num != 1)
        {
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num = 3 * num + 1;
            }

            if (num < upper_limit && length_cache[num] != 0)
            {
                for (size_t idx = 0; idx < collatz_sequence.size(); idx++)
                {
                    if (collatz_sequence[idx] < upper_limit)
                    {
                        length_cache[collatz_sequence[idx]] =
                            collatz_sequence.size() - idx + length_cache[num];
                    }
                }
                if (length_cache[collatz_sequence[0]] > largest.second)
                {
                    largest.first = collatz_sequence[0];
                    largest.second = length_cache[largest.first];
                }
                break;
            }
            else
            {
                collatz_sequence.push_back(num);
            }
        }
    }

    return largest;
}
