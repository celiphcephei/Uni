#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Estudiante{
    private:
        static string escuela;
        string nombre;
        int edad;
        float promedio;
    public:
        Estudiante();
        Estudiante(string n, int e, float p);
        ~Estudiante();
        void setNombre(string n);
        void setEdad(int e);
        void setPromedio(float p);
        string getNombre();
        int getEdad();
        float getPromedio();
};

#endif