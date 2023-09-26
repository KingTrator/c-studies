#include <iostream>

// std::cout << global_var; of course, you can't acess a variable that was not declared yet.
int global_var {99}; // acessible in the whole code

void example(){
    int answer {42}; // it's only acessible inside "example()", dies when this function ends.
    static int static_Var1 {49}; // dies when the programm ends.
}

// Of course I already knew that, but for completeness, I'll write this code to explain how scope works in C++ (just like Python or Js).

int main(int agrc, char **argv){

    //block variables
    {
        int local_var1 {10};
        int dynamic_var2 {60};
        // these variables exists inside this block and after it, they dissapear.
    }
    return 0;
}
