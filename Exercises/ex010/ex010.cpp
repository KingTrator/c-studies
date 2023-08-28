#include <iostream>
#include <clocale>

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");

    std::cout << "Welcome to Rent-a-Car. If you want to know how much you're going to spend "
                 "please inform us how many KM " << '\n' << "do you intend to run and for how many days. " << std::endl;

    float km {};
    int days {};
    float angular_value {2.45};
    int x_zero {100};

    std::cout << "How many KM? ";
    std::cin >> km;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "Of course! And how many days? ";
    std::cin >> days;
    std::cin.ignore(); // always good to remember that cin.ignore "deletes" the "\n" typed by the user.
    std::cout << std::endl;

    std::cout << "Alright, for " << km << "KM in " << days << " days, you'll spend: R$" << 
    (km * angular_value) + (x_zero * days) << std::endl;
    std::cout << "Hope it helps you! If you have any doubts, please contact us." << std::endl;


    return 0;
}