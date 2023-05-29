#ifndef ELECTRO_HPP
#define ELECTRO_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Electrodomestico{
        bool encendido{false};
    protected:
        string funcionActual{"Ninguna"};
        Electrodomestico();
    public:
        bool isEncendido();
        void setEncendido(bool);
        void encender();
        void apagar();
        virtual string toString();
        virtual string dimeFuncionActual();
        virtual void cambiaFuncionActual(string);
};

#endif