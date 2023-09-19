#include <iostream>
#include <clocale>
using namespace std; // Use this with caution*

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    char character1 {'a'};
    char character2 {'b'};
    char character3 {'c'};
    char character4 {'d'};
    char character5 {'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << "The size of a char is: " << sizeof(char) << std::endl;

    char value {65}; // ASCII character code for 'A'
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int) " << static_cast<int>(value) << std::endl;
    // static_cast is used to convert a type to another type (when it's possible)
    return 0;
}

// * Using namespace defined as std may lead to conflicton with other libraries.
// Avoid it within bigger projects
// Note: while variable cannot change their inner type, its value may change with methods like "static_cast". 
// A variable value will not be converted to impossible types for the original value and/or if the value is defined as "const".