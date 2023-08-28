#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
    return 0;
}
