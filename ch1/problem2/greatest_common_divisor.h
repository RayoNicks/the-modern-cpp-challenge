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
 * @brief The greatest common divisor (gcd in short) of two or more non-zero
 * integers, also known as the greatest common factor (gcf), is the greatest
 * positive integer that divides all of them. There are several ways the gcd
 * could be computed; an efficient method is Euclid's algorithm.
 *
 * @param a The first positive number
 * @param b The second positive number
 * @return uint64_t
 */
uint64_t greatest_common_divisor(uint64_t a, uint64_t b);
