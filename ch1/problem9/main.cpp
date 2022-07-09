#include "prime_factors_of_a_number.h"

#include <iostream>
#include <limits>
#include <stdexcept>

int main()
{
    std::string number_in_string;

    std::cout << "Number to decompose: ";
    std::cin >> number_in_string;

    std::vector<uint32_t> factors;
    unsigned long number{};

    try
    {
        number = std::stoul(number_in_string);
        if (number > std::numeric_limits<uint32_t>::max())
        {
            throw std::invalid_argument("Number too large.");
        }
        factors = prime_factors(static_cast<uint32_t>(number));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Prime factors of " << number << " are:\n";
    for (const auto &factor : factors)
    {
        std::cout << factor << std::endl;
    }
    return 0;
}
