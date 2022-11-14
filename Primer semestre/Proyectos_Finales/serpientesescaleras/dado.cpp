#include <iostream>
#include <cstdlib>
#include "dado.h"

int Dado::tiro(){
    int n_random = 1 + (rand() % 6);
    return n_random;
}

