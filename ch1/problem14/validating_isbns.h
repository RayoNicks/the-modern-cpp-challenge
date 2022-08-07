/**
 * @file validating_isbns.h
 * @author RayoNicks (289926968@qq.com)
 * @brief Write a program that validates whether a string entered by the user
 * represent a valid ISBN-10.
 * @version 0.1
 * @date 2022-08-07
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <string>

/**
 * @brief Validate an ISBN-10.
 *
 * @param isbn ISBN-10 to validate.
 * @return true
 * @return false
 */
bool valid_isbn10(const std::string &isbn);

/**
 * @brief Validate an ISBN-13.
 *
 * @param isbn ISBN-13 to validate.
 * @return true
 * @return false
 */
bool valid_isbn13(const std::string &isbn);
