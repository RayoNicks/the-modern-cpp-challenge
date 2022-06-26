/**
 * @file greatest_common_divisor.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that, given two positive integers, will calculate and
 * print the greatest common divisor of the two.
 * @version 0.1
 * @date 2022-06-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>

/**
 * @brief Compute the greatest common divisor (gcd in short) of two non-zero
 * integers.
 *
 * @param a The first positive number
 * @param b The second positive number
 * @return uint64_t
 */
uint64_t greatest_common_divisor(uint64_t a, uint64_t b);
