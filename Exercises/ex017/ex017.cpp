#include <iostream>
#include <clocale>
#include <format>
#include <ctime>
#include <cstdlib> // compability importation (to use rand)
using namespace std; // Allows to use std methods without annoucing "std::" every time. 

// For all of the exercises I'm going to build, using "using namespace std;" will make things quicker.

int main(){
    setlocale(LC_ALL, "C.UTF-8");  // No need to use std:: now.

    int my_number {1};

    std::cout << "I don't need to use std now, because I'm using the instruction: 'using namespace std;' " <<
    std::endl; // But you still can use std::
    cout << "For example, in this line, I did not used 'std::cout << text' " << endl;

    int user_number {};
    cout << "Please, type a number: " << endl;
    cin >> user_number;
    cin.ignore();
    cout << endl;

    srand(time(0));
    int computer_number {rand()};

    cout << "You typed: " << format("{:>30}", user_number) << "which is succeeced by: " << user_number + 1 <<
    " and preced by: " << user_number - 1 << endl;
    cout << "I choosed: " << my_number << endl;
    cout << "Computer (based on current data and time) choosed: " << computer_number << endl;

    if (my_number == user_number){
        for(int c=1; c<=3; c++){
            cout << endl;
        }
        cout << "-------------------------------------------------------------" << endl;
        cout << "We choosed the same number." << endl;
    }else {
        for(int c=1; c<=3; c++){
            cout << endl;
        }
        cout << "-------------------------------------------------------------" << endl;
        cout << "We did not choosed the same number." << endl;
    }

    return 0;
}
