#include <iostream>

// constinit is C++20 onward.
/* RESUME
1. 'constinit' is mutable (!= of constexpr)
2. 'constinit' is compile-time initialized (!= const)
3. You can combine 'constinit' with 'const'. That means that the value will be initialized at compile time and in the run time will become immutable.
4. You can't combine 'constinit' with 'constexpr'. There's a few reasons for it:
4.1 Scope: some C++ tools may be restricted to "constexpr" or "constinit".
4.2 Purpose: "constexpr" guarantees that a data is immutable at compile-time, while "constexpr" does not guarantes it (that's also the difference between "constexpr" to 
"constinit const")
4.3 There's a few more reasons.
*/

constinit const float pi = 3.14f;
// static_assert(pi == 3.14f, "pi != 3.14"); can't evaluate a constinit at compile time
constexpr float euler = 2.718f;
static_assert(euler == 2.718f, "euler != 2.718");

const int val1 {33};
constexpr int val2{34};
int val3 {35}; // run time value

constinit int age1 = 88; // initialzed at compile time
const constinit int age2  {val1}; // const and constinit can be combined
constinit int age3 {age2}; // you can only initialize a constinit variable with a const && constinit variable



int main(){

    std::cout << "Constinit are used to guarantee that global variales are initialized during the runtime. " << std::endl;
    std::cout << std::endl;
    std::cout << "That's why you can't combine constexpr with constinit, constinit are meant to be used during run time. But you can combined constinit with const. " << std::endl;
    std::cout << std::endl;
    std::cout << "Constinit types can't be used inside the main function, because they have a global scope. " << std::endl;

    return 0;
}
