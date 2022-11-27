#include <iostream>
#include "tablero.h"
#include "casilla.h"

void Tablero::toString(){
    for(int i=0; i < 50; i++){
        casillas[i].toString();
    }
}

Tablero::Tablero(){
    for(int i=0; i<50; i++){
        casillas[i] = Casilla(i, i);
    }
}