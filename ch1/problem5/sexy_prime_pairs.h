/**
 * @file sexy_prime_pairs.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that prints all the sexy prime pairs up to a limit
 * entered by the user.
 * @version 0.1
 * @date 2022-06-28
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>
#include <utility>
#include <vector>

/**
 * @brief Find all sexy prime pairs smaller than limit.
 * 
 * @param limit Upper limit of the sexy prime pairs.
 * @return std::vector<std::pair<uint32_t, uint32_t>> 
 */
std::vector<std::pair<uint32_t, uint32_t>> sexy_prime_pairs(uint32_t limit);
