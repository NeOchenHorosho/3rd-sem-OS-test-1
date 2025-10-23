# First OS test
This is the solution to the first test for the Operating Systems course.
## Tasks:
1. На вход натуральное число n. На выход контейнер с первыми n числами Фибоначчи.
2. На вход число. На выход – ответ является ли число палиндромом.
3. Развернуть связный список используя итеративный подход.

Theoretical questions and answers can be found [here](theoretical_questions_answers.md).

## Building and testing 

1. ``` cmake -S . -B build```
2. ``` cmake --build build ```
3. ``` cd build && ctest ```