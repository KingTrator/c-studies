#include <iostream>

const unsigned char mask_bit_0 {0b00000001};
const unsigned char mask_bit_1 {0b00000010};
const unsigned char mask_bit_2 {0b00000100};
const unsigned char mask_bit_3 {0b00001000};
const unsigned char mask_bit_4 {0b00010000};
const unsigned char mask_bit_5 {0b00100000};
const unsigned char mask_bit_6 {0b01000000};
const unsigned char mask_bit_7 {0b10000000};


//This function is using 8 bytes
void use_options_v0(bool flag0, bool flag1, bool flag2, bool flag3,
                    bool flag4, bool flag5, bool flag6, bool flag7) {
  std::cout << "Flag0: " << flag0 << ", do something with it." << std::endl;
  std::cout << "Flag1: " << flag1 << ", do something with it." << std::endl;
  std::cout << "Flag2: " << flag2 << ", do something with it." << std::endl;
  std::cout << "Flag3: " << flag3 << ", do something with it." << std::endl;
  std::cout << "Flag4: " << flag4 << ", do something with it." << std::endl;
  std::cout << "Flag5: " << flag5 << ", do something with it." << std::endl;
  std::cout << "Flag6: " << flag6 << ", do something with it." << std::endl;
  std::cout << "Flag7: " << flag7 << ", do something with it." << std::endl;
}

// This function is using only 1 byte.
void use_options_v1(unsigned char flags){
  std::cout << "bit0 is " << ((flags & mask_bit_0) >> 0) << ", do something with it." << std::endl;
  std::cout << "bit1 is " << ((flags & mask_bit_1) >> 1) << ", do something with it." << std::endl;
  std::cout << "bit2 is " << ((flags & mask_bit_2) >> 2) << ", do something with it." << std::endl;
  std::cout << "bit3 is " << ((flags & mask_bit_3) >> 3) << ", do something with it." << std::endl;
  std::cout << "bit4 is " << ((flags & mask_bit_4) >> 4) << ", do something with it." << std::endl;
  std::cout << "bit5 is " << ((flags & mask_bit_5) >> 5) << ", do something with it." << std::endl;
  std::cout << "bit6 is " << ((flags & mask_bit_6) >> 6) << ", do something with it." << std::endl;
  std::cout << "bit7 is " << ((flags & mask_bit_7) >> 7) << ", do something with it." << std::endl;
}

// As you can see, the bitwise manipulation may save memory.

int main(){

  use_options_v0(0,0,1,1,1,0,1,0);

  std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

  use_options_v1(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_6);

    return 0;
}
