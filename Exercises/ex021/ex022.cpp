#include <iostream>
#include <clocale>

/*
Relational Operator Challenge with User Input:

1. Prompt the user to enter three integer values: x, y, and z.
2. Check and display whether x is in between y and z. That is, y < x < z or z < x < y.
*/

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    std::cout << "Welcome to the Relational Operator Challenge." << std::endl;
    std::cout << "It would be amuse if you could help me with with it. Are you in ?" << std::endl;

    signed int a, b, c;

    std::cout << "If the answer is yes, please type an integer value: " ;
    std::cin >> a;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "Alright, you're in! Type another: ";
    std::cin >> b;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "I appreciate this. Type the last one: ";
    std::cin >> c;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << std::endl;

    if(((a < b) && (a > c)) || ((a > b) && (a < c))){
        std::cout << "The first number you type is, on the integer line, between the other two." << std::endl;  
    }

    std::cout << "Thanks for the help!" << std::endl;

    return 0;
}
