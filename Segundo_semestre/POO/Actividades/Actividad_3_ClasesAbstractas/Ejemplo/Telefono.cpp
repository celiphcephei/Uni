#include "Telefono.hpp"

Telefono::Telefono(string num): SistemaComunicacion{"Telefonica"}, numero{num} {}

void Telefono::encender(){encendido = true;}
void Telefono::apagar(){encendido = false;}
string Telefono::getNumero(){return numero;}
bool Telefono::marcar(string num){
    if(encendido)
        cout << "Marcando al numero " << num << endl;
    else
        cout << "Enciende primero el telefono" << endl;
}