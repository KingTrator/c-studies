#include <iostream>
#include <clocale>
int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    // Logical operators "&&"" (and) "||"" (ou) like Python. "!" (not)
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    std::cout << std::endl;

    std::cout << "So, we can conclude: " << std::endl;
    std::cout << "a && b = " << (a && b) << std::endl;
    std::cout << "a && c " << (a && c ) << std::endl;
    std::cout << "b && c " << (b && c) << std::endl;
    std::cout << "a && b && c " << (a && b && c) << std::endl;

    std::cout << std::endl;
    
    std::cout << "So, of course: " << std::endl;
    std::cout << "a || b " << (a || b) << std::endl;
    std::cout << "a || c " << (a || c ) << std::endl;
    std::cout << "b || c " << (b || c) << std::endl;
    std::cout << "a || b || c " << (a || b || c) << std::endl;

    std::cout << std::endl;

    std::cout << "Finally, is it true that: " << std::endl;
    std::cout << "!a " << !a << std::endl;
    std::cout << "!b " << !b << std::endl;
    std::cout << "!c " << !c << std::endl;

    // combinations
    std::cout << std::endl;

    std::cout << "Then, we could invert everything: " << std::endl;
    std::cout << "(a && b) = " << (a && b) << " but !(a && b) " << !(a && b) << std::endl;

    // Examples

    int d {45};
    int e {20};
    int f {11};
    
    std::cout << std::endl;
    std::cout << "Relational and logic operations on integers" << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;

    std::cout << "So, we can afirm that: " << std::endl;
    std::cout << "((d > e) && (e > f) && (a)) = " << ((d > e) && (e > f) && (a)) << std::endl;
    std::cout << "!((d > e) && (e > f) && (a)) = " << !((d > e) && (e > f) && (a)) << std::endl;
    
    std::cout << std::endl;

    return 0;
}
