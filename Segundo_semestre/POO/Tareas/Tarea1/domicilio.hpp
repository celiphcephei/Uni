#ifndef DOMICILIO_H
#define DOMICILIO_H

#include <iostream>
#include "television.hpp"
#include "persona.hpp"
#include "tienda.hpp"

using std::cout;
using std::endl;

class Domicilio{
    private:
        Television television;
        Persona dueño;
        Tienda vendedor;
    public:
        Domicilio();
        Domicilio(Television tv, Persona du, Tienda vend);
        void recibirTelevision();
        void dispTelevisores();
};
#endif