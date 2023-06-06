#include "Cafetera.hpp"

Cafetera::Cafetera(string n, float c, int t): nombre{n}, capacidad{c}, tazasXmin{t} {}

string Cafetera::toString(){
    return "Cafetera(" + std::to_string(capacidad) + "," + std::to_string(tazasXmin) + "," + nombre + ")";
}

int operator + (Cafetera &c1, Cafetera &c2){
    return c1.tazasXmin + c2.tazasXmin;
}

int operator +(int num, Cafetera &c){
    return num + c.tazasXmin;
}

string operator %(Cafetera &c1, Cafetera &c2){
    return ((c1.capacidad > c2.capacidad) ? c1.nombre : c2.nombre);
}

bool operator >(Cafetera &c1, Cafetera &c2){
    return ((c1.capacidad > c2.capacidad) ? true : false);
}

Cafetera operator *(Cafetera &c1, Cafetera &c2){
    return Cafetera{"CafeteraX2", (c1.capacidad + c2.capacidad) * 2, (c1.tazasXmin + c2.tazasXmin) * 2};
}