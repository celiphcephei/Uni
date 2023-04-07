#include <iostream>
#include <string>
#include "estudiante.h"

using std::cout;
using std::endl;
using std::string;

int main(){
    Estudiante renato("Renato", 20, 10.0F), pepe;
    pepe.setNombre("Pepillo");
    cout << pepe.getNombre() << endl;
    return 0;
}