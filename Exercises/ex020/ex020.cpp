#include <iostream>
#include <clocale>

/*
Logical Operator Challenge:
1. Prompt the user to enter three boolean values (either 'true' or 'false')
2. Display the result of the logical expression '(A && B) || (A && C) || (B && C)'
Bonus: Can the user determine a scenario where this expresion returns 'false'?
*/

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    std::cout << "Welcome to the Logical Operator Challenge." << std::endl;
    std::cout << "Please, type three boleans, 'true' or 'false' for each one. Can you match the" 
                " situation where (A && B) || (A && C) || (B && C) == 'false'? " << std::endl;
    std::cout << "Try your best. At the end, I'll tell if you got it! Type 1 to true and 0 to false" << std::endl;

    std::cout << std::endl;


    bool a{};
    bool b{};
    bool c{};

    std::cout << "First boolean: ";
    std::cin >> a;
    std::cin.ignore();
    std::cout << std::endl;
    std::cout << "Ok! Second boolean: ";
    std::cin >> b;
    std::cin.ignore();
    std::cout << std::endl;
    std::cout << "Got it! Third boolean: ";
    std::cin >> c;
    std::cin.ignore();
    std::cout << std::endl;
    std::cout << std::boolalpha;
    
    std::cout << std::endl;

    std::cout << "Alright, you choose: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "So, we got: " << std::endl;
    std::cout << " ((a && b) || (a && c) || (b && c)) = " << ((a && b) || (a && c) || (b && c)) << std::endl;


   if(((a && b) || (a && c) || (b && c)) == false){
    std::cout << "You got the right answer!" << std::endl;
   } else{
    std::cout << "Maybe another time you'll got it." << std::endl;
   }

    return 0;
}
