// Renato Garcia Moran A01799387

#include <iostream>
#include "TV.hpp"
#include "DigitalTV.hpp"
#include "NuevaGenTV.hpp"

using std::cout;
using std::endl;

void pruebaPolimorfismo(TV* obj){
    obj->cambiarCanal(2);
}

int main(){
    cout << "\n***** Pruebas de las TV Digitales\n";
    DigitalTV tvD1{100,"LG"};
    cout << tvD1.toString() << endl;
    tvD1.cambiarCanal(73);
    cout << tvD1.getCanalDigital() << endl;
    cout << tvD1.getCanal() << endl;
    cout << tvD1.getMarca() << endl;
    tvD1.cambiarCanal(5);
    cout << tvD1.toString() << endl;
    cout << "\n***** Pruebas de TV Nueva Generacion\n";
    NuevaGenTV tvNG1{3};
    cout << tvNG1.toString() << endl;
    tvNG1.cambiarCanal(111);
    cout << tvNG1.isHoloProy() << endl;
    cout << tvNG1.getGeneracion() << endl;
    cout << tvNG1.getCanal() << endl;
    tvNG1.setHoloProy(false);
    cout << tvNG1.toString() << endl;
    cout << "\n***** Pruebas de Polimorfismo\n";
    TV *apTV;
    apTV = &tvD1; //Usar TV Digital
    apTV->cambiarCanal(77);
    apTV = &tvNG1; //Usar TV Nueva Genearacion
    apTV->cambiarCanal(0);

    //AÑADE AQUÍ ABAJO EL CÓDIGO DE LA PREGUNTA OPCIONAL DE PUNTOS EXTRA
    cout << endl << "**** PRUEBA DE LA FUNCION EXTRA" << endl;
    TV* televisores[4];
    televisores[0] = new DigitalTV{100, "LG2"};
    televisores[1] = new DigitalTV{200, "LG3"};
    televisores[2] = new NuevaGenTV{4};
    televisores[3] = new NuevaGenTV{5};
    
    TV* tvActual;
    for(int i = 0; i < 4; i++){
    tvActual = televisores[i];
    pruebaPolimorfismo(tvActual);
    }
    return 0;
}