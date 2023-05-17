#include "tarjeta.hpp"

Tarjeta::Tarjeta(): saldo{0} {}
Tarjeta::Tarjeta(int sald): saldo{sald} {}

void Tarjeta::setSaldo(int sald){saldo = sald;}
int Tarjeta::getSaldo(){return saldo;}

void Tarjeta::agregarFondos(int dinero){saldo += dinero;}
void Tarjeta::restarFondos(int dinero){saldo -= dinero;}