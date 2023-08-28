#include <iostream>
#include <clocale>
#include <cmath>


/*
Exercise: Build a programm that calculates the hypotenusa of a triangle rectangle after the users gives the 2 cathets.
*/


int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    float b{};
    float c{};

    std::cout << "Hypotenuse Calculator. Give us both legs, get back the hypotenuse." << std::endl;

    std::cout << "First leg: ";
    std::cin >> b;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "Second leg: ";
    std::cin >> c;
    std::cin.ignore();
    std::cout << std::endl;

    float result{(b * b) + (c * c)};
    float a{std::sqrt(result)}; 

    std::cout << "a^2 = b^2 + c^2" << std::endl;
    std::cout << "a^2 = " << b * b << " + " << c * c << std::endl;
    std::cout << "a = " << a << '\n';

    return 0;
}
