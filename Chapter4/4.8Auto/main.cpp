#include <iostream>
#include <clocale>

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    // Auto is used when you don't want to specify the value, which will be determined
    // by the compiler during compile time.
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    //int modifier suffixes
    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long

    std::cout << "Variable_1 = " << var1 << " (Size: " << sizeof(var1) << " bytes)" << std::endl;
    std::cout << "Variable_2 = " << var2 << " (Size: " << sizeof(var2) << " bytes)" << std::endl;
    std::cout << "Variable_3 = " << var3 << " (Size: " << sizeof(var3) << " bytes)" << std::endl;
    std::cout << "Variable_4 = " << var4 << " (Size: " << sizeof(var4) << " bytes)" << std::endl;
    std::cout << "Variable_5 = " << var5 << " (Size: " << sizeof(var5) << " bytes)" << std::endl;
    std::cout << "Variable_6 = " << var6 << " (Size: " << sizeof(var6) << " bytes)" << std::endl;
    std::cout << "Variable_7 = " << var7 << " (Size: " << sizeof(var7) << " bytes)" << std::endl;
    std::cout << "Variable_8 = " << var8 << " (Size: " << sizeof(var8) << " bytes)" << std::endl;


    return 0;
}
/* Note:
1. Auto deduces the variable type, so the type is exactly the same, which means there's no overhead or memory loss associate to it.
2. Auto is great when used inside loops of data structures that are using different type of data.
3. The best reason to avoid overusing is for readability.
*/
