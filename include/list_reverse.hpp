#ifndef LIST_REVERSE_H
#define LIST_REVERSE_H
#include <list>
#include <functional>
namespace first_os_test
{
    template <typename T>
    std::list<T> get_reverse(std::list<T> arg)
    {
        try
        {
            arg.reverse();
            return arg;
        }
        catch (...)
        {
            throw;
        }
    }
}
#endif