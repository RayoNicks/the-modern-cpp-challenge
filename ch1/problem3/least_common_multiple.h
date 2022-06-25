/**
 * @file least_common_multiple.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that will, given two or more positive integers,
 * calculate and print the least common multiple of them all.
 * @version 0.1
 * @date 2022-06-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>
#include <vector>

/**
 * @brief The least common multiple (lcm) of two or more non-zero integers, is
 * the smallest positive integer that is divisible by all of them. A possible
 * way to compute the least common multiple is by reducing the problem to
 * computing the greatest common divisor.
 *
 * @param a First positive number
 * @param b Second positive number
 * @return uint64_t
 */
uint64_t least_common_multiple(uint64_t a, uint64_t b);

/**
 * @brief To compute the lcs for more than two integers, computer the first two
 * number's lcm first, then compute the lcm of the last and the third number
 * and so on.
 *
 * @param vec Positive number list
 * @return uint64_t
 */
uint64_t least_common_multiple(const std::vector<uint64_t> &vec);
