#include <iostream>
#include "productos.h"
#include "inventario.h"
#include "tienda.h"
#include "carrito.h"

//No me dio la capacidad d abstraccion:(
    
int main(){
    Productos producto1("ID0001", "Agua Embotellada", 15.54, 25);
    Productos producto2("ID0002","Bote de Palomitas", 25.65, 125);
    Productos producto3("ID0003", "ICE de cereza", 40.23, 50);
    Inventario inventario;
    inventario.crearInventario(producto1);
    inventario.crearInventario(producto2);
    inventario.crearInventario(producto3);
    Tienda tienda(inventario);
    tienda.menuPrincipal();
    return 0;
}