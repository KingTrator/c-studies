#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    int a = 10;
    int b = 5;

    // Add
    int sum = a + b;  // sum will be 15

    // Subtract
    int difference = a - b;  // difference will be 5

    // Multiply
    int product = a * b;  // product will be 50

    // Divide
    int quotient = a / b;  // quotient will be 2

    // Modulus (remainder after division)
    int remainder = a % b;  // remainder will be 0

    // Note: beware with floating results when calculating with int variables. You're only going to receive the integer part.

    // Example:
    int c {3};
    int d {4};

    std::cout << c / d << std::endl; // output: 0
    std::cout << d / c << std::endl; // output: 1

    std::cout << d % c << std::endl; // output: 1

    return 0;
}
