#include <iostream>
// In C++, even functions must be declared as a type, like "int"
int addNumbers(int number_1, int number_2){
    int sum = number_1 + number_2; // All variable must be declared as a type too.
    return sum; // the type of function matches what it's returns, in this case, an int type.
}


int main(){
    std::cout << "The sum of 20 plus 10 is: " << addNumbers(20, 10) << std::endl;
    std::cout << "I also can show the sum of two variables declared in the main function." << std::endl;
    int first_number {1}; // Statement
    int second_number {7};
    int sum = first_number + second_number; // You don't have (and can't) redeclare variables (like first_number)
    std::cout << "The first number is: " << first_number << ". The second number is: " << second_number << ", and their sum is equal to: " << sum << "." << std::endl;
    return 0;
}


//A statement is the minor possible instruction in C++.
// A statement ends with semicolon ";"
// You can have a block of statements like this:
/*
{
    int y = x *2;
    std::cout << y;
}
*/
// I already know what a function is.