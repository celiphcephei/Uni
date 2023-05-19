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