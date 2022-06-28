#include "abundant_numbers.h"

bool is_abundant_number(uint32_t num)
{
    uint64_t sum = 1;

    for (uint32_t i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (num / i != i)
            {
                sum += num / i;
            }
        }
    }

    return sum > static_cast<uint64_t>(num);
}

std::vector<uint32_t> abundant_numbers(uint32_t limit)
{
    std::vector<uint32_t> numbers;

    for (uint32_t i = 2; i < limit; i++)
    {
        if (is_abundant_number(i))
        {
            numbers.push_back(i);
        }
    }

    return numbers;
}
