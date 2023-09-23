#include <iostream>

int main(){
    /*
    1. Literals can't be reassign, they're immutable.
    2. Literals are not saved in the memory, they're only at binary code.
    3. Variables can save the data of a literal in the memory RAM when the programm runs.
    4. Variable = '1u', '1' is the literal, 'u' is the literal type (unsigned). 
    5. Main types: 
    5.1 Integer Literals
    5.2 Floating-point literals
    5.3 String literals
    5.4 Boolean literals
    5.5 Pointer Literals (C++11 onward)
    5.6 User-defined literals (c++11 onward)
    5.7 Raw string literals (C++11 onward) - like the "r" strings of Python.
    Note: some literals may have subtypes, like long integer and unsigned integer. */

    // Few examples

    unsigned char unsigned_char {255u}; // if the value is higher than u char limited 
    // (255) the compilation will file (thanks to the curly brackets). 
    short short_Var {-32768}; // No special literal for short type

    unsigned int prize {1'500'00'0u}; // these apostrophe have no meaning in the code, they simply make the code more readable for humans.

    std::cout << "unsigned int prize {1'500'00'0u'} = " << prize << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Literals can be in the binary code without going to the RAM memory, std::cout messages are examples of it, which means this message is an example and also: " << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "if(a ==100) (100 is used directly, without storage), int result = 5 * 10. (5 and 10 are not stored, only the result). " << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "IMPORTANT: sometimes, is extremely important that you especify the literal type. For example, if you iniatilize a variable like 'float a {1.5}', this is going to be a double, not a float. " << std::endl;
    std::cout << "To avoid this transformation of data, you must be explicit: 'float a {1.5f} " << std::endl;

    return 0;
}
