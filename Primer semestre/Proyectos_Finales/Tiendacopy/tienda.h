#ifndef TIENDA_H
#define TIENDA_H

#include "inventario.h"


using std::cout;
using std::cin;
using std::endl;

class Tienda{
    private:
        Productos producto1, producto2, producto3;
        Inventario inventario;
        int opcion;
    public:
        Tienda();
        void menuPrincipal();
        void seleccionarProducto();
        
};

#endif