#include "fibonacci.hpp"
#include <iostream>
#include <limits>

namespace first_os_test
{
    bool sum_is_overflow(uint64_t first, uint64_t second)
    {
        return std::numeric_limits<uint64_t>::max() - first < second;
    }

    std::vector<uint64_t> fibonacci(const uint64_t number)
    {
        std::vector<uint64_t> result;
        if (number == 0)
            return result;
        result.push_back(1);
        if (number == 1)
            return result;
        result.push_back(1);
        for (size_t i = 2; i < number; ++i)
        {
            const std::uint64_t a = result[i - 2];
            const uint64_t b = result[i - 1];
            if (sum_is_overflow(a, b))
            {
                throw std::overflow_error("Fibonacci value overflow for uint64_t");
            }
            result.push_back(a + b);
        }
        return result;
    }
}