#include <iostream>
#include "flota.h"

Flota::Flota(int id, Oficial of){
    idFlota = id;
    oficial = of;
}

double Flota::getTotalPoderFuego(){
    int poder = 0;
    for (int i = 0; i < 6; i++){
        poder += barcos[i].getPoderfuego();
    }
    return poder;
}

void Flota::agregarNavio(Navio bar){
    barcos.push_back(bar);
}

void Flota::display(){
    oficial.display();
    for (int j = 0; j < 6; j++){
        barcos[j].display();
    }
}