/**
 * @file sum-of-naturals-divisible-by-3-and-5.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that calculates and prints the sum of all the natural
 * numbers divisible by either 3 or 5, up to a given limit entered by the user.
 * @version 0.1
 * @date 2022-06-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>

/**
 * @brief To reduce the test time, the upper limit is a 16-bit width positive
 * number so the sum could be 32 bits.
 *
 * @param limit The upper limit in string
 * @return uint32_t
 */
uint32_t sum_of_naturals_divisible_by_3_and_5(uint16_t limit);
