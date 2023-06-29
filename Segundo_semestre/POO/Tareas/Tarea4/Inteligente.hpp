// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef INTELIGENTE_HPP
#define INTELIGENTE_HPP

#include "Television.hpp"

class Inteligente: public Television{
    bool wifi;
    public:
        Inteligente();
        Inteligente(string, string, int, float);
        bool hasWifi();
        virtual string toString();
        virtual void prender();
        virtual void apagar();
        virtual void subirVolumen();
        virtual void bajarVolumen();
        virtual void seleccion(int);
        virtual void funcionEspecial();
};

#endif