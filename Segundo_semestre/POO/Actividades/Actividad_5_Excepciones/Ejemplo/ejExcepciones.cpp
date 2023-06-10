#include <iostream>
#include <string>
#include <stdexcept>
#include "Cafetera.hpp"

using std::cout;
using std::cin;
using std::endl;

float obtenCapacidad(){
    float capacidad{0};
    bool valido{false};
    while(!valido){
        try{
            cout << "Dime la capacidad: "; cin >> capacidad;
            if(cin.fail()) throw std::invalid_argument("Capacidad debe de ser un numero flotante.");
            else{
                valido = true;
            }
        } catch(std::invalid_argument objError){
            cout << "Error en la entrada de tus datos" << endl
                 << objError.what() << endl;
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return capacidad;
}

int obtenTazas(){
    float capacidad{0};
    bool valido{false};
    while(!valido){
        try{
            cout << "Dime el numero de tazas: "; cin >> capacidad;
            if(cin.fail()) throw std::invalid_argument("El numero de tazas debe de ser un numero entero.");
            else{
                valido = true;
            }
        } catch(std::invalid_argument objError){
            cout << "Error en la entrada de tus datos" << endl
                 << objError.what() << endl;
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return capacidad;
}

int main(){
    std::string nombre {""};
    float cap =obtenCapacidad();
    int tazas = obtenTazas();

    cout << "Dime el nombre de la cafetera: " ; cin >> nombre;

    Cafetera caf1{nombre, cap, tazas};
    cout << caf1.toString() << endl;
    return 0;
}