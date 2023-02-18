#ifndef CARRITO_H
#define CARRITO_H

#include "productos.h"
#include "inventario.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

class Carrito{
    private:
        Inventario inventario;
        int total;
        vector <string> product;
    public:
        void setTotal(Productos producto, int cantidad);
        void setProducto(string cadena);
        void getCarrito(vector<string>&vect, int cantidad);
};

#endif