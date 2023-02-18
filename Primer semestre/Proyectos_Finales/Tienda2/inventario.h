#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "productos.h"
#include <vector>

using std::vector;

class Inventario{
    private:
        vector <Productos> productos;
    public:
        void mostrarProductos();
        void crearInventario(Productos producto);
        string verInventario(int num);
};

#endif