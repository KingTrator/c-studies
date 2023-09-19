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

/*
    Hexadecimal and Octal Viewer

1.  Prompt the user to enter an integer.
2.  Display the decimal, hexadecimal, and octal representations of the number in a table format. Use showbase to display the base prefixes.
*/

int main(){
    if (setUTF8Locale()){
        std::wcout << L"UTF-8 locale set successfully! Áéíóúã@*&" << std::endl;
    } else {
        std::wcout << L"Failed to set UTF-8 locale " << std::endl;
    }

    int userInt {};
    int metric {12};
    std::cout << "I'm tired, so, come on, just type an integer: " << std::endl;
    std::cin >> userInt;
    std::cin.ignore();
    std::cout << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::right << std::setw(24) << "VIEWER" << std::endl;
    std::cout << std::showbase << std::left; 
    std::cout << std::setw(metric) << "Decimal" << std::setw(metric) << "OCTAL" << std::setw(metric) << "HEXADECIMAL" << std::endl;
    std::cout << std::setw(metric) << userInt << std::setw(metric) << std::oct << userInt <<  std::setw(metric) << std::hex << userInt << std::endl;

    return 0;
}
