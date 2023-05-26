// Tarea 1
// Renato Garcia Moran A01799387
// Jose Eduardo Rosas Ponciano A01784461

#include "tienda.hpp"

Tienda::Tienda(): nombre{""}, televisores{}, ventas{0} {}
Tienda::Tienda(string nom, Television tv): nombre{nom}, televisores{tv}, ventas{0} {}

void Tienda::setNombre(string nom){nombre = nom;}
string Tienda::getNombre(){return nombre;}

int Tienda::getStock(){return televisores.getCantidad();}

void Tienda::venderTelevision(){
    ventas++;
    televisores.restarCantidad();
    cout << this->nombre <<  " vendió una television de la marca " << televisores.getModelo() << endl <<
    "Televisores en stock: " << televisores.getCantidad() << endl;
}

int Tienda::getVentas(){return ventas;}