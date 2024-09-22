#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Enum/Enumerations is a set of values, i.e. making a group of ints (a,b,c) instead of individually making the integers.

// group of integers example
// int A = 0;
// int B = 1;
// int C = 2;

enum Example
{
    A,
    B,
    C
};

int main()
{
    LOG("Hello World!");
    std::cin.get();
}
