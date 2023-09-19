#include <iostream>
#include <cmath>

int main(){
    /*
    You can check a few more cmath functions at cppreference.com
    The main are:
    std::log(value), log at base "e" (2.718...).
    std::log10(value)
    std::exp(value), e ^ value
    std::pow(value1, value2), value ^ value2
    std::floor(value) << value will be rounded to the first lowest integer at range.
    std::ceil(value) << value will be rounded to the first highest integer at range.
    std::abs(value) transforms negative values into their positive ones, and do nothing to those already positives.
    std::round() automatizes "ceil" and "floor", "flooring" or "ceiling" the values to their closest integer.
    */

   double weight{17.29};
   double value {-1000};
   std::cout << "17.29 rounded to floor: " << std::floor(weight) << std::endl;
   std::cout << "17.29 rounded to ceil: " << std::ceil(weight) << std::endl;

   std::cout << "Abs of 17.29 is " << std::abs(weight) << std::endl;
   std::cout << "Abs of -1000 is " << std::abs(value) << std::endl;

   float e {2.718281828};
   std::cout << "3 ^ 4  std::pow(3,4) = " << std::pow(3,4) << std::endl;
   std::cout << "e ^ 10 std::exp(10) = " << std::exp(10) << std::endl;
   std::cout << "loge(10) std::log(10) = " << std::log(10) << std::endl;
   std::cout << "log10(e) std::log10(e) = " << std::log10(e) << std::endl;

   std::cout << "___________________" << std::endl;
   std::cout << "3.654 is rounded to: " << std::round(3.654) << std::endl;
   std::cout << "2.5 is rounded to: " << std::round(2.5) << std::endl;
   std::cout << "2.4 is rounded to: " << std::round(2.4) << std::endl;


    return 0;
}
