#include <iostream>
#include <clocale>
#include <ctime> // allows to use time(0) for system current time
// #include <cstdlib> // rand and srand are at cstdlib header, here, it seems that iostream already include it.
// though, it's a good practice to use it for portability. No need for my studies.

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    std::srand(std::time(0)); // Rand function seed
    for(int c=1; c<=20; c++){
        int value {std::rand()}; // Rand function, randomize a number based on the seed
        std::cout << value << std::endl;
    }
    return 0;
    // Once again, I'm using loops before learn them in the course, simply because Javascript and C++
    // have close language.
}
// Rand here is close to randint from Python, but I can't specify the values directly.
// Also, it seems that the numbers are generate online on compile time, not in the runtime.
/*
I discover what happend. For rand function, I must use a seed for the function that "randomize" the numbers.
Without specifing one, which means, without using the "std::srand(std::time(0));", I only receive the same numbers over and over again.
But with a seed such as the system current time "time(0)", for every runtime, I receive new results.
*/