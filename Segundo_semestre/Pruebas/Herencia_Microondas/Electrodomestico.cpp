#include "Electrodomestico.hpp"

Electrodomestico::Electrodomestico(): encendido{false} {}

bool Electrodomestico::isEncendido(){return encendido;}

void Electrodomestico::setEncendido(bool est){this->encendido = est;}

string Electrodomestico::toString(){
    string estado = "Apago";
    if(isEncendido()) estado = "Encendido";
    return "Electrodomestico (" + estado + ")";
}