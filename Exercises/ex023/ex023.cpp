#include <iostream>
#include <clocale>
#include <random>
#include <chrono> // allows to use current computer datetime as a seed.
#include <algorithm>

/*
Complex Logical Expression:

1. Given four integer variables: m, n, o, and p. Initialize them with any values of your choice.
1.1 Write a program that checks the following conditions and displays the results:
2. m is the largest of the four numbers.
3. n is neither the smallest nor the largest.
4. o is either the smallest or the largest.
5. p is not the largest but is greater than o.
*/

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    
    // defines seed
    auto seed {std::chrono::system_clock::now().time_since_epoch().count()};
    std::default_random_engine generator_m(seed + 10000);
    std::default_random_engine generator_n(seed - 9432);
    std::default_random_engine generator_o(seed + 392304093);
    std::default_random_engine generator_p(seed + 1);

    std::uniform_int_distribution<int> distribution(1, 100);
    int m {distribution(generator_m)};
    int n {distribution(generator_n)};
    int o {distribution(generator_o)};
    int p {distribution(generator_p)};


    int maxValue {std::max({m, n, o, p})};
    int minValue {std::min({m, n, o, p})};

    if(maxValue == m){
        std::cout << m << " is the greatest number." << std::endl;
    } else {
        std::cout << m << " is not the greatest number." << std::endl;
    }
    if((maxValue != n) && (minValue != n)){
        std::cout << n << " is neither the greatest nor the smallest number." << std::endl;
    } else{
        std::cout << n << " is the greatest or the smallest number. " << std::endl;
    }
    if((maxValue == o) || (minValue == o)){
        std::cout << o << " is the greatest or the smallest number." << std::endl;
    } else {
        std::cout << o << " is neither the greatest nor the smallest number." << std::endl; 
    }
    if ((maxValue != p) && (p > o)){
        std::cout << p << " is greater than " << o << " but is not the greatest." << std::endl;
    } else {
        std::cout << p << " is the greatest or is smaller than " << o << "." << std::endl;
    }
  
    return 0;
}
