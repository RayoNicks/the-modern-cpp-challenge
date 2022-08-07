#include "validating_isbns.h"

#include <algorithm>
#include <numeric>

/**
 * @brief The International Standard Book Number (ISBN) is a unique numeric
 * identifier for books. The last of the 10 digits is a checksum. This digit is
 * chosen so that the sum of all the 10 digits, each multiplied by its weight
 * from left to right, descending from 10 to 1, is a multiple of 11.
 *
 * @param isbn
 * @return true
 * @return false
 */
bool valid_isbn10(const std::string &isbn)
{
    if (isbn.length() != 13)
    {
        return false;
    }

    if (isbn[1] != '-' || isbn[5] != '-' || isbn[11] != '-')
    {
        return false;
    }

    int count = std::count_if(isbn.begin(), isbn.end(), isdigit);
    if (count == 9)
    {
        if (isbn.back() != 'X')
        {
            return false;
        }
    }
    else if (count != 10)
    {
        return false;
    }

    int weight{10}, sum;

    sum = std::accumulate(isbn.begin(), isbn.end() - 1, 0,
                          [&weight](const int total, const char c)
                          {
                              if (isdigit(c))
                              {
                                  return total + (c - '0') * weight--;
                              }
                              else
                              {
                                  return total;
                              }
                          });

    if (isbn.back() == 'X')
    {
        sum += 10;
    }
    else
    {
        sum += isbn.back() - '0';
    }

    return sum % 11 == 0;
}

/**
 * @brief The last of the 13 digits is a checksum. This digit is chosen so that
 * the sum of all the 13 digits, each multiplied by its weight, 1 for digits
 * with odd index and 3 for digits with even index, is a multiple of 10. Also
 * the first 3 digits must be 978 or 979.
 *
 * @param isbn
 * @return true
 * @return false
 */
bool valid_isbn13(const std::string &isbn)
{
    if (isbn.length() != 17)
    {
        return false;
    }

    if (isbn.substr(0, 3) != "978" && isbn.substr(0, 3) != "979")
    {
        return false;
    }

    if (isbn[3] != '-' || isbn[5] != '-' || isbn[9] != '-' || isbn[15] != '-')
    {
        return false;
    }

    if (std::count_if(isbn.begin(), isbn.end(), isdigit) != 13)
    {
        return false;
    }

    int weight{3}, sum;

    sum = std::accumulate(isbn.begin(), isbn.end(), 0,
                          [&weight](const int total, const char c)
                          {
                              if (isdigit(c))
                              {
                                  weight = weight == 3 ? 1 : 3;
                                  return total + (c - '0') * weight;
                              }
                              else
                              {
                                  return total;
                              }
                          });

    return sum % 10 == 0;
}
