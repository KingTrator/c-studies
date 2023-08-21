#include <iostream>

int main(){
    //Use braced initializers instead of parentheses or equal sign.
    //Braced are more effective and optimized.
    int elephant_count; // random gargabe allocated
    int lion_count{}; // By default, allocates 0.
    int dog_count {10};

    int cat_count {15};
    // The Integer Type (int) uses 4 bytes.
    // Booleans use 1 byte (just to take note).
    int domesticated_animals { dog_count + cat_count};
    std::cout << domesticated_animals << std::endl << elephant_count << std::endl;
    return 0;
}