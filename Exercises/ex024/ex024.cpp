#include <iostream>
#include <clocale>
#include <locale>
#include <codecvt>
#include <iomanip>
#include <string>

// I'll have to learn better this function ChatGPT provide to always set utf-8 as main codification. For now, I'll let it like that.
#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif

bool setUTF8Locale() {
    #if defined(_WIN32) || defined(_WIN64)
        // Windows-specific code
        SetConsoleOutputCP(CP_UTF8);
        // Use a UTF-8 codecvt facet
        std::locale utf8_locale(std::locale(), new std::codecvt_utf8<wchar_t>());
        std::wcout.imbue(utf8_locale);
        return true;
    #elif defined(__linux__)
        // Linux-specific code
        if (setlocale(LC_ALL, "en_US.utf8")) {
            return true;
        } else if (setlocale(LC_ALL, "C.UTF-8")) {
            return true;
        } else {
            return false;
        }
    #elif defined(__APPLE__) && defined(__MACH__)
        // MacOS-specific code
        if (setlocale(LC_ALL, "en_US.UTF-8")) {
            return true;
        } else {
            return false;
        }
    #else
        // Other platforms
        return false;
    #endif
}

// Exercise
/*
    (only ASCII inputs)
    Displaying Personal Information

1.  Prompt the user to enter their first name, last name, age, and a boolean indicating if they're a student (true/false).
2.  Display the information in a formatted table using setw(), left, and boolalpha.
*/


int main(){
    if (setUTF8Locale()){
        std::wcout << L"UTF-8 locale set successfully! Áéíóúã@*&" << std::endl;
    } else {
        std::wcout << L"Failed to set UTF-8 locale " << std::endl;
    }

    std::string name{};


    std::cout << "Hello! Welcome to the Display Personal Information formatted." << std::endl;
    std::cout << "To proceed, type your first name: ";
    std::cin >> name;
    std::cin.ignore();
    std::cout << std::endl;

    std::string last_name{};

    std::cout << "Got it! What's your last name? ";
    std::cin >> last_name;
    std::cin.ignore();
    std::cout << std::endl;

    int age{};

    std::cout << "Alright. What's your age? ";
    std::cin >> age;
    std::cin.ignore();
    std::cout << std::endl;

    bool student{};

    std::cout << "Almost done! Are you a student? Type 1 if you're, 0 if you're not. ";
    std::cin >> student;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    int metric {15};

    std::cout << "ALRIGHT, LET'S GET THIS SHOW STARTED!!!" << std::endl;
    std::cout << std::endl;
    std::cout << std::right;
    std::cout << std::setw(metric)<< "Table of informations" << std::endl;
    std::cout << std::setw(metric) << "NAME" << std::setw(metric) << "LAST NAME" << std::setw(metric) << "AGE"
              << std::setw(metric) << "STUDENT" << std::endl;
    std::cout << std::setw(metric) << name << std::setw(metric) << last_name << std::setw(metric) << age << std::setw(metric) << student << std::endl;

    return 0;
}
