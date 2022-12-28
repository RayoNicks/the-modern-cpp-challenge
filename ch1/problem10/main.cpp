#include <iostream>

#include "gray_code.h"

int main()
{
    const uint32_t bit_width{5};
    std::vector<std::bitset<bit_width>> grays{gray_representation<bit_width>()};

    for (size_t i = 0; i < grays.size(); i++) {
        std::cout << "(" << i << ", " << std::bitset<bit_width>(i) << ", " << grays[i] << ")" << std::endl;
    }

    return 0;
}
