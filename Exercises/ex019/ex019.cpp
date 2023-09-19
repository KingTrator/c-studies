#include <iostream>
#include <clocale>

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    float n1 {};
    float n2 {};
        
    std::cout << "Hello. Type a number: ";
    std::cin >> n1;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "Type other number: ";
    std::cin >> n2;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "So, we have " << n1 << " < " << n2 << " that is: " << (n1 < n2) << std::endl;
    std::cout << "So, " << n1 << " > " << n2 << " is " << (n1 > n2) << std::endl;
    std::cout << "We also can say that: " << n1 << " = " << n2 << " is " << (n1 == n2) << std::endl;
    std::cout << "Which means, of course, that: " << n1 << " != " << n2 << " is " << (n1 != n2) << std::endl;


    return 0;
}
