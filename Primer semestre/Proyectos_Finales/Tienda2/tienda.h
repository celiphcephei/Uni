#ifndef TIENDA_H
#define TIENDA_H

#include "inventario.h"
#include "carrito.h"

class Tienda{
    private:
        Inventario inventario;
        Carrito carrito;
        int opcion;
    public:
        Tienda();
        Tienda(Inventario inv);
        void menuPrincipal();
        void seleccionarProducto();
        void verCarrito();

};

#endif