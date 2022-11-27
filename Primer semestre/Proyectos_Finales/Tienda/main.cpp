#include <iostream>
#include <fstream>
#include <sstream>
#include "productos.h"
#include "inventario.h"

using std::cout;
using std::cin;
using std::endl;
using std::stoi;
using std::stod;
using std::string;
using std::ifstream;
using std::stringstream;

int main(){
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
        } else if ( i == 2){
            producto3.setId(id);
            producto3.setDescripcion(descripcion);
            producto3.setPrecio(precio1);
            producto3.setStock(stock1);
        }
    }
    cout << producto1.getId() << endl;
    cout << producto2.getId() << endl;
    cout << producto3.getId() << endl;
    return 0;
}