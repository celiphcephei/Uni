#include <iostream>
#include <cstdint> 

int main(){
    int8_t min = 50; // entero de 8 bits -2^n-1 ... 2^n-1 -1 // -(2^7) .. 2^7 -1
    int8_t max = 100;
    int8_t mid = static_cast<int8_t>((min + max)) / 2; // overflow 150 pasa de 127
    std::cout << "min = " << static_cast<int>(min) << '\n';
    std::cout << "max = " << static_cast<int>(max) << '\n';
    std::cout << "mid = " << static_cast<int>(mid) << '\n';

    std::cout << "... ... " << (int)static_cast<int8_t>(130) << '\n';
    
    int8_t mid = static_cast<int8_t>(max - min) / 2 + min; // cambio de orden de operaciones para evitar overflow

    return 0;
}