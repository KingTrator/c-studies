#include <iostream>
#include <clocale>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8"); 
    std::cout << "Hello World!" << std::endl;
    std::cout <<"After a long time, my first (made byself) Hello World in C++." << std::endl;
    std::cout <<"Because I don't have as much time to C++ that I had to Python, this first Hello World really took some time before showing up!" << std::endl;
    std::cout <<"But it's still very exciting :)";
    return 0;
}
// Practing, I note that I only have to use "<<" once for each insert.
