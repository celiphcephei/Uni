#include <iostream>
#include "rectangulo.h"


using std::cout;
using std::endl;


int Rectangulo::getAncho(){
    return alto;
}

int Rectangulo::getAlto(){
    return ancho;
}

void Rectangulo::setAlto(int altura){
    alto = altura;
}

void Rectangulo::setAncho(int anchura){
    ancho = anchura;
}

int Rectangulo::getPerimetro(){
    return alto + alto + ancho + ancho;
}

int Rectangulo::getArea(){
    return alto * ancho;
}

int Rectangulo::dibuja(){
    for(int i = 0; i < alto; i++){
        for(int j = 0; j < ancho; j++){
            cout << " * ";
        }
        cout << endl;
    }
}