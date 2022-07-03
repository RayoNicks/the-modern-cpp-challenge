#include "gray_code.h"

#include <bitset>

/**
 * @brief Gray representation and binary representation has the following XOR
 * relationship.
 *
 * @param binary_number
 * @return uint32_t
 */
uint32_t gray_encoding(uint32_t binary_number)
{
    std::bitset<32> bin_rep{binary_number}, gray_rep;

    for (int i = 0; i < 31; i++)
    {
        gray_rep[i] = bin_rep[i] ^ bin_rep[i + 1];
    }

    gray_rep[31] = bin_rep[31];

    return gray_rep.to_ulong();
}

/**
 * @brief The inverse process of gray_encoding().
 *
 * @param gray_number
 * @return uint32_t
 */
uint32_t gray_decoding(uint32_t gray_number)
{
    std::bitset<32> gray_rep{gray_number}, bin_rep;

    bin_rep[31] = gray_rep[31];
    for (int i = 30; i >= 0; i--)
    {
        bin_rep[i] = bin_rep[i + 1] ^ gray_rep[i];
    }

    return bin_rep.to_ulong();
}
