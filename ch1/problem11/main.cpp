#include "converting_numerical_values_to_roman.h"

#include <iostream>

int main()
{
    std::string number, roman;

    std::cout << "Arabic number: ";
    std::cin >> number;

    try
    {
        roman = roman_encoding(static_cast<uint32_t>(std::stoul(number)));
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Roman encoding for " << number << " is: " << roman << std::endl;
    return 0;
}
