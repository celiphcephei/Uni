#ifndef TABLERO_H
#define TABLERO_H

#include "casilla.h"

class Tablero{
    private:
        Casilla casillas[50];
    public:
        void toString();
        Tablero();
};

#endif