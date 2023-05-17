#include "empleado.hpp"

Empleado::Empleado(): nombre{""}, numEmpleado{0}, envio{} {}
Empleado::Empleado(string nom, int num, Paquete paq): nombre{nom}, numEmpleado{num}, envio{paq} {}

void Empleado::setNombre(string nom){nombre = nom;}
void Empleado::setNumEmpleado(int num){numEmpleado = num;}

string Empleado::getNombre(){return nombre;}
int Empleado::getNumEmpleado(){return numEmpleado;}

void Empleado::recibirPaquete(Paquete paq){
    envio = paq;
    cout << "Recibi el paquete: " << envio.getDescripcion() << endl;
}

void Empleado::enviarPaqueteInterno(){
    cout << "Enviando el paquete " << envio.getDescripcion() << endl;
}
