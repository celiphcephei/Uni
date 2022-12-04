#include <iostream>
#include "tienda.h"

Tienda::Tienda(){
    menuPrincipal();
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
    cout << "Fin del programa";
}

void Tienda::seleccionarProducto(){
    inventario.mostrarProductos();
    int opc = 0;
    while (opc != -1){
        cout << "¿Que producto desesas comprar? (-1 para cancelar) " ;
    }

}