#include <iostream>
#include <clocale>

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    bool isTrue = true;
    bool isFalse = false;

    if (isTrue && !isFalse){
        std::cout <<"Both operations are true: True is true and is true that false is false." << std::endl;
    }

    // Conversion to integer
    int isTrueInteger = isTrue; // outputs 0
    int isFalseInteger = isFalse; // outputs 1

    std::cout << "True as int: " << isTrueInteger << std::endl;
    std::cout << "False as int: " << isFalseInteger << std::endl;

    // Memory Size
    std::cout << "Usually, bool ocuppies: " << sizeof(bool) << " byte." << std::endl;

    // Change 0 and 1 to true and false at std

    std::cout << std::boolalpha;
    std::cout << isTrue << std::endl;
    std::cout << isFalse;

    return 0;
}
