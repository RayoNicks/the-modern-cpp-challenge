#include "sum_of_naturals_divisible_by_3_and_5.h"

#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

int main()
{
    std::string limit;
    uint32_t sum{};

    std::cout << "Upper limit:";
    std::cin >> limit;

    try
    {
        unsigned long upperLimit{std::stoul(limit)};
        if (upperLimit > std::numeric_limits<uint16_t>::max())
        {
            throw std::invalid_argument("Upper limit too large");
        }
        sum = solution(static_cast<uint16_t>(upperLimit));
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "sum = " << sum << std::endl;
    return 0;
}
