#ifndef MICRO_HPP
#define MICRO_HPP

#include <string>
#include "Electrodomestico.hpp"

using std::string;

class Microondas: public Electrodomestico{
    private:
        float capacidad;
        string color;
    public:
        Microondas();
        Microondas(float, string);
        string calentadoRapido();
        void encender();
        void apagar();
        string toString();
};

#endif