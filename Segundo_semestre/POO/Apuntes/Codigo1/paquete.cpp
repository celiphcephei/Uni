#include "paquete.hpp"

Paquete::Paquete(): direccion{""}, descripcion{""} {}
Paquete::Paquete(string direc, string desc): direccion{direc}, descripcion{desc} {}

void Paquete::setDireccion(string direc){direccion = direc;}
void Paquete::setDescripcion(string desc){descripcion = desc;}

string Paquete::getDireccion(){return direccion;}
string Paquete::getDescripcion(){return descripcion;}