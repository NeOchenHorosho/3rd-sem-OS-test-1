#include "list_reverse.hpp"
namespace first_os_test
{
    template <typename T>
    std::list<T> get_reverse(std::list<T> arg)
    {
        try
        {
            return arg.reverse();
        }
        catch (...)
        {
            throw;
        }
    };
}