#include <iostream>
#include <clocale>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8"); 
    std::cout << "Olá! Esta é a minha primeira calculadora em C++" << std::endl;
    int number_1;
    int number_2;
    std::cout << "Digite um número: ";
    std::cin >> number_1;
    std::cout << "Certo! Digite outro número: ";
    std::cin >> number_2;
    int sum = number_1 + number_2;
    std::cout << "A soma entre os números digitados é: " << sum << std::endl;
    return 0;
}
