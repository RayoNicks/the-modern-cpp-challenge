#include "greatest_common_divisor.h"

#include <iostream>
#include <stdexcept>
#include <string>

int main()
{
    std::string aInStr, bInStr;

    std::cout << "First positive number:";
    std::cin >> aInStr;
    std::cout << "Second positive number:";
    std::cin >> bInStr;

    uint64_t gcd{};
    try
    {
        gcd = greatest_common_divisor(std::stoull(aInStr), std::stoull(bInStr));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "gcd = " << gcd << std::endl;
    return 0;
}
