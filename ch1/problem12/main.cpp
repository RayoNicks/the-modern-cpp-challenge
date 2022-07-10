#include "largest_collatz_sequence.h"

#include <iostream>
#include <limits>

int main()
{
    std::string limit;

    std::cout << "Upper limit: ";
    std::cin >> limit;

    unsigned long upper_limit{};
    std::pair<uint32_t, uint64_t> largest;

    try
    {
        upper_limit = std::stoul(limit);
        if (upper_limit > 1000000)
        {
            throw std::invalid_argument("Upper limit too large.");
        }
        largest = largest_collatz_sequence(static_cast<uint32_t>(upper_limit));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Largest collatz sequence smaller than " << upper_limit << " is: "
              << "(" << largest.first << ", " << largest.second << ")" << std::endl;
    return 0;
}
