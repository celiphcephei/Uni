#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <string>
#include "television.hpp"

using std::string;
using std::cout;
using std::endl;

class Tienda{
    private:
        string nombre;
        Television televisores;
        int ventas;
    public:
        Tienda();
        Tienda(string nom, Television tv);
        void setNombre(string nom);
        string getNombre();
        int getStock();
        void venderTelevision();
        int getVentas();
};

#endif