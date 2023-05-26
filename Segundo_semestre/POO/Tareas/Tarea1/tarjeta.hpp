// Tarea 1
// Renato Garcia Moran A01799387
// Jose Eduardo Rosas Ponciano A01784461

#ifndef TARJETA_H
#define TARJETA_H

class Tarjeta{
    private:
        int cargo;
    public:
    Tarjeta();
    Tarjeta(int car);
    void sumarCargo(int car);
    void setCargo(int car);
    int getCargo();
};

#endif