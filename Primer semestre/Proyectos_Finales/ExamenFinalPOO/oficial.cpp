#include <iostream>
#include "oficial.h"

Oficial::Oficial(){}

Oficial::Oficial(int id, string nom, string ran){
    noIdentification = id;
    name = nom;
    rango = ran;
}

void Oficial::display(){
    cout << "Identificacion del oficial: " << noIdentification << endl;
    cout << "Nombre del Oficial: " << name << endl;
    cout << "Rango del Oficial: " << rango << endl;
}
