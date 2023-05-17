#ifndef PAQUETE_H
#define PAQUETE_H

#include <string>

using std::string;

class Paquete{
    private:
        string direccion;
        string descripcion;
    public:
        Paquete();
        Paquete(string direc,string desc);
        void setDireccion(string direc);
        void setDescripcion(string desc);
        string getDireccion();
        string getDescripcion();
};

#endif