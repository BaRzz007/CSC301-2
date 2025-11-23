#include <iostream>

// Note that this only calculates as high as 170! which the biggest a c++
// data type can contain before overflowing.
// An external function or custom implementation is required to 
// contain higher factorial results
long double factorial(int n) {

    // The base case terminates the function when n = 1 or n = 0,
    // just like 0! = 1 and 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // The recursive case calculates and returns the value for n * (n - 1)!, 
    // as is the case for calculating factorials
    return (n * factorial(n - 1));
}

int main() {

    std::cout << factorial(7) << std::endl;
    std::cout << factorial(5) << std::endl;
    std::cout << factorial(120) << std::endl;

    return 0;
}