#include <iostream>
#include <typeinfo> // allows type verification

/*
Conversions are made by the compiler. They're always done from the smallest to the largest type.
Example: short int (2b) --> int (4b) -->  (8b)long int ---> ... long double (float) (16b)
*/

int main(){

    double price {45.6};
    int units {10};

    auto total_price = price * units;

    std::cout << " double price {45. 6}; int units {10}; auto total_price = price * units;" << "total_price == " << total_price << std::endl;
    std::cout << "size of total_price == " << sizeof(total_price) << " bytes." << std::endl;
    std::cout << "That means total_price was converted to " << typeid(total_price).name() << std::endl;

    int x;
    double y {45.44};
    x = y; // double converted to integer.
    std::cout << "int x; double y {45.44}; x = y; then x == " << x << std::endl;
    std::cout << "sizeof(x) == " << sizeof(x) << std::endl;
    std::cout << "typeid(x).name == " << typeid(x).name() << std::endl;

    return 0;
}
