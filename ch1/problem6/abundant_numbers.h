/**
 * @file abundant_numbers.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that prints all abundant numbers and their abundance,
 * up to a number entered by the user.
 * @version 0.1
 * @date 2022-06-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>
#include <vector>

/**
 * @brief Compute sum of proper divisors of a number.
 *
 * @param num Number to compute.
 * @return uint64_t
 */
uint64_t sum_of_proper_divisors(uint32_t num);

/**
 * @brief Determine if a number is an abundant number.
 *
 * @param num Number to determine.
 * @return true Abundant.
 * @return false Deficient or perfect.
 */
bool is_abundant_number(uint32_t num);

/**
 * @brief Find all abundant numbers smaller than limit.
 *
 * @param limit Upper limit of abundant numbers.
 * @return std::vector<uint32_t>
 */
std::vector<uint32_t> abundant_numbers(uint32_t limit);
