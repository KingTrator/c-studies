#include <iostream>
#include <clocale>
#include <string>
#include <format>

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    std::string name {};
    std::cout << "Hello! Please, type your name: ";
    std::cin >> name;  // if you want full name, use std::getline()
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "Alright. Type your age: ";
    int age{};
    std::cin >> age;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "So, you're " << std::format("{:>10}", name) << " and you're: " << std::format("{:0>}", age) << " years old." << std::endl;
    
    return 0;
}
