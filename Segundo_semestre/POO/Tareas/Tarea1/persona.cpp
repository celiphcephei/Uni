#include "persona.hpp"

Persona::Persona(): nombre{""}, tarjeta{}, tv{} {}
Persona::Persona(string nom, Tarjeta tarj, Television tele): nombre{nom}, tarjeta{tarj}, tv{tele} {}

void Persona::setNombre(string nom){nombre = nom;}
string Persona::getNombre(){return nombre;}


void Persona::comprarTelevision(){
    cout << "Se agrego un cargo de " << tarjeta.getCargo() << " dolares a la tarjeta de " << this->nombre << endl;
}
