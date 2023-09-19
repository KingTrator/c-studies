#include <iostream>
#include <clocale>
#include <string>
#include <cctype>


int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    char x {};
    
    std::cout << "Hello! Please, digit a single char: ";
    std::cin >> x;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "The character " << x << "is ";
    if(std::isupper(x)){
        std::cout << "uppercase letter.";
    } else if(std::islower(x)) {
        std::cout << "lowercase letter.";
    } else if (std::isdigit(x)) {
        std::cout << "is a digit.";
    } else {
        std::cout << "is a special character.";
    }
    

    return 0;
}
