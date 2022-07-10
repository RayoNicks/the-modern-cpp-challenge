/**
 * @file largest_collatz_sequence.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that determines which number up to 1 million produces
 * the longest Collatz sequence and what its length is.
 * @version 0.1
 * @date 2022-07-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>
#include <utility>
#include <vector>

/**
 * @brief Return collatz sequence.
 *
 * @param num Number to calculate.
 * @return std::vector<uint64_t>
 */
std::vector<uint64_t> collatz_sequence(uint32_t num);

/**
 * @brief Return collatz sequence length.
 *
 * @param num Number to calculate.
 * @return uint64_t
 */
uint64_t collatz_sequence_length(uint32_t num);

/**
 * @brief Return the number smaller than a upper limit that has the longest
 * collatz sequence and its length.
 *
 * @param upper_limit Upper limit of numbers to determine.
 * @return std::pair<uint32_t, uint64_t>
 */
std::pair<uint32_t, uint64_t> largest_collatz_sequence(uint32_t upper_limit);
