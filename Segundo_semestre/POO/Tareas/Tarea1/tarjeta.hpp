#ifndef TARJETA_H
#define TARJETA_H

class Tarjeta{
    private:
        int saldo;
    public:
    Tarjeta();
    Tarjeta(int sald);
    void setSaldo(int sald);
    int getSaldo();
    void agregarFondos(int dinero);
    void restarFondos(int dinero);
};

#endif