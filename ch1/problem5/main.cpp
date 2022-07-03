#include "sexy_prime_pairs.h"

#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

int main()
{
    std::string limit;

    std::cout << "Upper limit: ";
    std::cin >> limit;

    std::vector<std::pair<uint32_t, uint32_t>> pairs;
    unsigned long upper_limit{};

    try
    {
        upper_limit = std::stoul(limit);
        if (upper_limit > std::numeric_limits<uint32_t>::max())
        {
            throw std::invalid_argument("Upper limit too large");
        }
        pairs = sexy_prime_pairs(static_cast<uint32_t>(upper_limit));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Sexy prime pairs smaller than " << upper_limit << " are:\n";
    for(const auto& p : pairs)
    {
        std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }
    return 0;
}
