cmake_minimum_required(VERSION 3.14)
project(OSTest)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(Fibbonacci STATIC src/fibonacci.cpp)
add_library(IsPalindrome STATIC src/is_palindrome.cpp)

target_include_directories(Fibbonacci PUBLIC include)
target_include_directories(IsPalindrome PUBLIC include)

enable_testing()
add_executable(tests 
  tests/test.cpp
)

target_link_libraries(tests 
    PRIVATE 
        Fibbonacci
        IsPalindrome
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)