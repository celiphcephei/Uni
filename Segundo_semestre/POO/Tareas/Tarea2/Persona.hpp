#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <string>

using std::string;

class Persona{
    string nombre;
    int edad;
    protected:
        Persona();
        Persona(string, int);
    public:
        void setNombre(string);
        string getNombre();
        
        void setEdad(int);
        int getEdad();
};

#endif