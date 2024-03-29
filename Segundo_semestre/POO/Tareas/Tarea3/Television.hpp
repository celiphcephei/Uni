// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef TELEVISION_HPP
#define TELEVISION_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Television{
    string marca;
    string modelo;
    int precio;
    int volumen;
    string canal;
    bool encendido;
    protected:
        Television();
        Television(string, string, int);
    public:
        void setMarca(string);
        string getMarca();
        void setModelo(string);
        string getModelo();
        void setEncendido(bool);
        bool isEncendido();
        void setPrecio(int);
        int getPrecio();
        void masVolumen(int);
        void menosVolumen(int);
        virtual void prender() = 0;
        virtual void apagar() = 0;
        virtual void subirVolumen() = 0;
        virtual void bajarVolumen() = 0;
        int getVolumen();
        virtual void seleccion(int) = 0;
        void setCanal(string);
        string getCanal();
        virtual string toString() = 0;
        virtual void funcionEspecial() = 0;
};

#endif