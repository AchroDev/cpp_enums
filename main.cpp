#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Enum/Enumerations is a set of values, i.e. making a group of ints (a,b,c) instead of individually making the integers.

// group of integers example
// int A = 0;
// int B = 1;
// int C = 2;

enum Example
{
    a,
    b,
    c
};

int main()
{
    int value = b; // right now this value could be changed and then the below if statement wouldn't make sense

    if (value == b)
    {
        // TODO:
    }

    LOG("Hello World!");
    std::cin.get();
}
