// Tarea 1
// Renato Garcia Moran A01799387
// Jose Eduardo Rosas Ponciano A01784461

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
        void dispDeuda();
};

#endif