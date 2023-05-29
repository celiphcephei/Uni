#include "Television.hpp"

Television::Television(): marca{""}, modelo{""}, precio{0},encendido{0}, volumen{0}, canal{0} {}
Television::Television(string marc, string model,int prec): marca{marc}, modelo{model}, precio{prec}, encendido{0}, volumen{0}, canal{0} {}

void Television::setMarca(string marc){marca = marc;}
string Television::getMarca(){return marca;}

void Television::setModelo(string model){modelo = model;}
string Television::getModelo(){return modelo;}

void Television::setEncendido(bool encend){encendido = encend;}
bool Television::isEncendido(){return encendido;}

void Television::setPrecio(int prec){precio = prec;}
int Television::getPrecio(){return precio;}

void Television::prender(){setEncendido(1);}
void Television::apagar(){setEncendido(0);}

void Television::subirVolumen(){volumen += 10;}
void Television::bajarVolumen(){volumen -= 10;}
int Television::getVolumen(){return volumen;}

void Television::selectCanal(string can){canal = can;}
string Television::getCanal(){return canal;}