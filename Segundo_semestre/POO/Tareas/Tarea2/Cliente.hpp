#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "Persona.hpp"
#include "Tarjeta.hpp"

class Cliente: public Persona{
    Tarjeta tarjeta;
    public:
        Cliente(string, int, Tarjeta);
        void pagar();
};

#endif