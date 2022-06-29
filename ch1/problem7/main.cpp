#include "amicable_numbers.h"

#include <iostream>
#include <limits>
#include <stdexcept>

int main()
{
    std::vector<std::pair<uint32_t, uint32_t>> pairs;

    try
    {
        pairs = amicable_numbers(1000000);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Amicable numbers smaller than 100000 are:\n";
    for (const auto &p : pairs)
    {
        std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }
    return 0;
}
