// Tarea 1
// Renato Garcia Moran A01799387
// Jose Eduardo Rosas Ponciano A01784461

#ifndef TELEVISION_H
#define TELEVISION_H

#include <string>

using std::string;

class Television{
    private:
        int precio;
        string modelo;
        int cantidad;
    public:
        Television();
        Television(int prec, string mod, int cant);
        void setPrecio(int prec);
        int getPrecio();
        void setModelo(string mod);
        string getModelo();
        void setCantidad(int cant);
        int getCantidad();
        void sumarCantidad();
        void restarCantidad();
};

#endif