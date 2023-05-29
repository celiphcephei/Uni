// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
/*
    Respecto a la tarea 1, se desecho por completo
    y se realizo desde 0 por incoherencias entre las clases
    y una implementacion mejor pensada.
*/
#include <iostream>
#include "Tienda.hpp"
#include "Persona.hpp"
#include "Cliente.hpp"
#include "Tarjeta.hpp"
#include "Domicilio.hpp"
#include "Television.hpp"
#include "Curva.hpp"
#include "Inteligente.hpp"

using std::cout;
using std::endl;

int main(){
    Domicilio casita{};
    Tarjeta tarjeta{0};
    Cliente juanito{"Juan", 22, tarjeta, casita};
    Curva tvCurva{"lgbt", "Curvo", 500};

    // PRUEBAS DE LA CLASE CLIENTE, DERIVADA DE LA CLASE ABSTRACTA PERSONA JUNTO A LA CLASE TARJETA
    cout << "***** Pruebas cliente y tarjeta: " << endl;
    Persona* juanitoPtr;
    juanitoPtr = &juanito;
    cout << juanitoPtr->hablar() << endl;
    cout << juanitoPtr->getEdad() << endl;
    cout << juanitoPtr->getNombre() << endl;
    juanito.pagar(tvCurva.getPrecio());
    cout << juanito.getDeuda() << endl;
    cout << juanito.toString() << endl << endl;

    // PRUEBAS DE LA CLASE TELEVISION Y SUS DERIVADAS JUNTO A DOMICILIO
    cout << "***** Pruebas domicilio y tv: " << endl;
    Television* tvPtr;
    tvPtr = &tvCurva;
    casita.recibirTV(tvPtr);
    cout << casita.getCuantasTV() << endl;
    tvPtr->prender();
    cout << tvPtr->toString() << endl << endl;
    
    // PRUEBAS DE LA CLASE TELEVISION CON CLIENTE, TELEVISION
    cout << "***** Pruebas Tienda, cliente: " << endl;
    Domicilio casita2{};
    Tarjeta tarjeta2{0};
    Cliente godofredo{"Godofredo", 76, tarjeta2, casita2};
    Tienda tiendita{"Wolmar", godofredo};
    tiendita.aumentarStock(tvPtr);
    tiendita.venderTelevision();
    cout << endl;

    // PRUEBAS DE DERIVADAS DE TELEVISION
    cout << "***** Pruebas de derivadas de televisores: " << endl;
    Inteligente tvInteligente{"Sansu", "Inteligente", 700};
    tvInteligente.prender();
    tvInteligente.subirVolumen();
    tvInteligente.subirVolumen();
    tvInteligente.selectCanal("Yutub");
    cout << tvInteligente.toString() << endl << endl;

    Curva tvCurva2{"elyi","Curvo", 500};
    tvCurva2.prender();
    tvCurva2.subirVolumen();
    tvCurva2.subirVolumen();
    tvCurva2.selectCanal("Canal 5");
    cout << tvCurva2.toString() << endl << endl;

    cout << "***** Prueba con polimorfismo: " << endl;
    Television* televisionPtr = nullptr;
    Television* televisiones[2];
    televisiones[0] = new Curva{"elPanaSonic", "Curvo", 500};
    televisiones[1] = new Inteligente{"marcaChina", "Inteligente", 700};
    
    for(int i = 0; i < 2; i++){
        televisionPtr = televisiones[i];
        televisionPtr->prender();
        televisionPtr->subirVolumen();
        televisionPtr->subirVolumen();
        cout << "Volumen actual " << televisionPtr->getVolumen() << endl;
        televisionPtr->selectCanal("Video de risa");
        televisionPtr->bajarVolumen();
        cout << televisionPtr->toString() << endl << endl;
    }

    return 0;
}