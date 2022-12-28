#include "armstrong_numbers.h"

#include <cmath>

/**
 * @brief An Armstrong number is a number that is equal to the sum of its own
 * digits when they are raised to the power of the number of digits. As an
 * example, the smallest Armstrong number is 153, which is equal to
 * 1^3 + 5^3 +3^3. Since division and module are expensive, this function
 * enumerates all possible numbers with three digits by a triple loop.
 *
 * @return std::vector<uint32_t>
 */
std::vector<uint32_t> armstrong_numbers()
{
    std::vector<uint32_t> numbers;

    for (uint32_t a = 1; a <= 9; a++) {
        for (uint32_t b = 0; b <= 9; b++) {
            for (uint32_t c = 0; c <= 9; c++) {
                uint32_t num = a * 100 + b * 10 + c;
                uint32_t power_sum = std::pow(a, 3) + std::pow(b, 3) + std::pow(c, 3);
                if (num == power_sum) {
                    numbers.push_back(num);
                }
            }
        }
    }

    return numbers;
}
