#include <iostream>
#include "tienda.h"

using std::cout;
using std::cin;
using std::endl;

Tienda::Tienda(){}

Tienda::Tienda(Inventario inv){
    inventario = inv;
}

void Tienda::menuPrincipal(){
    int opc;
    cout << "1) Seleccionar producto" << endl;
    cout << "2) Ver carrito de compras" << endl;
    cout << "3) Terminar compra" << endl;
    cout << "4) Salir" << endl;
    cout << "Selecciona opcion: ";
    cin >> opc;
    opcion = opc;
    while(opcion != 4){
        if (opcion == 1){
            seleccionarProducto();
        }
    }
}

void Tienda::seleccionarProducto(){
    inventario.mostrarProductos();
    int prod = 0;
    int cant = 0;
    while (prod != -1){
        cout << "¿Que producto desesas comprar? (-1 para cancelar) ";
        cin >> prod;
        if (prod != -1){
            cout << "¿Cuantas unidades desesas adquirir? (-1 para cancelar) ";
            cin >> cant;
        }
        if( prod == -1 || cant == -1){
            menuPrincipal();
        } else if(prod == 0){
            inventario.verInventario(0);
        } else if(prod == 1){
            inventario.verInventario(1);
        } else if(prod == 2){
            inventario.verInventario(2);
        }
    }
}