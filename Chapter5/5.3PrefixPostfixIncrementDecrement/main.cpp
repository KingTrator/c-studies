#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    // Postfix increment (returns first, increment after)
    int value {5};
    signed int value2 {-2};
    std::cout << "The value is: " << value++ << std::endl;
    std::cout << "But the increment came only now: " << value << std::endl;
    std::cout << "The value is: " << value2-- << std::endl;
    std::cout << "But its decrement came only now: " << value2 << std::endl;

    // Prefix increment (increment and returns at once)
    std::cout << "The value is: " << ++value << " already incremented." << std::endl;
    std::cout << "The value is: " << --value2 << " already decremented" << std::endl;

    return 0;
}
