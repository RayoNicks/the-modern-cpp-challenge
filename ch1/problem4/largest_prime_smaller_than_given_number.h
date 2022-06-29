/**
 * @file largest_prime_smaller_than_given_number.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that computes and prints the largest prime number
 * that is smaller than a number provided by the user, which must be a
 * positive integer.
 * @version 0.1
 * @date 2022-06-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>

/**
 * @brief Determines if a number is prime.
 *
 * @param num Number to determine.
 * @return true Prime.
 * @return false Composite or 1.
 */
bool is_prime(uint32_t num);

/**
 * @brief Find the largest prime smaller than a given number.
 *
 * @param limit Upper limit of the largest prime.
 * @return uint32_t
 */
uint32_t largest_prime(uint32_t limit);
