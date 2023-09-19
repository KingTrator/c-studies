#include <iostream>
#include <limits>

int main(){

    /*
    The limits we're talking here is the maxium and minium values that different types of numbers can assume.
    For floating:
    lowest => min. negative value
    min => min. positive value
    max => max. positive value
    For integers:
    min => min. value.
    max => max. value.
    */
   std::cout << "The min short (int) is from " << std::numeric_limits<short>::min() << std::endl << "The min long (int) is " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "The maxshort (int) is " << std::numeric_limits<short>::max() << std::endl << "The max long (int) is " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "For float, we have 3 types of measure: min, lowest and max." << std::endl;
    std::cout << "The min float is " << std::numeric_limits<float>::min() << std::endl << "The max float is " << std::numeric_limits<float>::max() << std::endl << 
    "The lowest float is  to " << std::numeric_limits<float>::lowest();

    /*
        Extra
    std::numeric_limits<int>::is_signed verifies if the number is signed or not.
    std::numeric_limits<int>::digits shows how many digits you can represent with an integer type.
    You can learn more at cppreference.com std::numeric_limits
    */

    return 0;
}
