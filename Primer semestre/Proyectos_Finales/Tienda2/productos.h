#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include "productos.h"
#include <string>

using std::string;

class Productos{
    private:
        string id;
        string descripcion;
        double precio;
        int stock;
    public:
        Productos();
        Productos(string id, string descripcion, double precio ,int stock);
        string getId();
        string getDescripcion();
        double getPrecio();
        int getStock();
        void setId(string id);
        void setDescripcion(string desc);
        void setPrecio(double prec);
        void setStock(int stk);
};



#endif