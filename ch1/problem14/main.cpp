#include <iostream>

#include "validating_isbns.h"

int main()
{
    std::string isbn10;

    std::cout << "ISBN 10 to validate: ";
    std::cin >> isbn10;

    bool valid;

    try {
        valid = valid_isbn13(isbn10);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << isbn10 << " is " << (valid ? "valid." : "invalid.") << std::endl;
    return 0;
}
