#include "greatest_common_divisor.h"

#include <iostream>
#include <stdexcept>
#include <string>

int main()
{
    std::string a_in_str, b_in_str;

    std::cout << "First positive number: ";
    std::cin >> a_in_str;
    std::cout << "Second positive number: ";
    std::cin >> b_in_str;

    uint64_t gcd{};

    try
    {
        gcd = greatest_common_divisor(std::stoull(a_in_str), std::stoull(b_in_str));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "greatest common divisor of " << a_in_str << " and "
              << b_in_str << " is " << gcd << std::endl;
    return 0;
}
