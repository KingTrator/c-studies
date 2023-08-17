#include <iostream>
#include <clocale>  // importa a função que permite usar caracteres do espectro UTF-8

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");  // Define a língua como en_US com suporte p/ UTF-8
    int numero;
    std::cin >> numero;
    std::cout << "Você digitou o número: " << numero << std::endl;
    return 0;
}
