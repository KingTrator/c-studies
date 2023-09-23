#include <iostream>
#include <bitset> // alows to print the data in binary

int main(){

    unsigned short int data {69};

    std::cout << "data (dec): " << std::dec << data << std::endl;
    std::cout << "data (oct) " << std::oct << data << std::endl;
    std::cout << "data (hex): " << std::hex << data << std::endl;
    std::cout << "data (bin): " << std::bitset<16>(data) << std::endl;
    std::cout << std::dec;

    return 0;
}
