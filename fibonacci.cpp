#include <iostream>

// Helper function to find the value of the nth number in the sequence
int _fibonacci(int n) {

    // There are two base cases for this function. 
    // The first returns 0 if n = 1, 
    // while the second returns 1 if n = 1, 
    // where n is the nth position in the sequence
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    // The recursive case takes the sum of the value 
    // of the (n - 1)th and (n - 2)th terms in the sequence 
    // which yields the value of the nth term
    return _fibonacci(n - 1) + _fibonacci(n - 2);
}

void fibonacci(int end, int start=1) {
    int n = start;
    // The base case for this function happens when the nth term 
    // in the sequence is reached, that is, "start" (beginning at 1) is equal "end"
    if (start == end) {
        std::cout << _fibonacci(n) << std::ends;
        return;
    }
    std::cout << _fibonacci(n) << ", " << std::ends;
    // The recursive case here increments the nth value to the next
    fibonacci(end, n + 1);
}

int main() {
    fibonacci(10);
    std::cout << std::endl;
    fibonacci(7);
    std::cout << std::endl;
    fibonacci(20);
    std::cout << std::endl;
    return 0;
}