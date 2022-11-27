#include <iostream>
#include "inventario.h"

void Inventario::setOpcion(int op){
    opcion = op;
}

void Inventario::setProducto(Productos product){
    productos.push_back(product);
}