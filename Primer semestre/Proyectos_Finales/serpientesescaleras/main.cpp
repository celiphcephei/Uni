#include <iostream>
#include "dado.h"
#include "jugadores.h"
#include "casilla.h"
#include "tablero.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    Dado dado;
    for(int i=0; i<10; i++){
        cout << dado.tiro() << endl;
    }

    Jugadores color;
    color.setcolor("amarillo");
    color.setpos(10);
    color.setid("Alberto");
    cout << "Soy " << color.getid() << " me encuentro en la posicion " << color.getpos() << " y soy " << color.getcolor() << endl;

    Casilla c1;
    c1.setpos(10);
    c1.setcambiopos(5);
    cout << c1.mover() << endl;

    Tablero tab;
    tab.toString();
}