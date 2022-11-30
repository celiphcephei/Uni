#include <iostream>
#include "navio.h"

Navio::Navio(string nom, string id, double poder){
    nombre = nom;
    idNavio = id;
    poderFuego = poder;
}

double Navio::getPoderfuego(){
    return poderFuego;
}

void Navio::display(){
    cout << "Nombre del Navio: " << nombre << endl;
    cout << "ID del Navio: " << idNavio << endl;
}