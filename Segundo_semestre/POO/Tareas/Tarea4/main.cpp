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
#include "TresDimensiones.hpp"

using std::cout;
using std::endl;

int main(){
    Curva teleCurva{"Sansu", "Curvo", 500, 67.2};
    TresDimensiones tele3D{"Elyi", "3D", 600, 50.3};
    Tarjeta tarjetita{0};
    Domicilio mansionPepe{};
    Cliente pepito{"Pepito", 10, tarjetita, mansionPepe};
    Tienda sanvornz{"Sanvornz", pepito};
    Television* tvPtr = nullptr;
    tvPtr = &tele3D;
    sanvornz.aumentarStock(tvPtr);
    tvPtr = &teleCurva;
    sanvornz.aumentarStock(tvPtr);
    sanvornz.venderTelevision();
    cout << endl;
    sanvornz.venderTelevision();
    cout << endl;

    cout << "RECIBO CON INFORMACION DE TELEVISORES SIN NOMBRES\n" << endl;
    cout << teleCurva + tele3D << endl << endl;
    
    cout << "RECIBO CON NOMBRES" << endl;
    cout << sanvornz.getRecibo(teleCurva, tele3D) << endl << endl;
    
    if(teleCurva > tele3D) cout << teleCurva.getModelo() << " Pesa mas que " << tele3D.getModelo() << endl << endl;
        else cout << tele3D.getModelo() << " Pesa mas que " << teleCurva.getModelo() << endl << endl;
    
    if(teleCurva < tele3D) cout << teleCurva.getModelo() << " Pesa menos que " << tele3D.getModelo() << endl << endl;
        else cout << tele3D.getModelo() << " Pesa menos que " << teleCurva.getModelo() << endl << endl;

    return 0;
}
    /*Domicilio casita{};
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
    cout << endl;*/

    // PRUEBAS DE DERIVADAS DE TELEVISION
    /*cout << "***** Pruebas de derivadas de televisores: " << endl;
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

    TresDimensiones tvtresde{"Patito","3D", 900};
    tvCurva2.prender();
    tvCurva2.subirVolumen();
    tvCurva2.subirVolumen();
    tvCurva2.selectCanal("Avatar 9");
    cout << tvCurva2.toString() << endl << endl;

    cout << "***** Prueba con polimorfismo: " << endl;
    Television* televisionPtr = nullptr;
    Television* televisiones[3];
    televisiones[0] = new Curva{"elPanaSonic", "Curvo", 500};
    televisiones[1] = new Inteligente{"China", "Inteligente", 700};
    televisiones[2] = new TresDimensiones{"CocaCola", "3D", 900};
    
    for(int i = 0; i < 3; i++){
        televisionPtr = televisiones[i];
        televisionPtr->prender();
        televisionPtr->subirVolumen();
        televisionPtr->subirVolumen();
        cout << "Volumen actual " << televisionPtr->getVolumen() << endl;
        televisionPtr->selectCanal("Video de risa");
        televisionPtr->bajarVolumen();
        cout << televisionPtr->toString() << endl << endl;
    }*/



    // // Tarea 2
    // cout << "***** TAREA 2 ****" << endl;
    // Tarjeta bisa{0};
    // Domicilio mansionpepe{};
    // Cliente pepito{"Pepito", 10, bisa, mansionpepe};
    // Tienda kosko{"Kosko", pepito};
    // Tienda chedrawi{"Chedrawi", pepito};
    // Tienda zorriana{"Zorriana", pepito};
    // Curva teleCurva{"Sansu", "Curvo", 873};
    // TresDimensiones tele3D{"Elyi", "3D", 4938};
    // Inteligente teleInteligente{"zonik", "Inteligente", 7364};
    // Tienda* tiendaPtr = nullptr;
    // Television* televisionesPtr = nullptr;

    // tiendaPtr = &kosko;
    // televisionesPtr = &teleCurva;
    // tiendaPtr->aumentarStock(televisionesPtr);
    // tiendaPtr->venderTelevision();
    // cout << endl;
    // televisionesPtr->prender();
    // televisionesPtr->subirVolumen(); televisionesPtr->subirVolumen();
    // televisionesPtr->bajarVolumen();
    // televisionesPtr->selectCanal("Canal 5");
    // cout << televisionesPtr->toString() << endl;
    
    // cout << endl;

    // tiendaPtr = &chedrawi;
    // televisionesPtr = &tele3D;
    // tiendaPtr->aumentarStock(televisionesPtr);
    // tiendaPtr->venderTelevision();
    // cout << endl;
    // televisionesPtr->prender();
    // televisionesPtr->subirVolumen(); televisionesPtr->subirVolumen();
    // televisionesPtr->bajarVolumen();
    // televisionesPtr->selectCanal("Avatar 10");
    // cout << televisionesPtr->toString() << endl;

    // cout << endl;

    // tiendaPtr = &zorriana;
    // televisionesPtr = &teleInteligente;
    // tiendaPtr->aumentarStock(televisionesPtr);
    // tiendaPtr->venderTelevision();
    // cout << endl;
    // televisionesPtr->prender();
    // televisionesPtr->subirVolumen(); televisionesPtr->subirVolumen();
    // televisionesPtr->bajarVolumen();
    // televisionesPtr->selectCanal("Netlfix");
    // cout << televisionesPtr->toString() << endl;

    // cout << endl;