// Renato Garcia Moran A01799387

#ifndef DIGITALTV_HPP
#define DIGITALTV_HPP

#include "TV.hpp"

class DigitalTV: public TV{
        int canalDigital;
        string marca;
    public:
        DigitalTV(int, string);
        int getCanalDigital();
        string getMarca();
        string toString();
        virtual void cambiarCanal(int);
};

#endif