#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    int number1 {45};
    int number2 {60};

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number1: " << number1 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha; // 1 = False, 0 = True
    std::cout << "number1 < number2" << (number1 < number2) << std::endl; // outputs true. Without bool, outputs 0.

    /*
    The next operators of comparation are just like Python. "<=", "<=", "!=", "==".
    (no "===" like Js. No need at all; static types.)
    */

    return 0;
}
/*
Important:
The reason to use "(number1 < number2)" above is because "<<" has higher precedence than "<"
Check the breakdown below:
1. "<<" is left-to-right, so, when the compiler finds it, it takes a look at the extreme left to check if this operand have precedence
over the previous.
2. The previous one is another "<<". Then, its content is execute first.
3. We have this:
(std::cout << "text_here") <<)
4. After that, the compiler checks what comes after the "<<", to see if it has precedence.
5. It finds "number1". Number1 is a variable, does not have any precedence. So the variable is part of "<<">
6. When the compiler reachs "<", it throws a error. The reason is this:
(std::cout << "text_here" << number1) < number2;
(ostream_object) < int_object
That comparation does not make sense at compiler's eyes.
*/
