#include "Microondas.hpp"

Microondas::Microondas(): Electrodomestico() ,capacidad{3.5f}, color{"Gris"} {}
Microondas::Microondas(float cap, std::string col): Electrodomestico(), capacidad{cap}, color{col} {}

std::string Microondas::calentadoRapido(){
    if(isEncendido()) return "Calentando tu comida por 30 segundos";
        else return "Primero enciende el microondas";
}

void Microondas::encender(){
    std::cout << "Microondas encendido" << std::endl;
    setEncendido(true);
}

void Microondas::apagar(){
    std::cout << "Microondas apagado" << std::endl;
    setEncendido(false);
}

std::string Microondas::toString(){
    return "Microondas(" + std::to_string(isEncendido()) +"," + std::to_string(capacidad) + "," + color + ")\n";
}