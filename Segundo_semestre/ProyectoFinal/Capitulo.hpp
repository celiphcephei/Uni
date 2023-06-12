#ifndef CAPITULO_HPP
#define CAPITULO_HPP

#include <string>

using std::string;

class Capitulo{
        int numero;
        string titulo;
        int calificacion;
    public:
        Capitulo();
        Capitulo(int, string, int);

        void setNumero(int);
        int getNumero();

        void setTitulo(string);
        string getTitulo();

        void setCalificacion(int);
        int getCalificacion();

        friend int operator +(int, Capitulo&);

};

#endif