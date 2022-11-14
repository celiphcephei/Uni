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
        void setpos(int p);
        int getcambiopos();
        void setcambiopos(int cp);
};

#endif