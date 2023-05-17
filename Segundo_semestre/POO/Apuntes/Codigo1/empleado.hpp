#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>
#include "paquete.hpp"

using std::string;
using std::cout;
using std::endl;

class Empleado{
    private:
        string nombre;
        int numEmpleado;
        Paquete envio;
    public:
        Empleado();
        Empleado(string nom, int num, Paquete paq);
        void setNombre(string nom);
        void setNumEmpleado(int num);
        string getNombre();
        int getNumEmpleado();
        void recibirPaquete(Paquete paq);
        void enviarPaqueteInterno();
};

#endif