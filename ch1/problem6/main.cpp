#include "abundant_numbers.h"

#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

int main()
{
    std::string limit;

    std::cout << "Upper limit: ";
    std::cin >> limit;

    std::vector<uint32_t> nums;
    unsigned long upper_limit{};

    try
    {
        upper_limit = std::stoul(limit);
        if (upper_limit > std::numeric_limits<uint32_t>::max())
        {
            throw std::invalid_argument("Upper limit too large.");
        }
        nums = abundant_numbers(static_cast<uint32_t>(upper_limit));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Abundant numbers smaller than " << upper_limit << " are:\n";
    for(const auto& n : nums)
    {
        std::cout << n << std::endl;
    }
    return 0;
}
