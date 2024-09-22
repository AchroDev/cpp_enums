#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Enum/Enumerations is a set of values, i.e. making a group of ints (a,b,c) instead of individually making the integers.

// group of integers example
int a = 0;
int b = 1;
int c = 2;

enum Example
{
    // If you don't specify a value, the default will be 0 and it will increment up one by one
    // setting A to 5 makes B = 6 and C = 7.
    A = 5,
    B,
    C
};

int main()
{
    Example value = B; // Now using part of the Enum group and the error goes away.

    if (value == 1)
    {
        // TODO:
    }

    LOG("Hello World!");
    std::cin.get();
}
