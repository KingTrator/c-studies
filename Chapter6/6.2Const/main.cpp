#include <iostream>

int main(){

    std::cout << " 'const' variable in C++ are just like Javascript const type, they're immutable and if you try to change them, you'll receive an error. " << std::endl;
    std::cout << "The CPU, of course, does not understand that. So, 'const' protection are at the compile time." << std::endl;
    std::cout << std::endl;
    std::cout << "Also, you must iniatialize a const, so you can't just declare it, or you'll receive an error." << std::endl;
    const float pi {3.14f};
    std::cout << "This is a const example, pi == " << pi << std::endl;
    std::cout << "Using const are usually a good idea. It makes the code consistent, but, of course, you should not use that in variables that are going to change, for example, by increment/decrement. " << std::endl;
    std::cout << "It's also possible to use constants in other computations types. Now, it becomes clear why it's important to know that literals are not saved directly in memory. " << std::endl;
    float result {(pi * 3.0f)};
    std::cout << "For example, 'float result {pi * 3f} ' == " << result << std::endl;

    return 0;
}
