cmake_minimum_required(VERSION 3.10.0)
project(OSTest)

add_library(Fibbonacci STATIC fibonacci.cpp)
add_library(IsPalindrome STATIC is_palindrome.cpp)
add_library(ListRevers STATIC list_reverse.cpp)