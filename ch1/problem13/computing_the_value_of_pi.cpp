#include "computing_the_value_of_pi.h"

#include <random>

/**
 * @brief The idea of Monte Carlo simulation to determine the value of PI is:
 * the area of a circle with diameter d is PI * d^2 / 4 and the area of a
 * square that has the length of its sides equal to d is d^2. If we divide the
 * two we get PI/4.
 *
 * If we put the circle inside the square and generate random numbers uniformly
 * distributed within the square, then the count of numbers in the circle
 * should be directly proportional to the circle area, and the count of numbers
 * inside the square should be directly proportional to the square’s area. That
 * means that dividing the total number of hits in the square and circle should
 * give PI/4.
 *
 * @param samples
 * @return double
 */
double compute_pi(int samples)
{
    std::mt19937 engine;
    std::uniform_real_distribution<double> distribution{0, 1};
    int hit = 0;

    for (int i = 0; i < samples; i++)
    {
        double x = dist(engine), y = dist(engine);
        if (y <= std::sqrt(1 - std::pow(x, 2)))
            hit += 1;
    }
    return 4.0 * hit / samples;
}
