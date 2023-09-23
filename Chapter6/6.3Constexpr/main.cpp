#include <iostream>

constexpr float e {2.718f};
static_assert(e == 2.718f, "Value of e is not 2.718"); // If false, this message will be printed as compile error.

int main(){
    std::cout << "If you're seeing this message, this is because static_assert(e == 2.718f) returned true." << std::endl;
    std::cout << " _________________________ " << std::endl;
    //Every constexpr is const, but a const is not necessarily a constexpr.
    // Constexpr determines that the operation will be done at compile time. Therefore, a function can be called multiple times only at the compile time
    // This relieves the user's CPUs of some heavy operations, done by the developer during compile time.

    constexpr int eye_count {2}; // const and constexpr
    const double pi {3.14}; // only const
    // you can't do a compile time assignment with a run time variable being assign to a compile time variable, ex: int a {2} then constexpr b{a};

    // you can check a value at compile time with static_assert, if the value is what you try to verify, it's ok. If not, compile error.
    std::cout << "Constexpr implies const. Functions, pointers, variables, can be constexpr." << std::endl;
    std::cout << "They relieves the user's CPU from some operations, done by the devolper during compile time. " << std::endl;
    std::cout << "Here's a constexpr operation: constexpr int eye_cout {2} x const double pi {3.14} == " << eye_count * pi << std::endl;

    return 0;
}
