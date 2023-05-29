#ifndef TELEVISION_HPP
#define TELEVISION_HPP

#include <iostream>
#include <string>

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
        void prender();
        void apagar();
        void subirVolumen();
        void bajarVolumen();
        int getVolumen();
        void selectCanal(string);
        string getCanal();
        virtual string toString() = 0;
};

#endif