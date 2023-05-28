#include "Persona.hpp"

Persona::Persona(): nombre{""}, edad{0} {}
Persona::Persona(string nom, int ed): nombre{nom}, edad{ed} {}

void Persona::setNombre(string nom){nombre = nom;}
string Persona::getNombre(){return nombre;}

void Persona::setEdad(int ed){edad = ed;}
int Persona::getEdad(){return edad;}