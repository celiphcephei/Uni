// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Television.hpp"

Television::Television(): marca{""}, modelo{""}, precio{0},encendido{0}, volumen{0}, canal{0}, peso{0} {}
Television::Television(string marc, string model,int prec, float pes): marca{marc}, modelo{model}, precio{prec}, encendido{0}, volumen{0}, canal{0}, peso{pes} {}

void Television::setMarca(string marc){marca = marc;}
string Television::getMarca(){return marca;}

void Television::setModelo(string model){modelo = model;}
string Television::getModelo(){return modelo;}

void Television::setEncendido(bool encend){encendido = encend;}
bool Television::isEncendido(){return encendido;}

void Television::setPrecio(int prec){precio = prec;}
int Television::getPrecio(){return precio;}

void Television::masVolumen(int vol){volumen += vol;}
void Television::menosVolumen(int vol){volumen -= vol;}

// void Television::prender(){setEncendido(1);}
// void Television::apagar(){setEncendido(0);}

// void Television::subirVolumen(){volumen += 10;}
// void Television::bajarVolumen(){volumen -= 10;}
int Television::getVolumen(){return volumen;}

//void Television::selecion(string can){canal = can;}
string Television::getCanal(){return canal;}
void Television::setCanal(string can){canal = can;}

float Television::getPeso(){return peso;}

string operator +(Television &t1, Television &t2){
    return "Recibo electronico\nTelevisor: " + t1.modelo + "\nMarca: " + t1.marca + "\nPrecio: " + std::to_string(t1.precio) +
    "\n\nTelevisor: " + t2.modelo + "\nMarca: " + t2.marca + "\nPrecio: " + std::to_string(t2.precio) +
    "\n\nTOTAL: " + std::to_string(t1.precio + t2.precio);
}

bool operator >(Television &tv1, Television &tv2){return tv1.peso > tv2.peso;}
bool operator <(Television &tv1, Television &tv2){return tv1.peso < tv2.peso;}