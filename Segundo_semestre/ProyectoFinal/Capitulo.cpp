// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Capitulo.hpp"

Capitulo::Capitulo(): numero{0}, titulo{""}, calificacion{0} {}
Capitulo::Capitulo(int num, string tit, int cal): numero{num}, titulo{tit}, calificacion{cal} {}

void Capitulo::setNumero(int num){numero = num;}
int Capitulo::getNumero(){return numero;}

void Capitulo::setTitulo(string tit){titulo = tit;}
string Capitulo::getTitulo(){return titulo;}

void Capitulo::setCalificacion(int cal){calificacion = cal;}
int Capitulo::getCalificacion(){return calificacion;}

int operator +(int n, Capitulo &cap){return n + cap.calificacion;}
