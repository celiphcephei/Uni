// Garcia Moran Renato A01799387
// Jose Eduardo Rosas Ponciano A01784461
#ifndef TARJETA_HPP
#define TARJETA_HPP

class Tarjeta{
    int cargo = 0;
    public:
        Tarjeta();
        Tarjeta(int);
        void setCargo(int);
        void sumarCargo(int);
        int getCargo();
};

#endif