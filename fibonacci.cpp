#ifndef OS_TEST_1
#define OS_TEST_1
#include <iostream>
#include <limits>
#include <vector>
std::vector<int64_t> fibbonacci(u_int64_t n)
{
    std::vector<int64_t> result;
    if(n == 0) return result;  
    result.push_back(1); 
    if(n == 1) return result;
    result.push_back(1);
    for (size_t i = 2; i < n; ++i) 
    {
        const u_int64_t a = result[i - 2];
        const u_int64_t b = result[i - 1];
        if (std::numeric_limits<u_int64_t>::max() - a < b) {
            throw std::overflow_error("Fibonacci value overflow for uint64_t");
        }
        result.push_back(a + b);
    }
}
#endif