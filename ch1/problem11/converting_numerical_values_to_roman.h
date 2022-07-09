/**
 * @file converting_numerical_values_to_roman.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that prints a number's Roman numeral equivalent.
 * @version 0.1
 * @date 2022-07-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

#include <cstdint>
#include <string>

/**
 * @brief Convert an Arabic numeral to Roman numeral.
 *
 * @param num Arabic number to encode.
 * @return std::string
 */
std::string roman_encoding(uint32_t arabic);

/**
 * @brief Convert an Roman numeral to Arabic numeral.
 *
 * @param roman Roman number to decode.
 * @return uint32_t
 */
uint32_t roman_decoding(const std::string &roman);
