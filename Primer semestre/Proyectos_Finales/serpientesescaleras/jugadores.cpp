#include <iostream>
#include "jugadores.h"

string Jugadores::getcolor(){
    return color;
}
int Jugadores::getpos(){
    return pos;
}

string Jugadores::getid(){
    return id;
}

void Jugadores::setcolor(string sc){
    color = sc;
}

void Jugadores::setpos(int sp){
    pos = sp;
}

void Jugadores::setid(string si){
    id = si;
}

