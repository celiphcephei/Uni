#include "persona.hpp"

Persona::Persona(): nombre{""}, tarjeta{} {}
Persona::Persona(string nom, Tarjeta tarj, Television tele): nombre{nom}, tarjeta{tarj}, tv{tele} {}

void Persona::setNombre(string nom){nombre = nom;}
string Persona::getNombre(){return nombre;}


void Persona::comprarTelevision(){
    tarjeta.restarFondos(tv.getPrecio());
    cout << "Fondos restantes: " << tarjeta.getSaldo() << endl;
}