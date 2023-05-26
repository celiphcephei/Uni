#ifndef MICRO_HPP
#define MICRO_HPP

#include <iostream>
#include <string>
#include "Electrodomestico.hpp"

class Microondas: public Electrodomestico{
    private:
        float capacidad;
        std::string color;
    public:
        Microondas();
        Microondas(float, std::string);
        std::string calentadoRapido();
        void encender();
        void apagar();
        std::string toString();

};

#endif