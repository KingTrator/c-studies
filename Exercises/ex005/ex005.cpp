#include <iostream>
#include <clocale>
#include <format> // Library to use formatting similar to Python

int main(){
    setlocale(LC_ALL, "en_US.UTF-8"); 
    std::cout << "Welcome to the one assignment float calculator" << "\n"; // \n can substitute "std::endl;" but may result in data loss.

    std::cout << "Type the first number: " <<  "\n";
    float number_1;
    std::cin >> number_1;
    std::cout << "You just typed " << number_1 << "." <<"\n";

    std::cout << "Type the second number: " << "\n";
    float number_2;
    std::cin >> number_2;
    std::cout << "You just typed " << number_2 << "." << "\n";

    float result_formated { number_1 / number_2 };
    std::cout << "The operation: " << number_1 << " ÷ " << number_2 << " = " << std::format("{:.3}", result_formated) << std::endl; // "{:.3}" means "2 decimal places."
    std::cout << "Hope you enjoy it! See you next time." << std::endl;
    return 0;
}

