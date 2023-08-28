#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    int value1 {10}; // 4 bytes means the same as signed int
    signed int value2 {-300}; // 4 bytes means the same as int

    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2): " << sizeof(value2) << std::endl;

    unsigned int value3 {4}; // 4 bytes, only positive
    // unsigned int {-5}; compile error, unsigned does not accepts sign...
    std::cout << "unsigned value3: " << value3 << std::endl; 
    std::cout << "size of value3: " << sizeof(value3) << std::endl;

    short int value4 {2}; // only 2 bytes
    long int value5 {9}; // 4 bytes ~ 8 bytes
    long long int value6 {9}; // 8bytes

    std::cout << "size of value4 (short int): " << sizeof(value4) << std::endl;
    std::cout << "size of value5 (long int): " << sizeof(value5) << std::endl;
    std::cout << "size of value6 (long long int): " << sizeof(value6) << std::endl;

    return 0;
}

/* all size of are in bytes. I did exercises before the class, so I'm not going to go very deep here, I 
already took the necessary notes. */