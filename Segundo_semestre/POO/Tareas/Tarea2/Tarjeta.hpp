#ifndef TARJETA_HPP
#define TARJETA_HPP

class Tarjeta{
    int cargo = 0;
    public:
        Tarjeta(int);
        void setCargo(int);
        void sumarCargo(int);
        int getCargo();
};

#endif