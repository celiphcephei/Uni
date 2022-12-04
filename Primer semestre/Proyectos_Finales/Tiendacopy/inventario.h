#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "productos.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::endl;
using std::stoi;
using std::stod;
using std::string;
using std::ifstream;
using std::stringstream;

class Inventario{
    private:
        int opcion;
        vector <Productos> productos;
    public:
        void setOpcion(int op);
        void crearProductos();
        void setProducto(Productos product);
        void mostrarProductos();
};

#endif