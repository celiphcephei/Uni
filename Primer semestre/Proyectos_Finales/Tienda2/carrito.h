#ifndef CARRITO_H8
#define CARRITO_H

#include "productos.h"
#include "inventario.h"

class Carrito{
    private:
        Inventario inventario;
        int total;
    public:
        void setTotal(Productos producto, int cantidad);
        
};

#endif