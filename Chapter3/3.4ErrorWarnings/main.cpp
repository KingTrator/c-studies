#include <iostream>

int main(){
    //Compile time error (before I removed ";" before "return")
    std::cout << "Hello, World!" << std::endl;
    7/0; // Run time error - compilation succed, but the division is not possible. 
    // May bring fatal errors.

    // Run time error
    int value = 7/0;
    std::cout << "value: " << value << std::endl;
    // Compilation occurs, but you will not get the print of int variable.
    return 0;
}
// This run time error are errors I already met while studying Python.
// Python is better here once it would not allow the programm to execute with an error like "7/0".
/* RESUME:
1. This programm does runs, but not like it should run, by run time errors.
Syntactic errors do not allow compilation, compile error.
*/