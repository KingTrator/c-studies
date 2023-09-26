#include <iostream>
#include <bitset>
#include <iomanip>

int main(){

    const int COLUMN_WIDTH {25};
    const int RESUME_COLUMN {50};

    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101

    std::cout << "          RESUME         " << std::endl;
    std::cout << std::right << std::setw(RESUME_COLUMN) << "IF a AND b are 1, a & b == 1 (AND)" << std::endl;
    std::cout << std::right << std::setw(RESUME_COLUMN) << "IF a OR b are 1, a | b == 1 (OR)" << std::endl;
    std::cout << std::right << std::setw(RESUME_COLUMN) << "IF a == b, a ^ b == 0 (XOR)" << std::endl;
    std::cout << std::right << std::setw(RESUME_COLUMN) << "IF a == 0, ~a == 1, else if a == 1, ~a == 0 (NOT)" << std::endl;
    std::cout << std::right;

    std::cout << std::endl; 
  
    std::cout << std::left << std::setw(COLUMN_WIDTH) << "value1:" << std::bitset<8>(value1) << std::endl;
    std::cout << std::left << std::setw(COLUMN_WIDTH) << "value2:" << std::bitset<8>(value2) << std::endl;

    // AND operation
    std::cout << "\nBitwise AND Operation:\n";
    std::cout << std::left << std::setw(COLUMN_WIDTH) << "value1 & value2:" << std::bitset<8>(value1 & value2) << std::endl;

    // OR operation
    std::cout << "\nBitwise OR Operation:\n";
    std::cout << std::left << std::setw(COLUMN_WIDTH) << "value1 | value2:" << std::bitset<8>(value1 | value2) << std::endl;

    // NOT operation
    std::cout << "\nBitwise NOT Operation:\n";
    std::cout << std::left << std::setw(COLUMN_WIDTH) << "~value1:" << std::bitset<8>(~value1) << std::endl;
    std::cout << std::left << std::setw(COLUMN_WIDTH) << "~value2:" << std::bitset<8>(~value2) << std::endl;

    // XOR operation
    std::cout << "\nBitwise XOR Operation:\n";
    std::cout << std::left << std::setw(COLUMN_WIDTH) << "value1 ^ value2:" << std::bitset<8>(value1 ^ value2) << std::endl;

    return 0;
}
