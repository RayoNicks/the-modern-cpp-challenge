/**
 * @file gray_code.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that displays the normal binary representations and
 * Gray code representations for all 5-bit numbers.
 * @version 0.1
 * @date 2022-07-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <bitset>
#include <cstdint>
#include <vector>

/**
 * @brief Encode a number in binary representation to gray representation.
 *
 * @param binary_number Number to encode in binary.
 * @return uint32_t
 */
uint32_t gray_encoding(uint32_t binary_number);

/**
 * @brief Decode a number in gray representation to binary representation.
 *
 * @param gray Number to decode in gray.
 * @return uint32_t
 */
uint32_t gray_decoding(uint32_t gray);

template <uint32_t bits>
std::vector<std::bitset<bits>> gray_representation()
{
    static_assert(bits <= 16, "Too many numbers to enumerate");

    std::vector<std::bitset<bits>> grays;

    for (uint32_t i = 0; i < (1 << bits); i++)
    {
        grays.push_back(std::bitset<bits>(gray_encoding(i)));
    }

    return grays;
}
