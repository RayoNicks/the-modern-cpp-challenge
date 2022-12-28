#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

#include "sum_of_naturals_divisible_by_3_and_5.h"

int main()
{
    std::string limit;

    std::cout << "Upper limit: ";
    std::cin >> limit;

    uint32_t sum{};
    unsigned long upper_limit;

    try {
        upper_limit = std::stoul(limit);
        if (upper_limit > std::numeric_limits<uint16_t>::max()) {
            throw std::invalid_argument("Upper limit too large.");
        }
        sum = sum_of_naturals_divisible_by_3_and_5(static_cast<uint16_t>(upper_limit));
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "sum of naturals up to " << upper_limit << " divisible by 3 and 5 is " << sum << std::endl;
    return 0;
}
