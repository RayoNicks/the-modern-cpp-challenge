#include "converting_numerical_values_to_roman.h"

#include <stdexcept>
#include <utility>
#include <vector>

// clang-format off
static std::vector<std::pair<uint32_t, std::string>> base{
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
};
// clang-format on

/**
 * @brief Roman numerals use seven symbols: I = 1, V = 5, X = 10, L = 50,
 * C = 100, D = 500, and M = 1000. The system uses additions and subtractions
 * in composing the numerical symbols. The symbols from 1 to 10 are I, II, III,
 * IV, V, VI, VII, VIII, IX, and X. Romans did not have a symbol for zero and
 * used to write nulla to represent it.
 *
 * @param arabic
 * @return std::string
 */
std::string roman_encoding(uint32_t arabic)
{
    if (arabic >= 4000) {
        throw std::invalid_argument("Number must less than 4000.");
    }

    if (arabic == 0) {
        return std::string("nulla");
    }

    std::string roman;

    while (arabic != 0) {
        for (auto &p : base) {
            if (arabic >= p.first) {
                arabic -= p.first;
                roman += p.second;
                break;
            }
        }
    }

    return roman;
}

/**
 * @brief To decode a roman number, use the longest prefix matching rules and
 * check the result by an extra encoding.
 *
 * @param roman
 * @return uint32_t
 */
uint32_t roman_decoding(const std::string &roman)
{
    if (roman == "nulla") {
        return 0;
    }

    uint32_t arabic = 0;
    bool parsed{};

    for (size_t i = 0; i < roman.length();) {
        parsed = false;

        for (auto &p : base) {
            if (p.second.length() == 2 && i + 1 < roman.length() && p.second == roman.substr(i, 2)) {
                arabic += p.first;
                i += 2;
                parsed = true;
                break;
            }
            if (p.second == roman.substr(i, 1)) {
                arabic += p.first;
                i++;
                parsed = true;
                break;
            }
        }

        if (!parsed) {
            throw std::invalid_argument("Unexpected Roman symbol.");
        }
    }

    if (roman_encoding(arabic) == roman) {
        return arabic;
    }
    else {
        throw std::invalid_argument("Invalid Roman number.");
        return 0;
    }
}
