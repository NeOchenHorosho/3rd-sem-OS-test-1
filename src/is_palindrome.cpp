#include "is_palindrome.hpp"
#include <cstdlib>
namespace first_os_test
{
    bool is_palindrome(int64_t number) noexcept
    {
        number = std::abs(number);
        uint64_t number_copy = number, reverse_number = 0;
        do
        {
            uint64_t digit = number % 10;
            reverse_number = reverse_number * 10 + digit;
            number = number / 10;
        } while (number != 0);
        return reverse_number == number_copy;
    }
}