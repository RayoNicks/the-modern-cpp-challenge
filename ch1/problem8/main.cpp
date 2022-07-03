#include "armstrong_numbers.h"

#include <iostream>
#include <stdexcept>

int main()
{
    std::vector<uint32_t> numbers;

    try
    {
        numbers = armstrong_numbers();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Armstrong numbers with 3 digits are:\n";
    for (const auto &n : numbers)
    {
        std::cout << n << std::endl;
    }
    return 0;
}
