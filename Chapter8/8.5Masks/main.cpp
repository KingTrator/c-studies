#include <iostream>
#include <bitset>
#include <iomanip>

/* 
    LECTURE OBJECTIVES
1. Set bit position(s)
2. Rest Bit position(s)
3. Check bit position(s)
4. Toggle bit position(s)
*/

int main(){
    
    const unsigned char mask_1 {0b00000001};
    const unsigned char mask_2 {0b00000010};
    const unsigned char mask_3 {0b00000100};
    const unsigned char mask_4 {0b00001000};
    const unsigned char mask_5 {0b00010000};
    const unsigned char mask_6 {0b00100000};
    const unsigned char mask_7 {0b01000000};
    const unsigned char mask_8 {0b10000000};
    
    unsigned char var {0b00000000};
    const unsigned int COLUMN_WIDTH {25};

    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << std::endl;

    std::cout << "Setting bit to position 0" << std::endl;
    var |= mask_1;
    std::cout << std::setw(COLUMN_WIDTH) << "var |= mask_1 ---> " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
        var |= mask_5;
    std::cout << std::setw(COLUMN_WIDTH) << "var |= mask_5 ---> " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    std::cout << "Reseting position" << std::endl;
    std::cout << "Reseting position 0" << std::endl;
    // IMPORTANT
    var &= (~mask_1);
    std::cout << std::setw(COLUMN_WIDTH) << "var &= (~mask_1): " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << "Reseting position 5" << std::endl;
    var &= (~mask_5);
    std::cout << std::setw(COLUMN_WIDTH) << "var &= (~mask_5): " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << std::endl;
  
    std::cout << "Setting all bits" << std::endl;
    var |= (mask_1 | mask_2 | mask_3 | mask_8 | mask_7 | mask_6 | mask_5 | mask_4);
    std::cout << std::setw(COLUMN_WIDTH) << " var |= (mask_1 | mask_2 | mask_3 | mask_8 | mask_7 | mask_6 |\n mask_5 | mask_4) -->" << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << std::endl;

    // Checking bit position
    std::cout << "Checking bit position" << std::endl;
    std::cout << "bit0 is " << ((var & mask_1) >> 0) << std::endl;
    std::cout << "bit1 is " << ((var & mask_2 >> 1)) << std::endl;

    std::cout << std::setw(COLUMN_WIDTH)  << "Toggling bit position" << std::endl;
    var ^= mask_1;
    std::cout << std::setw(COLUMN_WIDTH) << "var ^= mask_1 --> " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    var ^= mask_2;
    std:: cout << std::setw(COLUMN_WIDTH)  << "var ^= mask_2 --> " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "Toggling multiple bits: " << std::endl;
    var ^= (mask_3 | mask_7 | mask_8);
    std::cout << "var ^= (mask_3 | mask_7 | mask_8) --> " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    
    return 0;
}