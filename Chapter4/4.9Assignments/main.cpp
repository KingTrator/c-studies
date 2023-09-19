#include <iostream>
#include <clocale>

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    int var1; // Declare
    std::cout << "var1: " << var1 << std::endl;

    var1 = 55; // Assign 
    std::cout << "var1: " << var1 << std::endl;

    int var2 {123}; // Initialize = declare + assign

    std::cout << var2;
    std::cout << std::endl;

    // Cautions with Auto (automatic) assigns
    auto var3 {329u}; // assign as unsigned int
    std::cout << var3 << std::endl;

    var3 = -22; // it'll compile, but var3 will be filled with garbage, once "-" is signed

    std::cout << var3;

    return 0;
}

/*
IMPORTANT:
The curly braces "{}" can only be used at an initialization, not for new assignments.
If you try to do it, you're going to receive a compiler error.
*/
