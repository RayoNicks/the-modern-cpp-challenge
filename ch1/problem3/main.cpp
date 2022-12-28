#include <iostream>
#include <stdexcept>
#include <string>

#include "least_common_multiple.h"

int main()
{
    std::string a_in_str, b_in_str;

    std::cout << "First positive number: ";
    std::cin >> a_in_str;
    std::cout << "Second positive number: ";
    std::cin >> b_in_str;

    uint64_t lcm{};

    try {
        lcm = least_common_multiple(std::stoull(a_in_str), std::stoull(b_in_str));
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "least common multiple of " << a_in_str << " and " << b_in_str << " is " << lcm << std::endl;
    return 0;
}
