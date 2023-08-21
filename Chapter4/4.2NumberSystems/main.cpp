#include <iostream>

int main(){
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0F; // Hexadecimal
    int number4 = 0b00001111; // Binary
    std::cout << number1 << "|" << number2 << "|" <<  number3 << "|" << number4 << std::endl;
    std::cout << "As you can see, all are 15, but they came from different formats, decimal, octal, hexadecimal and binary.";
    return 0;
}