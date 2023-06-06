#ifndef TELEFONO_HPP
#define TELEFONO_HPP

#include "SistemaComunicacion.hpp"
#include <iostream>

using std::cout;
using std::endl;

class Telefono: public SistemaComunicacion{
    bool encendido{false};
    string numero{"1234567890"};
    protected:
        Telefono(string);
    public:
        void encender();
        void apagar();
        string getNumero();
        bool marcar(string);
};

#endif