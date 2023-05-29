#ifndef TIENDA_HPP
#define TIENDA_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Television.hpp"
#include "Cliente.hpp"

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Tienda{
    string nombre;
    vector<Television*> stock;
    Cliente cliente;
    public:
        Tienda();
        Tienda(string, Cliente);
        void setNombre(string);
        string getNombre();
        void aumentarStock(Television*);
        int getStock();
        void venderTelevision();
};

#endif