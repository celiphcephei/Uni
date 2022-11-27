#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "productos.h"
#include <vector>

using std::vector;

class Inventario{
    private:
        int opcion;
        vector <Productos> productos;
    public:
        void setOpcion(int op);
        void setProducto(Productos product);
};

#endif