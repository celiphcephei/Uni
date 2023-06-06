// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Tarjeta.hpp"

Tarjeta::Tarjeta(): cargo{0} {}
Tarjeta::Tarjeta(int car = 0): cargo{car} {}

void Tarjeta::setCargo(int car){cargo = car;}
void Tarjeta::sumarCargo(int car){cargo += car;}
int Tarjeta::getCargo(){return cargo;}