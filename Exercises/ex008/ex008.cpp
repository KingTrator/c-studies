#include <iostream>
#include <clocale>
#include <string>


int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    std::cout << "Let's learn the size of some common types at C++: int, string, float and boolean." << std::endl;
    std::cout << "Size of Integer: " << sizeof(int) << " bytes" << " or " 
    << sizeof(int) * 8 << " bits." << std::endl;
    std::cout << "Size of String: " << sizeof(std::string) << " bytes " 
    << " or " << sizeof(std::string) * 8 << " bits." << std::endl;
    std::cout << "Size of Float: " << sizeof(float) << " bytes " 
    << " or " << sizeof(float) * 8 << " bits." << std::endl;
    std::cout << "Size of Boolean: " << sizeof(bool) << " bytes " 
    << " or " << sizeof(bool) * 8 << " bits." << std::endl;

    std::cout << "Hope you enjoy it. If you ever want to learn the size of something at C++"
                 " you can type: sizeof(object_here)." << std::endl;
    return 0;
}

// sizeof() function that measure the size in bytes (8bits) of anything you want to know.