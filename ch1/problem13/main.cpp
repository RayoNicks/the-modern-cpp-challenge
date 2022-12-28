#include <iostream>

#include "computing_the_value_of_pi.h"

int main()
{
    std::string sample;

    std::cout << "Sample points: ";
    std::cin >> sample;

    unsigned long sample_points;
    double pi;

    try {
        sample_points = std::stoul(sample);
        if (sample_points > 100000000) {
            throw std::invalid_argument("Too many sample points.");
        }
        pi = compute_pi(sample_points);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 0;
    }

    std::cout << "Approximate value of pi by Monte Carlo simulation with " << sample_points << " points is " << pi << std::endl;
    return 0;
}
