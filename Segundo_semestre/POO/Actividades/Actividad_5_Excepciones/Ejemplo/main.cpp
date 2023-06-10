#include <iostream>
#include "Cafetera.hpp"

using std::cout;
using std::endl;


int main(){
    Cafetera c1{"Goteo", 4.5, 1};
    Cafetera c2{"Nesspresso", 1.5, 2};
    Cafetera c3{"DeLonghi", 10, 5};
    Cafetera c4{"Profesional", 20,10};
    cout << c1.toString() << endl;
    cout << c2.toString() << endl;
    

    int total = c1 + c2 + c3 + c4;

    cout << "Tus dos cafeteras pueden hacer " << total << " tazas por minuto" << endl;
    
    string masCapacidad = c1 % c2;

    cout << "Tiene mas capacidad la: " << masCapacidad << endl;
    
    if(c2 > c3) cout << "La primera tiene mas" << endl;
        else cout << "La segunda tiene mas" << endl;
    
    Cafetera cafeteraX2 = c1 * c2;

    cout << cafeteraX2.toString() << endl;

    return 0;
}