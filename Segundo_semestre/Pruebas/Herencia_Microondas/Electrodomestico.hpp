#ifndef ELECT_H
#define ELECT_H

#include <string>

using std::string;

class Electrodomestico{
    private:
        int encendido;
    public:
        Electrodomestico();
        bool isEncendido();
        void setEncendido(bool);
        string toString();
};

#endif