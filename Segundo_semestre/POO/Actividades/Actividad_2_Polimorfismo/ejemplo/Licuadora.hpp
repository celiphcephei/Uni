#ifndef LICUADORA_HPP
#define LICUADORA_HPP

#include "Electrodomestico.hpp"

class Licuadora: public Electrodomestico{
        int numVelocidades{4};
        bool pulsarActivo{false};
    public:
        Licuadora();
        Licuadora(bool, string, int, bool);
        void licuar();
        string toString();
        string dimeFuncionActual();
        void cambiaFuncionActual(string);
};

#endif