#include <iostream>
#include <clocale>
#include <cmath>
#include <format>

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    int number {};

    std::cout << "It's simple: digit an int and discover its root (aproximation). " << std::endl;
    std::cout << "What's the number you want to know its root? ";
    std::cin >> number;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "The root of: " << number << " is " << std::format("{:.3f}",std::sqrt(number)) << std::endl;
    // 3 digits aproximation. Interesting, last time writting {:.3} result in only 2 digits aproximation.
    return 0;
}
/* I'm personally happy to build this simple programm because I did not had any helped. I simply deduce the right library would be "cmaht" and the right function "sqrt". Of course that's not a genius move, especially
for native english speakers (which is not my case), but even the smallest victories deserves a bit of consideration.
*/
