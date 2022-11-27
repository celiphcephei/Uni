#ifndef CASILLA_H
#define CASILLA_H

class Casilla
{
    private:
        int posicion;
        int cambio_pos;
    public:
        int mover();
        int getpos();
        int getcambiopos();
        void setpos(int p);
        void setcambiopos(int cp);
        Casilla(int p, int c);
        Casilla(); //Sobre carga, 
        ~Casilla();
        void toString();
};

#endif