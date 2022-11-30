#ifndef FLOTA_H
#define FLOTA_H

#include <vector>
#include "oficial.h"
#include "navio.h"

using std::vector;
using std::cout;
using std::endl;

class Flota{
    private:
        int idFlota;
        Oficial oficial;
        vector <Navio> barcos;
    public:
        Flota(int id, Oficial of);
        double getTotalPoderFuego();
        void agregarNavio(Navio bar);
        void display();
};

#endif