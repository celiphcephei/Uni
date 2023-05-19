#include "tarjeta.hpp"
Tarjeta::Tarjeta(): cargo{0} {}
Tarjeta::Tarjeta(int car = 0): cargo{car} {}

void Tarjeta::sumarCargo(int car){cargo+=car;}

void Tarjeta::setCargo(int car){cargo = car;}
int Tarjeta::getCargo(){return cargo;}