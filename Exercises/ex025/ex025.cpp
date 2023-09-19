#include <iostream>
#include <clocale>
#include <locale>
#include <codecvt>
#include <iomanip>

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
    Medium: Currency Converter

1.  Prompt the user to enter an amount in USD.
2.  Convert this amount to EUR, GBP, and JPY. (You can choose the values for each one)
3.  Display the original amount and the converted amounts in a table format. Use fixed, setprecision(2), and right to format the currency values.
*/

int main(){
    if (setUTF8Locale()){
        std::wcout << L"UTF-8 locale set successfully! Áéíóúã@*&" << std::endl;
    } else {
        std::wcout << L"Failed to set UTF-8 locale " << std::endl;
    }
    int metric {10};
    float value {};

    std::cout << "Hello! This is the Currency Converter. Type an USD value, I'll convert it to EUR, GBP and JPY" << std::endl;
    std::cin >> value;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "ALRIGHT, LET'S GET THIS SHOW STARTED!" << std::endl;
    std::cout << std::endl;

    /* Currently:
    1 USD = 0,94 EUR; 0,81 GBP; 147,73 JPY
    */

    std::cout << std::setw(20) << "Values" << std::endl;
    std::cout << std::right << std::fixed << std::setprecision(2);
    std::cout << "USD" << std::setw(metric) << "EUR" << std::setw(metric) <<
                 "GBP" << std::setw(metric) << "JPY" << std::endl;
    std::cout << value << std::setw(metric) << value * 0.94 << std::setw(metric) <<
                 value * 0.81  << std::setw(metric) << value * 147.73 << std::endl;

    return 0;
}
