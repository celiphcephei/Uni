#include "Microondas.hpp"

Microondas::Microondas(): Electrodomestico(), capacidad{4.5f}, color{"Gris"} {}

Microondas::Microondas(float cap, string col): Electrodomestico(), capacidad{cap}, color{col} {}

string Microondas::calentadoRapido(){
    if(isEncendido()) return "Calentando tu comida por 30 segundos.";
        else return "Encience primero el microondas";
}

void Microondas::encender(){setEncendido(true);}

void Microondas::apagar(){setEncendido(false);}

string Microondas::toString(){
    
}