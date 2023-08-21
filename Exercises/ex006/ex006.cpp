#include <iostream>
#include <clocale>
#include <format> 
#include <string>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
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

    std::cout << "Alright, this is all  data formated: " << std::endl;
    std::string enfeite {std::string(10, '=')};
    std::cout << enfeite << std::endl;
    std::cout << "NAME" << std::format("{:>20}", "AGE") << std::endl;
    std::cout << name_1 << std::format("{:>20}", age_1) << std::endl;
    std::cout << name_2 << std::format("{:>20}", age_2) << std::endl;
    return 0;
}

/*
NOTES:
Here I am using std::cin.ignore() for the first time.
The reason I needed it, is that "std::cin" only captures the numbers that the user typed. But when the user presses "Enter" they also sends "\n". 
That "\n" will be left at the input buffer and may be read by whatever comes after, in this case, std::getline(std::cin, variable).
Here, it's also important to note that the input buffer is different from output buffer, otherwise the std::endl; 
that came first would have dealt with the "extra" "\n" we discussed.
*/
// UTF-8 is not working. I'll try to fixed it in the next exercises.