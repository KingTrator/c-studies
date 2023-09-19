#include <iostream>
#include <clocale>
#include <locale>
#include <codecvt>
#include <format>
#include <string>

// This code is not working. I have no idea why.

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


int main(){
    if (setUTF8Locale()){
        std::wcout << L"UTF-8 locale set successfully! Áéíóúã@*&" << std::endl;
    } else {
        std::wcout << L"Failed to set UTF-8 locale " << std::endl;
    }
    std::wcout << std::flush;
    std::wcout.flush();
    std::wcout << L"Is this working? " << std::endl;

/*

    std::wstring name{};
    std::wstring lname{};
    int age{};
    bool student{};
    int metric {20};

    std::wcout << L"Type your first name: ";
    std::wcin >> name;
    std::wcin.ignore();
    std::wcout << std::endl;

    std::wcout << L"Ok! Type your last name: ";
    std::wcin >> lname;
    std::wcin.ignore();
    std::wcout << std::endl;

    std::wcout << L"Age: " << std::endl;
    std::wcin >> age;
    std::wcin.ignore();
    std::wcout << std::endl;

    std::wcout << L"Type 1 if you're a student, 0 if you're not: ";
    std::wcout << std::flush;
    std::wcin >> student;
    std::wcin.ignore();
    std::wcout << std::endl;

    std::wcout << std::boolalpha << std::left << std::endl;

    std::wcout << L"-------------------------------" << std::endl;

*/
    return 0;
}

// OBS: "wcout" is cout for UTF-8, w = wide.
// While you're using "wide" types, everything must be "wide", like "wstring" instead of just "string".
