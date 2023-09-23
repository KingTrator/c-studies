#include <iostream>
#include <bitset>
#include <typeinfo>

/*
Left Shift(<<):
Original:      001111000010
After << 1:    011110000100
After << 2:    111100001000

Right Shift (>>):
Original:      001111000010
After >> 1:    000111100001
After >> 2:    000011110000
*/

int main(){

    unsigned short int value {0xff0u};

    std::cout << "value (bin): " << std::bitset<16>(value) << std::endl;
    std::cout << "value (dec): " << value << std::endl;

    //right shift by 1
    std::cout << "After >> 1 shift" << std::endl;
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value: " << std::bitset<16>(value) << std::endl;
    std::cout << "value (dec):" << value << std::endl;

    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;


    //left shift by 1 two times:
    std::cout << "After << 1 shift:" << std::endl;
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << std::endl;
    std::cout << "value (dec):" << value << std::endl;
    std::cout << "After (another) << 1 shift:" << std::endl;
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value: " << std::bitset<16>(value) << std::endl;
    std::cout << "value (dec):" << value << std::endl;

    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

    std::cout << "Integer Implict Conversion:" << std::endl; 
    std::cout << "After a bitwise shifting operation, the type may change if the data is of a type with less memory than an integer (4 bytes)" << std::endl;
    std::cout << "In my case, GCC compiler catches that and converts the type back. But for security, you should explicitly cast it back with static_cast<previous_type>(variable)" << std::endl;
    std::cout << "When you shift right an integer (only integers), the value doubles. When you shift left, it's divided by 2." << std::endl;

    return 0;
}
