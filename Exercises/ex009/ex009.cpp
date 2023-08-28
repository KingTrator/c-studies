#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    std::cout << "Welcome to Area Calculator. You just need to give us the length and height to get the area"
    " result " << std::endl;
    float height {};
    float length {};
    std::cout << "What's the height? ";
    std::cin >> height;
    std::cin.ignore();
    std::cout << std::endl;
    std::cout << "Got it! What's the length? ";
    std::cin >> length;
    std::cin.ignore();
    std::cout << std::endl;
    std::cout << "Alright! The Area calculate is: " << height << " X " << length << " = " << 
    height * length << std::endl;

    std::cout <<  "Hope you like it!" << std::endl;
    return 0;
}