#include "Cliente.hpp"

Cliente::Cliente(): Persona{}, tarjeta{} {}
Cliente::Cliente(string nom, int ed, Tarjeta tarj, Domicilio cas): Persona{nom, ed, cas}, tarjeta{tarj} {}

void Cliente::pagar(int precio){tarjeta.sumarCargo(precio);}

int Cliente::getDeuda(){return tarjeta.getCargo();}

string Cliente::toString(){
    return "El cliente " + this->getNombre() + " con " + std::to_string(this->getEdad()) + " años, tiene una deuda de " + std::to_string(getDeuda()) + " dolares";
}

string Cliente::hablar(){return "Quiero una television";}