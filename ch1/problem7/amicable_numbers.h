/**
 * @file amicable_numbers.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that prints the list of all pairs of amicable numbers
 * smaller than 1,000,000.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

#include <cstdint>
#include <utility>
#include <vector>

/**
 * @brief Find all amicable number pairs smaller than limit.
 *
 * @param limit Upper limit of amicable number pairs.
 * @return std::vector<std::pair<uint32_t, uint32_t>>
 */
std::vector<std::pair<uint32_t, uint32_t>> amicable_numbers(uint32_t limit);
