#include <iostream>

// "To compensate" the last lectures that I just passed trough, I did this all by myself.

int main(){

    // IMPORTANT: switch statemnt ONLY WORKS 
    // with 'int', 'char' and 'enum' or types like these.

    // Normal switch use
    int expression;

    std::cout << "Please, type an expression (integer) to test switch statement. " << std::endl;
    std::cout << "expression: ";
    std::cin >> expression;
    std::cin.ignore();
    std::cout << std::endl << std::endl;
    
    switch(expression){
        case 1: 
            std::cout << "expression == 1" << std::endl;
            break;
        case 4: 
            std::cout << "expression == 4" << std::endl;
            break;
        default:
            std::cout << "(expression != 1) && (expression != 4)";
    }

    std::cout << std::endl << std::endl;
    const int MONDAY {1};
    const int TUESDAY {2};
    int day;

    // More descritive switch use

    std::cout << "Ok, if you want monday message, type 1, if you want tuesday, type 2" << std::endl;
    std::cout << "day: " << std::endl;
    std::cin >> day;
    std::cin.ignore();
    std::cout << std::endl; 

    switch(day){
        case MONDAY:
            std::cout << "Today is MONDAY." << std::endl;
            break;
        case TUESDAY:
            std::cout << "Today is TUESDAY." << std::endl;
            break;
        default:
            std::cout << "Today is not monday, which is sad, but at least is not tuesday." << std::endl;
    }

    // Nested switch use
    int n;
    int m;

    std::cout << std::endl;
    std::cout << "Alright, we're going to use a nested switch now. Type two integer numbers and see the result. " << std::endl;
    std::cout << "n == " << std::endl;
    std::cin >> n;
    std::cin.ignore();
    std::cout << std::endl;
    std::cout << "m == " << std::endl;
    std::cin >> m;
    std::cin.ignore();
    std::cout << std::endl;

    switch(n){
        case 1:
            std::cout << "n == 1" << std::endl;
            break;
        case 2:
            switch(m){
                case 3: 
                    std::cout << "n == 2, m == 3" << std::endl;
                    break;
                default:
                    std::cout << "n == 2, but m!=3 " << std::endl;
            }
            break; // We still inside a case, case 2, so it's important to break the loop, or the code would
            // try to run any other case below (there's no other cases, but this still a good practice). 
        default:
            std::cout << "You type an original case, where n == " << n << " and m == " << m << std::endl;
            std::cout << "Ok, let's be real, not so original, this code is way too simple. " << std::endl;
    }

}