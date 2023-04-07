#include "estudiante.h"

string Estudiante::escuela = "ITESM";

Estudiante::Estudiante(): nombre("?"), edad(0), promedio(0){
    cout << "Estudiante " << nombre << " del " << escuela << " registrado." << endl;
}

Estudiante::Estudiante(string n, int e, float p): nombre(n), edad(e), promedio(p){
    cout << "Estudiante " << nombre << " del " << escuela << " registrado." << endl;
}

Estudiante::~Estudiante(){
    cout << "Finalizado." << endl;
}

void Estudiante::setNombre(string n){
    nombre = n;
}

void Estudiante::setEdad(int e){
    edad = e;
}

void Estudiante::setPromedio(float p){
    promedio = p;
}

string Estudiante::getNombre(){
    return nombre;
}

int Estudiante::getEdad(){
    return edad;
}

float Estudiante::getPromedio(){
    return promedio;
}