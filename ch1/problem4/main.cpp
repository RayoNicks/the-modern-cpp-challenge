#include "largest_prime_smaller_than_given_number.h"

#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

int main()
{
    std::string limit;

    std::cout << "Upper limit: ";
    std::cin >> limit;

    uint32_t prime{};
    unsigned long upper_limit{};

    try
    {
        upper_limit = std::stoul(limit);
        if (upper_limit > std::numeric_limits<uint32_t>::max())
        {
            throw std::invalid_argument("Upper limit too large.");
        }
        prime = largest_prime(static_cast<uint32_t>(upper_limit));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "largest prime smaller than " << upper_limit << " is " << prime << std::endl;
    return 0;
}
