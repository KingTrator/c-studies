#include <iostream>
#include <clocale>
#include <locale>
#include <codecvt>
#include <iomanip> // use only for ASCII
// #include <format> // use for non ASCII and ASCII

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

    std::cout << "This message was immediately send to the terminal." << std::endl << std::flush; 
    // flush sends the data immediately without passing trough the temporary buffer

    // Formatting tables

    //UNFORMATED TABLE
    std::cout << "Unformated table: " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Robson" << " " << "Silva" << " 39" << std::endl;
    std::cout << "José" << " " << "Antônio" << "  44" << std::endl;
    std::cout << "Maria " << " " << "Santos" << " 19" << std::endl;

    std::cout << std::endl;

    //Formated table:
    std::cout << "Formated table: " << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(10) << "25" << std::endl;
    std::cout << std::setw(10) << "Robson" << std::setw(10) << "Silva" << std::setw(10) << "39" << std::endl;
    std::cout << std::setw(10) << "José" << std::setw(10) << "Antônio" << std::setw(10) << "44" << std::endl;
    std::cout << std::setw(10) << "Maria" << std::setw(10) << "Santos" << std::setw(10) << "19" << std::endl;
    std::cout << "Observe that I'm using set(w), which do not allows correct formatting for non ASCII chars "
                 "automatically." << std::endl;

    // set() only affect the next value TO BE PRINTED
    std::cout << std::endl; 

    int value {15};
    std::cout << "Formated table (using a variable within setw(variable_here)): " << std::endl;
    std::cout << std::setw(value) << "First_Name" 
              << std::setw(value) << "Last_Name" 
              << std::setw(value) << "Age" << std::endl;

    std::cout << std::setw(value) << "Daniel" 
              << std::setw(value) << "Gray" 
              << std::setw(value) << "25" << std::endl;

    std::cout << std::setw(value) << "Daiana" 
              << std::setw(value) << "Peroni" 
              << std::setw(value) << "39" << std::endl;

    std::cout << std::setw(value) << "Josep" 
              << std::setw(value) << "Smith" 
              << std::setw(value) << "44" << std::endl;

    std::cout << std::setw(value) << "Maria" 
              << std::setw(value) << "Santos" 
              << std::setw(value) << "19" << std::endl;

    // It's way smarter to set a variable, because you can change all these values at once, instead of changing them one by one.

    std::cout << std::endl;

    // More ways to formatting

    // Internal justified
    std::cout << "Internal justified:" << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    //internal's use is basically that. Useful to compare - and + values.

    std::cout << std::endl; 

    std::cout << std::left;
    std::cout << std::setfill('-'); // fill the (possible) blank spaces with a dash "-".
    std::cout << std::setw(value + 10) << "Last_Name" << std::setw(value + 10) << "First_Name" << std::endl;
    std::cout << std::setw(value + 10) << "George" << std::setw(value + 10) << "Santos" << std::endl;
    std::cout << std::setw(value + 10) << "Gustavo" << std::setw(value + 10) << "Guanabara" << std::endl;
    std::cout << std::setw(value + 10) << "Daniel" << std::setw(value + 10) << "Guakawa" << std::endl;

    // OBS: As I already studied, std::boolalpha transforms "0" bool to "false" and "1" to "true".

    // Signs on numbers

    std::cout << std::endl; 

    int a{45};
    int b{-45};

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << std::showpos; // actives "+" automatically show
    std::cout << "----------" << std::endl;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << "----------" << std::endl;
    std::cout << "Back to normal" << std::endl;
    std::cout << std::noshowpos; 

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // Changing the system base

    std::cout << std::endl;

    std::cout << "Displaying integer as decimal, hexadecimal, and octal." << std::endl;

    int pos {717171};
    int neg {-3021};
    double dob {494.395};

    std::cout << "The numbers in decimal base:" << std::endl;
    std::cout << pos << " | " << neg << " | " << dob << std::endl;
    std::cout << "-----------" << std::endl;

    std::cout << "The numbers in hexadecimal base:" << std::endl;
    std::cout << std::hex << pos << " | " << neg << " | " << dob << std::endl; // hexadecimal
    std::cout << "-----------" << std::endl;

    std::cout << "The numbers in octal base:" << std::endl;
    std::cout << std::oct << pos << " | " << neg << " | " << dob << std::endl; // octal
    std::cout << "-----------" << std::endl;

    //uppercase and nouppercase (only for hexadecimal exhibition

    std::cout << std::endl;

    std::cout << "pos_int (uppercase; hex)" << std::endl;
    std::cout << std::uppercase;
    std::cout << std::hex << pos << std::endl;

    // back to normal
    std::cout << std::nouppercase;
    std::cout << std::dec;

    // Affecting floating points data

    double m {1.9948382};
    double n {0.0000009294};
    double g {1000};

    std::cout << std::endl;

    std::cout << "The numers are (without changes):" << std::endl;

    std::cout << "m = " << m << " n = " << n << " g = " << g << std::endl;

    std::cout << "Showing it scientific:" << std::endl;
    std::cout << std::scientific;
    std::cout << m << " | " << n << " | " << g << std::endl;

    std::cout << "double values (fixed): " << std::endl;
    std::cout << std::fixed; 
    std::cout << m << " | " << n << " | " << g << std::endl;
    

    std::cout << std::endl;

    std::cout << "There's no official way to set floating points back to normal, but this code: " << std::endl;
    std::cout << "std::cout.unsetf(std::ios::scientific | std::ios::fixed);" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "Allow us to get back to normal: " << std::endl;

    std::cout << m << " | " << n << " | " << g << std::endl;

    // Considerations: as I already did, you can use setprecision(value_here) to fix how many digits are exhibited in the output (respecting the maxium precision of the type)

    //Exhibition (or not) of decimal points

    std::cout << std::endl;

    double d {34.1};
    double e {101.99};
    double h {12.0};
    int k {45};

    std::cout << "noshowpoint (default)" << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << "k: " << k << std::endl;

    //trailing 0 like 12.0 are, by default, not showed, but with showpoint you can see them.

    std::cout << "----------" << std::endl;
    std::cout << std::showpoint;
    std::cout << "showpoint" << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << "k: " << k << std::endl;

    // observe, "showpoint" also fill with 0s the number to match the memory allocated for that variable. 



    return 0; // Unix-like OS convention. Is not "false" (especially because the function is integer type), but "ok".
}
