#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <string>

// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#include "Domicilio.hpp"

using std::string;

class Persona{
    string nombre;
    int edad;
    Domicilio casa;
    protected:
        Persona();
        Persona(string, int, Domicilio);
    public:
        void setNombre(string);
        string getNombre();
        
        void setEdad(int);
        int getEdad();

        virtual string hablar() = 0;
};

#endif