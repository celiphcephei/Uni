// Tarea 1
// Renato Garcia Moran A01799387
// Jose Eduardo Rosas Ponciano A01784461

#include "television.hpp"

Television::Television(): precio{0}, modelo{""}, cantidad{0} {}
Television::Television(int prec, string mod, int cant): precio{prec}, modelo{mod}, cantidad{cant} {}

void Television::setPrecio(int prec){precio = prec;}
int Television::getPrecio(){return precio;}

void Television::setModelo(string mod){modelo = mod;}
string Television::getModelo(){return modelo;}

void Television::setCantidad(int cant){cantidad = cant;}
int Television::getCantidad(){return cantidad;}

void Television::sumarCantidad(){cantidad++;}
void Television::restarCantidad(){cantidad--;}