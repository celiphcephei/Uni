#include "tienda.hpp"

Tienda::Tienda(): nombre{""}, televisores{} {}
Tienda::Tienda(string nom, Television tv): nombre{nom}, televisores{tv} {}

void Tienda::setNombre(string nom){nombre = nom;}
string Tienda::getNombre(){return nombre;}

int Tienda::getStock(){return televisores.getCantidad();}

void Tienda::venderTelevision(){
    televisores.restarCantidad();
    cout << nombre <<  " vendió una television de la marca " << televisores.getModelo() << endl <<
    "Televisores en stock: " << televisores.getCantidad();
}