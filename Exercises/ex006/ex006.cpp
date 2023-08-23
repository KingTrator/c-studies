#include <iostream>
#include <clocale>
#include <format> 
#include <string>
#include <algorithm> // Enable function std::max

int main(){
    setlocale(LC_ALL, "C.UTF-8"); 
    std::cout << "Hello! This is a simple temporary name and age allocator. Please, digit two names and two ages to see them formated printed at the console." << std::endl;

    std::string name_1{"Empty"};
    std::string name_2{"Empty"};
    int age_1{};
    int age_2{};

    std::cout << "First name: " << std::endl;
    std::getline(std::cin, name_1);
    std::cout << "For " << name_1 << " what's the age? " << std::endl;
    std::cin >> age_1;
    std::cin.ignore();  // Important
    std::cout << std::endl;

    std::cout << "Ok! Second name: " << std::endl;
    std::getline(std::cin, name_2);
    std::cout << std::endl;
    std::cout << "For " << name_2 << " what's the age? " << std::endl;
    std::cin >> age_2;
    std::cin.ignore();
    std::cout << std::endl;

    int max_name_length = std::max(4, std::max(static_cast<int>(name_1.length()), static_cast<int>(name_2.length())));

    std::cout << "Alright, this is all  data formated: " << std::endl;
    std::string enfeite {std::string(50, '=')};
    std::cout << enfeite << std::endl;
    std::cout << "NAME" << std::string(max_name_length - 3, ' ')<< "AGE" << std::endl; // ' ' != de " "
    std::cout << name_1 << std::string(max_name_length - name_1.length() + 1, ' ') << age_1 << std::endl;
    std::cout << name_2 << std::string(max_name_length - name_2.length() + 1, ' ') << age_2 << std::endl;
    return 0;
}
/*
OBS: std::string(int, char) --> accepts int and char. (That's why you can't use " ").

IMPORTANT: Difference between ' ' and " ". ' ' is used to represent a literal caracter, while " " is used for strings.
' ' type is char, while " " type is const char. ' ' usually demands only one byte, while strings may use more bytes. 
' ' minimum minimum and maximium size is 1. " " always have '\0' (nule caracter), so even for '1' we have 2 caracteres.

NOTES:
The function "max" does the same as max() does at Python.
Here I am using std::cin.ignore() for the first time.
The reason I needed it, is that "std::cin" only captures the numbers that the user typed. But when the user presses "Enter" they also sends "\n". 
That "\n" will be left at the input buffer and may be read by whatever comes after, in this case, std::getline(std::cin, variable).
Here, it's also important to note that the input buffer is different from output buffer, otherwise the std::endl; 
that came first would have dealt with the "extra" "\n" we discussed.
*/
// UTF-8 is not working. I'll try to fixed it in the next exercises.
