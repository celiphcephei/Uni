#include "Electrodomestico.hpp"

Electrodomestico::Electrodomestico(): encendido{false} {}

bool Electrodomestico::isEncendido(){return encendido;}

void Electrodomestico::setEncendido(bool value){encendido = value;}

std::string Electrodomestico::toString(){
    std::string estado = "Apagado";
    if(isEncendido()) estado = "Encendido";
    return "Electrodomestico(" + estado + ")";
}