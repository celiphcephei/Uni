#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::stringstream;

int main(){
    ifstream miArchivo;
    miArchivo.open("archivo.txt");
    string linea;
    string nombre;
    string matricula;
    while (getline(miArchivo, linea)){
        cout << linea << endl;
        stringstream token(linea);
        getline(token, nombre, ',');
        cout << nombre << endl;
        getline(token, matricula, ',');
        cout << matricula << endl;
    }

}