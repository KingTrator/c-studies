#include <iostream>
#include <clocale>
#include <string>  // library to use string type.

int main(){
    setlocale(LC_ALL, "en_US.UTF-8"); 
    std::cout << "Hello! This is the client section. Please tell me your name: " << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << name << ", it's a pleasure to met you. How old are you? " << std::endl;
    int age;
    std::cin >> age;
    std::cout << "Ok, " << name << ", you're " << age << " years old.";
    return 0;
}

// Certainly, it's way harder to wrote this code in C++ than it's in Python.
// Example, my "input" only accepts one name, without whitespace. Very awesome.
