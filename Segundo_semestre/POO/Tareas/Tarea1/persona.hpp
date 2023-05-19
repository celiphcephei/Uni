#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "tarjeta.hpp"
#include "television.hpp"
#include "tienda.hpp"

using std::string;
using std::cout;
using std::endl;

class Persona{
    private:
        string nombre;
        Tarjeta tarjeta;
        Television tv;
    public:
        Persona();
        Persona(string nom,Tarjeta tarj, Television tele);
        void setNombre(string nom);
        string getNombre();
        void comprarTelevision();
        int getSaldo();
        void recargarSaldo(int dinero);
};

#endif