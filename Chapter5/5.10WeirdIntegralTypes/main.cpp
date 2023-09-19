#include <iostream>

int main(){

    short int var1 {10}; // 2 bytes
    short int var2 {29};

    char var3 {40}; // 1 byte
    char var4 {52};

    std::cout << "size of var1: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "size of var2: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "size of var3: " << sizeof(var3) << " byte" << std::endl; 
    std::cout << "size of var4: " << sizeof(var4) << " byte" << std::endl;

    // When trying to sum values, their converted to "int", which is the minimum type for this type of math operation.
    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "size of result1 = var1 + var2 " << sizeof(result1) << " bytes." << std::endl;
    std::cout << "size of result2 = var3 + var4 " << sizeof(result2) << " bytes." << std::endl;
    // If you decided to not use auto, and maintain short int, you may receive an error.
    return 0;
}
