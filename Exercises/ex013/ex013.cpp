#include <iostream>
#include <clocale>
#include <fmt/core.h>

/*
To build this exercise, I needed to implement a few instructions at my tasks.json, so this is the first original tasks.json that I'm creating.
The original exercise was simply import an emoji library to Python and then to use emojis. Here, it's a bit more complex.
Step-by-step:
1. Download zip archieve of a library (in this case, I first downloaded boost library, then delete it because it was way too complex for my needs.
Then I download a simple formatting library, with less than 1MB; boost had almost 1GB.)
2. Unzip the archieve and record the path to it.
3. Go to tasks.json and change, for each compiler, the arguments. I just insert a new argument, which provides the correct path to the C/C++ Headers. This path must be inside the "include" (usually this name) directory, 
which contains the cpp code.
__________________
OBS: C/C++ Headers are a type of document that contains information about the functions and classes of a C/C++ library.
__________________


*/
/* OBS: There's also libraries that demands some compilation. In this case, you can use something like "Cmake".
Due to the increment of complexity to do it at such early point of my course, I decided to use only a 
C++ Header library.*/

// IMPORTANT: I did nothing at all. The code is not working. I'll try again someday.

int main(){
    std::setlocale(LC_ALL, "C.UTF-8");
    std::string nome = "KingTrator";
    int idade = 20;
    std::string mensagem = fmt::format("Olá, {}! Sua idade é {} anos.", nome, idade);
    std::cout << mensagem << std::endl;
    return 0;
}
