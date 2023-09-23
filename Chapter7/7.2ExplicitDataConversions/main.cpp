#include <iostream>

/*
static_cast converts one type to another.
*/

int main(){
    double x {12.5};
    double y {42.9};

    int sum;

    // Explicit conversion
    sum = static_cast<int> (x + y);
    std::cout << "x == " << x << " | " << "y == " << y << std::endl;
    std::cout << "static_cast<int>(x + y) == " << sum << std::endl;
    sum = static_cast<int>(x) + static_cast<int>(y); 
    std::cout << "static_cast<int>(x) + static_cast(y) == " << sum << std::endl;
    std::cout << "As you can, static_cast<int> does not change the original type of the variable, only it's literal" << std::endl;

    // Older methods (not safe, but you may face them in old C++ versions)

    double PI {3.14};
    int int_pi = (int)(PI);
    std::cout << "double PI {3.14}; int int_pi = (int)(PI) == " << int_pi << std::endl;
    std::cout << "YOU SHOULD NOT USE OLD CONVERSIONS LIKE THIS! ALWAYS RATHER static_cast<type> than older conversion." << std::endl;
    // This older conversions is less secure because it allows conversions that shouldn't be allowed, while static_cast would give a compile-error.


    return 0;
}
