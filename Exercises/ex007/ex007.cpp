#include <iostream>
#include <clocale>
#include <format>
#include <string>


int main(){
    std::cout << "Hello! This is a one sequence formatting calculator" << std::endl;
    std::cout << "To start, choose two floats to sum" << std::endl; 

    std::cout << "First number: " << std::endl;
    float float_1{};
    std::cin >> float_1;
    std::cin.ignore();
    
    std::cout << "Great! Second number: " << std::endl;
    float float_2{};
    std::cin >> float_2;
    std::cin.ignore();

    float sum { float_1 + float_2 };

    std::cout << "Let's make a multiplication operation." << std::endl;
    
    std::cout << "First number: " << std::endl;
    float float_3{};
    std::cin >> float_3; 
    std::cin.ignore();

    std::cout << "Awesome! Second number: " << std::endl;
    float float_4{};
    std::cin >> float_4; 
    std::cin.ignore();

    float multiplication { float_3 * float_4 };

    std::cout << "This one is rare. Let's make a module division." << std::endl;

    std::cout << "First number: " << std::endl;
    int int_1 {1};
    std::cin >> int_1;
    std::cin.ignore();

    std::cout << "Cool! Second number: " << std::endl;
    int int_2 {1};
    std::cin >> int_2;
    std::cin.ignore();

    int rest { int_1 % int_2 };


    // Results
    std::cout << "ALRIGHT! LET'S SEE THE RESULTS! " << std::endl;
    std::string enfeite {std::string(30, '*')};
    std::cout << enfeite << std::endl;
    std::cout << "OPERATION" << std::format("{:>20}", "RESULT") << std::endl;
    std::cout << "SUM" << std::string(6, ' ' ) << std::format((":>20", " ")) << sum << std::endl;
    std::cout << "MULTIPLICATION" << std::format("{:>15}", " ") << multiplication << std::endl;
    std::cout << "MODULE_DIVISION" << std::format("{:>14}", " ") << rest << std::endl;
    std::cout << "Hope you enjoy it!" << "\n";
    
    return 0;
}

// OBS: "**" is not natural for C++ 20. You need a library (cmath) to calculate exponencial operations. 
