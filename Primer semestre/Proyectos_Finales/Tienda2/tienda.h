#ifndef TIENDA_H
#define TIENDA_H

#include "inventario.h"
#include "carrito.h"

class Tienda{
    private:
        Inventario inventario;
        int opcion;
    public:
        Tienda();
        Tienda(Inventario inv);
        void menuPrincipal();
        void seleccionarProducto();
        
};

#endif