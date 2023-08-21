#include <iostream> // Load pre-boot libraries, like print to the console log.

int main(){ // The main function, that's where the code starts.
    std::cout << "Number1" << std::endl;
    std::cout << "Number2" << std::endl;
    std::cout << "Number3" << std::endl; 
    std::cout << "Hello, World!" << std::endl;
}

/* std and endl are provided by the iostream library. */
/* The function "main()" is defined as an "int" by convention.
That's why you see "0" (the pattern is to use return 0 at the very end) if the program finishes successfully or "-1" if it fails. */
/* std (standard) --> It's like the libraries "time" or "os" in Python. It's a basic library. If you have imported "time," you could use the method sleep like this: "time.sleep(n)." In C++, we say std::Something_here_from_iostream. */
/* endl (end line) --> Inserts a line break, similar to the "end" attribute of Python's print function. It can be used with any other object of "output stream," not only "cout" like here.
It also clears the output buffer. */
// Buffer: temporary data storage for data while it's being transferred.
// The buffer is useful because it allows the program to collect a sufficient amount of data before sending it, instead of sending small pieces of data immediately.
