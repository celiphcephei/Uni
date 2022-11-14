#include <iostream>
#include "casilla.h"

int Casilla::mover(){
    return posicion + cambio_pos;
}

int Casilla::getpos(){
    return posicion;
}

int Casilla::getcambiopos(){
    return cambio_pos;
}

void Casilla::setpos(int p){
    posicion = p;
}

void Casilla::setcambiopos(int cp){
    cambio_pos = cp;
}