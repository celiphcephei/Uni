#include "Licuadora.hpp"

Licuadora::Licuadora(): Electrodomestico{} {}
Licuadora::Licuadora(bool e, string fa, int nv, bool pa): Electrodomestico{}, numVelocidades{nv}, pulsarActivo{pa} {
    setEncendido(e);
    // cambiaFuncionActual(fa);
    funcionActual = fa;
}

void Licuadora::licuar(){
    if(isEncendido()) cout << "Licuando tus alimentos con la funcion " + funcionActual << endl; 
        else cout << "Prendela primero" << endl;
}

string Licuadora::toString(){
    return "Licuadora (" + Electrodomestico::toString() + "," + std::to_string(numVelocidades) + "," + std::to_string(pulsarActivo) + ")";
}

string Licuadora::dimeFuncionActual(){
    return "Tu licuadora de " + std::to_string(numVelocidades) + " esta haciendo la funcion " + funcionActual;
}

void Licuadora::cambiaFuncionActual(string fa){
    Electrodomestico::cambiaFuncionActual(fa);
    cout << "Esto se hizo desde la licuadora";
}