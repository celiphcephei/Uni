// Tarea 1
// Renato Garcia Moran A01799387
// Jose Eduardo Rosas Ponciano A01784461

#include "persona.hpp"

Persona::Persona(): nombre{""}, tarjeta{}, tv{} {}
Persona::Persona(string nom, Tarjeta tarj, Television tele): nombre{nom}, tarjeta{tarj}, tv{tele} {}

void Persona::setNombre(string nom){nombre = nom;}
string Persona::getNombre(){return nombre;}


void Persona::comprarTelevision(){
    tarjeta.sumarCargo(tv.getPrecio());
    cout << this->nombre << " compró una television." << endl <<
            "Se agrego un cargo de " << tv.getPrecio() << " dolares a la tarjeta de " << this->nombre << endl;
}

void Persona::dispDeuda(){
    cout << this->nombre << " tiene un total de " << tarjeta.getCargo() << " dolares por pagar. " << endl;
}
