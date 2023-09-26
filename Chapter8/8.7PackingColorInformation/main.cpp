#include <iostream>
#include <bitset>

int main(){
    /*
    GENERICAL HEXADECIMAL (FOR COLORS)
    0x 1_ _ | 2_ _ | 3_ _ | 4_ _ 
    A hexadecimal code uses 4 bytes, as you can see above.
    First three are used to set the RGB display.
    The last byte is used to set the opacity of the final color. 
    Because hexadecimal supports 16 representations (0 to 9 then A to F), you have one byte for every two "hexadecimal algarism" (16 x 16 == 256; 1 byte)
    */

    const unsigned int red_mask {0xFF000000u};
    const unsigned int green_mask {0X00FF0000u};
    const unsigned int blue_mask {0x0000FF00u};
    const unsigned int alpha_mask {0x000000FF}; // The last byte is used to set the opacity

    unsigned int my_color {0xAABCDE00u};

    std::cout << std::hex << std::showbase << std::endl;
    std::cout << "my_color: " << my_color << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
    std::cout << std::dec << std::noshowbase << std::endl;

    std::cout << "Red intensity is: " << static_cast<unsigned int>((my_color & red_mask) >> 24) << "/255" << std::endl;;
    std::cout << "Green intensity is: " << static_cast<unsigned int>((my_color & green_mask) >> 16) << "/255" << std::endl;
    std::cout << "Blue intensity is: " << static_cast<unsigned int>((my_color & blue_mask) >> 8) << "/255" << std::endl;
    std::cout << "Opacity intensity is: " << static_cast<unsigned int>((my_color & alpha_mask) >> 0 ) << "/255" << std::endl;

    return 0;
}
