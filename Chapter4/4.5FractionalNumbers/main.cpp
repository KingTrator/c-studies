#include <iostream>
#include <clocale>
#include <iomanip>  // Allow to use std::setprecision();
#include <ios>      // Allow to use std::streamsize variable {std::cout.precision()} to redifine precision


int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    std::cout << "Currently, dividing 0/0, positive/0 or negative/0 results in a runtime error, the"
    " programm simply does not run. But it was " << '\n' << "suppossed to bring some interesting results" << "0/0 would bring NaN. Positive/0 = inf and Negative/0 = -Inf." << std::endl;

    float number1 {1.12345678901234567890f}; // f sufix defines float
    double number2 {1.12345678901234567890};
    long double number3 {1.1234567890123456789L}; // L sufix define Long Double, which, sometimes, is the same as double

    std::streamsize ss {std::cout.precision()};
    std::cout << "Initial precision = " << ss << std::endl;


    std::cout << "Sizeof float: " << sizeof(float) << "bytes." << std::endl;
    std::cout << "Sizeof double: " << sizeof(double) << "bytes." << std::endl;
    std::cout << "Sizeof long double: " << sizeof(long double) << "bytes."<< std::endl;

    std::cout << std::setprecision(20); // controls the precision from std::cout
    std::cout << "Number1 is: " << number1 << std::endl;
    std::cout << "Number2 is: " << number2 << std::endl;
    std::cout << "Number3 is: " << number3 << std::endl;

    std::cout << "The accurate number was 1.1234567890123456789, as you can see, float and double couldn't deal with the full number and started to throw garbage." << std::endl;

    // getting back to the default precision
    std::cout << std::setprecision(ss);
    float value {1234.095949f};
    std::cout << "Back to default precision, if you try to show a float like 1234.095949, you'll "
                 " only be able to show 7 digits without a setprecision: " << value << std::endl;

    return 0;
}

// I can't change the setprecision I have just defined. I'll try to correct that later.
