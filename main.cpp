#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Enum/Enumerations is a set of values, i.e. making a group of ints (a,b,c) instead of individually making the integers.

// group of integers example
int a = 0;
int b = 1;
int c = 2;

enum Example
{
    A,
    B,
    C
};

int main()
{
    Example value = b; // With the Enum we can use Example instead of int, however the value here must be part of the Enum group.

    if (value == b)
    {
        // TODO:
    }

    LOG("Hello World!");
    std::cin.get();
}
