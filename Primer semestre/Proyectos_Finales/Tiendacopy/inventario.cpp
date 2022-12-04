#include <iostream>
#include "inventario.h"




void Inventario::setOpcion(int op){
    opcion = op;
}

void Inventario::crearProductos(){
    Productos producto1, producto2, producto3;
    ifstream miArchivo;
    miArchivo.open("inventario.csv");
    string linea, id, descripcion, precio, stock;
    for(int i = 0; i < 3; i++){
        while (getline(miArchivo, linea)){
            stringstream token(linea);
            getline(token, id, ',');
            getline(token, descripcion, ',');
            getline(token, precio, ',');
            getline(token, stock, ',');
        }
        int stock1 = stoi(stock);
        double precio1 = stod(precio);
        if(i == 0){
            producto1.setId(id);
            producto1.setDescripcion(descripcion);
            producto1.setPrecio(precio1);
            producto1.setStock(stock1);
        } else if (i == 1){
            producto2.setId(id);
            producto2.setDescripcion(descripcion);
            producto2.setPrecio(precio1);
            producto2.setStock(stock1);
        } else if (i == 2){
            producto3.setId(id);
            producto3.setDescripcion(descripcion);
            producto3.setPrecio(precio1);
            producto3.setStock(stock1);
        }
    setProducto(producto1);
    setProducto(producto2);
    setProducto(producto2);
    }
}

void Inventario::setProducto(Productos product){
    productos.push_back(product);
}

void Inventario::mostrarProductos(){
    for (int i = 0; i < 3; i++){
        cout << i << " : " << productos[i].getId() << " " << productos[i].getDescripcion() << " " << productos[i].getPrecio();
    }
}