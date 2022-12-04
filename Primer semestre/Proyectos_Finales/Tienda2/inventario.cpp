#include <iostream>
#include "inventario.h"
#include <string>
#include <fstream>
#include <sstream>

using std::stoi;
using std::stod;
using std::string;
using std::ifstream;
using std::stringstream;
using std::string;
using std::cout;
using std::endl;

void Inventario::mostrarProductos(){
    ifstream miArchivo;
    int i = 0;
    miArchivo.open("inventario.csv");
    string linea, id, descripcion, precio, stock;
        while (getline(miArchivo, linea)){
            stringstream token(linea);
            getline(token, id, ',');
            getline(token, descripcion, ',');
            getline(token, precio, ',');
            getline(token, stock, ',');
            cout << i << " : " << descripcion << " " << precio << endl;
            i++;
        }
    //No srivió esto porq copia el mismo producto en cada objeto y aun no le se
    //     int stock1 = stoi(stock);
    //     double precio1 = stod(precio);
    //     if(i == 0){
    //         producto1.setId(id);
    //         producto1.setDescripcion(descripcion);
    //         producto1.setPrecio(precio1);
    //         producto1.setStock(stock1);
    //         productos.push_back(producto1);
    //     } else if (i == 1){
    //         producto2.setId(id);
    //         producto2.setDescripcion(descripcion);
    //         producto2.setPrecio(precio1);
    //         producto2.setStock(stock1);
    //         productos.push_back(producto2);
    //     } else if (i == 2){
    //         producto3.setId(id);
    //         producto3.setDescripcion(descripcion);
    //         producto3.setPrecio(precio1);
    //         producto3.setStock(stock1);
    //         productos.push_back(producto3);
    //     }
    // }
}

// void Inventario::mostrarProductos(){
//     for (int i = 0; i < 3; i++){
//         cout << i << " : " << productos[i].getId() << " " << productos[i].getDescripcion() << " " << productos[i].getPrecio() << endl;
//         cout << productos[i].getDescripcion();
//     }
// }

void Inventario::crearInventario(Productos producto){
    productos.push_back(producto);
}