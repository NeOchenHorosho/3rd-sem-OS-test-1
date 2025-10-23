#include <gtest/gtest.h>
#include "fibonacci.hpp"
#include "is_palindrome.hpp"
#include "list_reverse.hpp"
#include <vector>
#include <list>
#include <stdexcept>

using namespace first_os_test;

TEST(FibonacciTest, HandlesSmallN) {
    std::vector<uint64_t> expected = {1, 1, 2, 3, 5};
    EXPECT_EQ(fibonacci(5), expected);
}

TEST(FibonacciTest, HandlesBaseCases) {
    EXPECT_TRUE(fibonacci(0).empty());
    EXPECT_EQ(fibonacci(1), std::vector<uint64_t>{1});
    EXPECT_EQ(fibonacci(2), (std::vector<uint64_t>{1, 1}));
}

TEST(FibonacciTest, ThrowsOnOverflow) {
    EXPECT_THROW(fibonacci(100), std::overflow_error);
}

TEST(PalindromeTest, CorrectlyIdentifiesPalindromes) {
    EXPECT_TRUE(is_palindrome(121));
    EXPECT_TRUE(is_palindrome(0));
    EXPECT_TRUE(is_palindrome(7));
}

TEST(PalindromeTest, IdentifiesNonPalindromes) {
    EXPECT_FALSE(is_palindrome(123));
    EXPECT_FALSE(is_palindrome(10));
}

TEST(PalindromeTest, HandlesNegativeNumbers) {
    EXPECT_TRUE(is_palindrome(-121));
}

TEST(ListReverseTest, ReversesIntegers) {
    std::list<int> input = {1, 2, 3};
    std::list<int> expected = {3, 2, 1};
    EXPECT_EQ(get_reverse(input), expected);
}

TEST(ListReverseTest, HandlesEmptyList) {
    std::list<int> empty;
    EXPECT_TRUE(get_reverse(empty).empty());
}