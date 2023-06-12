// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef TEMPORADA_HPP
#define TEMPORADA_HPP

#include <iostream>
#include <vector>
#include <string>
#include "Capitulo.hpp"

using std::cout;
using std::endl;
using std::vector;
using std::string;

class Temporada{
        vector<Capitulo> episodios;
        int numero;
        int calificacion;
    public:
        Temporada();
        Temporada(int);
        void addCapitulo(Capitulo&);
        int getNumCapitulos();
        void dispCapitulos();
        void setCalificacion();
        int getCalificacion();
        friend int operator +(int, Temporada&);
        Capitulo getCapitulo(int);
};

#endif