#include <iostream>
#include "rectangulo.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    int altura, anchura;
    cout << "Ingresa la altura: ";
    cin >> altura;
    cout << "Ingresa la anchura: ";
    cin >> anchura;

    Rectangulo rectangulo;
    rectangulo.setAlto(altura);
    rectangulo.setAncho(anchura);
    cout << "Ancho : " << rectangulo.getAncho() << endl;
    cout << "Alto : " << rectangulo.getAlto() << endl;
    cout << "Perimetro : " << rectangulo.getPerimetro() << endl;
    cout << "Area : " << rectangulo.getArea() << endl;
    cout << rectangulo.dibuja();
    return 0;
}