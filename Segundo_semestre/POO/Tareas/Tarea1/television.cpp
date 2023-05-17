#include "television.hpp"

Television::Television(): precio{0}, modelo{""}, cantidad{0} {}
Television::Television(int prec, string mod, int cant): precio{prec}, modelo{mod}, cantidad{cant} {}

void Television::setPrecio(int prec){precio = prec;}
int Television::getPrecio(){return precio;}

void Television::setModelo(string mod){modelo = mod;}
string Television::getModelo(){return modelo;}