#ifndef INTELIGENTE_HPP
#define INTELIGENTE_HPP

#include "Television.hpp"

class Inteligente: public Television{
    bool wifi;
    public:
        Inteligente();
        Inteligente(string, string, int);
        bool hasWifi();
        virtual string toString();
};

#endif