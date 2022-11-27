#include <iostream>
#include "casilla.h"

using std::cout;
using std::endl;

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

Casilla::Casilla(int p, int c){
    posicion = p;
    cambio_pos = c;
}

Casilla::Casilla(){
    posicion = 0;
    cambio_pos = 0;
}

Casilla::~Casilla(){
//    cout << "Metodo destructor de casilla" << endl;
}

void Casilla::toString(){
    cout << "Soy la casilla: " << posicion << endl;
}