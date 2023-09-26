#include <iostream>
#include <iomanip>
#include <bitset>

int main(){

    const int COLUMN_WIDTH{20};

    std::cout << "COMPOUND BITWISE AND ASSIGNMENT OPERATORS " << std::endl;
    std::cout << std::endl;

    unsigned char sandbox_var{0b00110100};
    std::cout << std::endl;

    std::cout << "COMPOUND BITWISE OPERATORS" << std::endl;
    std::cout << std::endl;

    std::cout << "Initial value: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
    std::cout << std::endl;

    // Compound left shift
    std::cout << "Operation: sandbox_var <<= 2;" << std::endl;
    sandbox_var <<= 2;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

    // Compound right shift
    std::cout << "Operation: sandbox_var >>= 2;" << std::endl;
    sandbox_var >>= 2;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

    std::cout << std::endl;
    std::cout << "ASSIGNMENT BITWISE OPERATORS" << std::endl;
    std::cout << std::endl;

    // Compound OR (|) bitwise operator
    std::cout << "Operation: sandbox_var |= 0b00000010;" << std::endl;
    sandbox_var |= 0b00000010;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

    // Compound AND (&) bitwise operator
    std::cout << "Operation: sandbox_var &= 0b00001100;" << std::endl;
    sandbox_var &= 0b00001100;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

    // Compound XOR (^) bitwise operator
    std::cout << "Operation: sandbox_var ^= 0b00000011;" << std::endl;
    sandbox_var ^= 0b00000011;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) <<  std::bitset<8>(sandbox_var) << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

    return 0;
}