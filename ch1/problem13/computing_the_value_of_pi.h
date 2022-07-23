/**
 * @file computing_the_value_of_pi.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that computes the value of Pi with a precision of two
 * decimal digits.
 * @version 0.1
 * @date 2022-07-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once

/**
 * @brief Return the approximate value of pi by Monte Carlo simulation.
 *
 * @param samples Sample points with default value
 * @return double
 */

double compute_pi(int samples = 1000000);
