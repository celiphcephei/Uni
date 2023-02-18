#include <iostream>
#include "carrito.h"

using std::cout;
using std::endl;

void Carrito::setTotal(Productos producto, int cantidad){
    int precio, total;
    precio = producto.getPrecio();
    total = precio * cantidad;
}

void Carrito::setProducto(string cadena){
    product.push_back(cadena);
}

void Carrito::getCarrito(vector<string>&vect, int cantidad){
    for(int i = 0; vect.size(); i++){
        cout << vect[i] << endl;
    }
}