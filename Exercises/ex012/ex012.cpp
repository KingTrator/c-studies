#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    std::cout << "Tabuada" << std::endl; // I don't how to write "tabuada" in english LMAO;
    std::cout << "You're a monkey and you're having a hard time with tabuada? " << "No problem, monkey friend, just type the number and I'll show the tabuada ;)" << std::endl;

    std::cout << "What is the number? ";
    int number {};
    std::cin >> number;
    std::cin.ignore();
    std::cout << std::endl;

    // I'll do it by the hard way and then with loop. Because loops in Javascript are same to C++, this is not hard time, even in the beginning of the course.

    // Hard way
    std::cout << number << " X " << 1 << " = " << number * 1 << std::endl;
    std::cout << number << " X " << 2 << " = " << number * 2 << std::endl;
    std::cout << number << " X " << 3 << " = " << number * 3 << std::endl;
    std::cout << number << " X " << 4 << " = " << number * 4 << std::endl;
    std::cout << number << " X " << 5 << " = " << number * 5 << std::endl;
    std::cout << number << " X " << 6 << " = " << number * 6 << std::endl;
    std::cout << number << " X " << 7 << " = " << number * 7 << std::endl;
    std::cout << number << " X " << 8 << " = " << number * 8 << std::endl;
    std::cout << number << " X " << 9 << " = " << number * 9 << std::endl;
    std::cout << number << " X " << 10 << " = " << number * 10 << std::endl;

    // Smart way
    std::cout << "Oh, let me, once again, show it, just because you're a monkey (no offense at all): " << std::endl;

    for(int c=1; c<=10; c++){
        std::cout << number << " X " << c << " = " << number * c << std::endl;
    }

    return 0;
}