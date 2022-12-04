#include <iostream>
#include "carrito.h"

void Carrito::setTotal(Productos producto, int cantidad){
    int precio, total;
    precio = producto.getPrecio();
    total = precio * cantidad;
}

