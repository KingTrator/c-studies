#include <iostream>
#include <string>

int main(){
    // Printing Data
    std::cout << "Hello C++20 " << std::endl;

    int agel{21};
    std::cout << "Age: " << agel << std::endl;
    std::cerr << "Error message: Something is wrong!" << std::endl;
    std::clog << "Log message: another example!" << std::endl;

    int age;
    std::string name;

    /* std::cout << "Please type (first) your name and (then) your age:" << std::endl;
    std::cin >> name >> age; */
    // You can put "name, age1" in a "cin" in one line or two lines if you want.
    // std::cin >> name;
    // std::cin >> age;
    // But here, you can't write strings with whitespaces.
    // to correct it, use "getline"
    std::cout << "Please type (first) your name and (then) your age:" << std::endl;
    std::getline(std::cin, name);
    std::cin >> age;
    std::cout << "Hello " << name << " you are "    // "\n" example...
              << age << " years old." << std::endl; // ...it's okay to do breaks like this.
    return 0;
}

/* Resume:
std::cerr and std::clog do, visually, the same thing std::cout does (print at the console).
But they are used for different purposes and have different characteristics:
1. std::cerr --> Used while testing and debugging the program, once a RunTime Error is detected
(like an item searched beyond an array limit, division by 0, etc.), it prints the problem at the console 
with proper error treatment assigned.
Also, it's called unbuffered, which means it's not temporarily stored at any place before being shown at the console log.
That's important because that process guarantees the error message will be shown even if the program closes after it.
Common use: directly in the back-end.

2. std::clog --> Used to print errors at the console, but it's buffered. That's important because std::clog is used to store error
messages from the front-end - after the initial testing and debugging -, which allows the programmer to correct post-error events, not detected at first.
Common use: directly in the front-end.

Note:
I recently discovered that "<<" (the inserter) indicates the flow of information. So, for "std::cout << X << Y << Z", X, Y and Z are going to be send to std::cout, that's why the 
flow indicator points to it, and that's why ">>" (the extractor) indicates that something is going from the script to the user/console.
Note:
The reason that I can break a code lin in various others is because the semicolon 
is the end of instruction, so, if there is a semicolon, it's not a problem if there is few lines.
Note:
*/
