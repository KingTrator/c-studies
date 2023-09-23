#include <iostream>

int main(){
    // overflow
    unsigned char a = 250;
    std::cout << "OVERFLOW: " << std::endl;
    std::cout << "a == " << static_cast<int>(a) << " | char a == " << a << std::endl; 
    
    for(int c = 0; c < 10; ++c) {
        ++a;
        std::cout << "++a; a == " << static_cast<int>(a) << " | char a == " << a << std::endl;
        std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
    }

    // underflow
    std::cout << "UNDERFLOW: " << std::endl;
    a = 0;
    std::cout << "a == " << static_cast<int>(a) << " | char a == " << a << std::endl; 
    
    a = 0;
    for(int c = 0; c < 10; ++c) {
        --a;
        std::cout << "--a; a == " << static_cast<int>(a) << " | char a == " << a << std::endl;
        std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
    }

    return 0;
}
