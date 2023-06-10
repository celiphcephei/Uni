// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include "Persona.hpp"
#include "Tarjeta.hpp"

using std::cout;
using std::endl;
using std::string;

class Cliente: public Persona{
    Tarjeta tarjeta;
    public:
        Cliente();
        Cliente(string, int, Tarjeta, Domicilio);
        void pagar(int);
        int getDeuda();
        string toString();
        virtual string hablar();
};

#endif