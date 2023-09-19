#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    // For higher increment/decrement or other operations, we have to be more direct.

    int value {45};

    std::cout << "The value is: " << value << std::endl;

    value += 5;
    std::cout << "Incremented by 5 (value += 5) " << value << std::endl;
    value %= 5;
    std::cout << "Using %= as value %= 5, we got: " << value << std::endl;

    // It goes on for /=, -= and *=.

    return 0;
}
