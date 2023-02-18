#include <iostream>
#include "inventario.h"
#include <string>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;
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
}

void Inventario::crearInventario(Productos producto){
    productos.push_back(producto);
}

string Inventario::verInventario(int num){
    return productos[num].getDescripcion();
}