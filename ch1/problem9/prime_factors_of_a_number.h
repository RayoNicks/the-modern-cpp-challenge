/**
 * @file prime_factors_of_a_number.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that returns the prime factors of a number entered by
 * the user.
 * @version 0.1
 * @date 2022-07-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>
#include <vector>

/**
 * @brief Return primes factors of a number.
 *
 * @param num Number to decompose.
 * @return std::vector<uint32_t>
 */
std::vector<uint32_t> prime_factors(uint32_t num);
