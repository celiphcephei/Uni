#include <iostream>
#include "flota.h"
#include "navio.h"
#include "oficial.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    Navio barquito("barquito", "QWERTY", 100);
    Navio barquito2("barquito2", "QWKNVG", 200);
    Navio barquito3("barquito3", "QWRTFY", 300);
    Navio barquito4("barquito4", "QWERTY", 400);
    Navio barquito5("barquito5", "QWRTVF", 500);
    Navio barquito6("barquito6", "QWERTO", 600);

    Oficial gfe(640, "Juanito", "Dios");

    Flota flotota(999, gfe);

    flotota.agregarNavio(barquito);
    flotota.agregarNavio(barquito2);
    flotota.agregarNavio(barquito3);
    flotota.agregarNavio(barquito4);
    flotota.agregarNavio(barquito5);
    flotota.agregarNavio(barquito6);

    flotota.display();

    cout << "Total de poder de la flota: " << flotota.getTotalPoderFuego() << endl;


    return 0;
}