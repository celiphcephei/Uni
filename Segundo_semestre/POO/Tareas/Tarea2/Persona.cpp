#include "Persona.hpp"

Persona::Persona(): nombre{""}, edad{0}, casa{} {}
Persona::Persona(string nom, int ed, Domicilio cas): nombre{nom}, edad{ed}, casa{cas} {}

void Persona::setNombre(string nom){nombre = nom;}
string Persona::getNombre(){return nombre;}

void Persona::setEdad(int ed){edad = ed;}
int Persona::getEdad(){return edad;}