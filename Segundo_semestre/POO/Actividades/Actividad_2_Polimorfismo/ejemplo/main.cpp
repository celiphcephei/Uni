#include <iostream>
#include "Electrodomestico.hpp"
#include "Licuadora.hpp"

using std::cout;
using std::endl;

int main(){
    cout << "***** Pruebas de licuadora" << endl;
    Electrodomestico *inventario[2];
    Electrodomestico *licUsando = nullptr;

    inventario[0] = new Licuadora{};
    inventario[1] = new Licuadora{true,"Triturando", 13, true};

    licUsando = inventario[0];
    cout << licUsando->toString() << endl;

    licUsando = inventario[1];
    cout << licUsando->toString() << endl;
    
    for(int i = 0; i < 2; i++){
        licUsando = inventario[i];
        cout << licUsando->dimeFuncionActual() << endl;
    }
    
    Licuadora *licDef = (Licuadora*)inventario[0];
    Licuadora *licComp = (Licuadora*)inventario[0];

    licDef->licuar();
    licComp->licuar();
    
    return 0;
}